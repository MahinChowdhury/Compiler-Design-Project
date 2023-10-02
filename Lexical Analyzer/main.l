%{
    //Definations

    #include<bits/stdc++.h>
    using namespace std;

    string s;
    int cntId=0,cntKey=0,cntStmt=0;

    void print(string comment,string message){
        cout<<"Input : "<<message<<"\n";
        cout<<"Token : "<<comment<<"\n\n";
    }
    map<string,bool>mp;

%}

id                  [a-zA-Z][a-zA-Z_0-9]*
datatype            ("int"|"number"|"char"|"string"|"bool") 
integer             [\+\-]?[0-9]+
number              ([\+\-]?[0-9]+(([\.][0-9]*)?(e[\+\-]?[0-9]*)?)?)
string              ([\"].*[\"])
binary              ("false"|"true")
variable_dec        ({datatype}[ ]+([ ]*{id}[ ]*([=][ ]*{number})?[ ]*[\,]?)+)

singleline          ([\/][\/][^\n]*)
multiline           [\/][\*](.*[\n]*)*[\*][\/]

if                  "if"[ ]*[(].+[)][ ]*[{][^{}]*[}]
else                "else"[ ]*[{][^{}]*[}]

forloop1            ("for"[ ]*{id}[ ]*"in"[ ]*{id}[ ]*[{][^{}]*[}])
forloop2            ("for"[ ]*{id}[ ]*"in"[ ]*[(][0-9]*[\,][0-9]*([\,][0-9]*)?[)][ ]*[{][^{}]*[}])
whileloop           ("while"[ ]*[(].*[)][ ]*[{][^{}]*[}])
function            ("func"[ ]*{id}[(]({datatype}[ ]*{id}[\,]*)*[)][ ]*[\-][\>][ ]*{datatype}[ ][{][^{}]*[}])

print               ("print"[(]({id}+|{number}|{string}+)+[)])
eof                 ([\n]|";")
math_op             ([\+\-\*\/%])
ass_op              (\+=|\-=|\*=|\/=|\%=|\&=|\=|\^=|\<<=|\>>=)
comp_op             (\!=|==)
logical_op          ("or"|"and"|"xor"|\&&|\|)
bitwise_op          (&|\|\^|>>|<<)
inc_op              ("++")
dec_op              ("--")
return              ("return")
skip_keyword        ("continue"|"break")

%%

{logical_op}        {s=yytext;print("logical operators",s);}
{bitwise_op}        {s=yytext;print("bitwise operators",s);}
{variable_dec}      {
    
    s=yytext;print("variable declare",s);

    vector<string>v;

    int pos = 0,len=s.size();
    for(int i=0 ; i<len ; i++){
        if(s[i] == ' '){
            pos = i+1;
            break;
        }
    }

    string t = "";

    for(int i=pos ; i<len ; i++){
        if(s[i] == ' ') continue;
        if(s[i] == '=' || s[i] == ','){
            if((t[0]>='a' && t[0]<='z') || (t[0]>='A' && t[0]<='Z')){
                v.push_back(t);
            }
            t = "";
        }
        else t += s[i];
    }
    if((t[0]>='a' && t[0]<='z') || (t[0]>='A' && t[0]<='Z')){
        v.push_back(t);
    }

    for(auto u:v){
        if(mp[u]) {
            cout<<"Error : "<<u<<" was initialized before.\n";
        }
        mp[u] = 1;
    }

}
{return}            {s=yytext;print("return keyword",s);}
{skip_keyword}      {s=yytext;print("skip keyword",s);}
{binary}            {s=yytext;print("Boolean",s);}
{datatype}          {s=yytext;print("Datatype",s);}
{integer}           {s=yytext;print("Integer",s);}
{string}            {s=yytext;print("String",s);}
{number}            {s=yytext;print("Number",s);}
{singleline}        {s=yytext;print("Single Line Comment",s);}
{multiline}         {s=yytext;print("Multi Line Comment",s);}
{if}                {s=yytext;print("if Condition",s);}
{else}              {s=yytext;print("else Condition",s);}
{forloop1}          {s=yytext;print("for loop1",s);}
{forloop2}          {s=yytext;print("for loop2",s);}
{whileloop}         {s=yytext;print("while loop",s);}
{function}          {s=yytext;print("function",s);}
{id}                {s=yytext;print("Id",s);}
{math_op}           {s=yytext;print("math operators",s);}
{ass_op}            {s=yytext;print("assignment operators",s);}
{inc_op}            {s=yytext;print("increment operator",s);}
{dec_op}            {s=yytext;print("decrement operator",s);}
{print}             {s=yytext;print("print",s);}
.

%%

int yywrap(){
    return 1;
}

int main(){
    
    yyin = freopen("temp.txt","r",stdin);
    cout<<"Evaluation is running... \n";
    yylex();

}