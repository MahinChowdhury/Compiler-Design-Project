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
math_op             ([\+\-\*\/%])
ass_op              (\+=|\-=|\*=|\/=|\%=|\&=|\=|\^=|\<<=|\>>=)
comp_op             (\!=|==|>|<|>=|<=)

variable_dec        ({datatype}[ ]+([ ]*{id}[ ]*([=][ ]*{number})?[ ]*[\,]?)+)

singleline          ([\/][\/][^\n]*)
multiline           [\/][\*](.*[\n]*)*[\*][\/]

if                  ("if"[ ]*[(]([ ]*{id}|{number})[ ]*{comp_op}[ ]*({id}|{number})[ ]*[)][ ]*[{][^{}]*[}])
elif                ("elif"[ ]*[(]([ ]*{id}|{number})[ ]*{comp_op}[ ]*({id}|{number})[ ]*[)][ ]*[{][^{}]*[}])
else                ("else"[ ]*[{][^{}]*[}])

forloop1            ("for"[ ]*{id}[ ]*"in"[ ]*{id}[ ]*[{][^{}]*[}])
forloop2            ("for"[ ]*{id}[ ]*"in"[ ]*[(][0-9]*[\,][0-9]*([\,][0-9]*)?[)][ ]*[{][^{}]*[}])
whileloop           ("while"[ ]*[(].*[)][ ]*[{][^{}]*[}])
function            ("func"[ ]*{id}[(]({datatype}[ ]*{id}[\,]*)*[)][ ]*[\-][\>][ ]*{datatype}[ ][{][^{}]*[}])

print               ("print"[(]({id}+|{number}|{string}+)+[)])
eof                 [\n]
logical_op          ("or"|"and"|"xor"|\&&|\|)
bitwise_op          (&|\|\^|>>|<<)
unary_op            (({id}("++"|"--"))|(("++"|"--"){id}))
assignment          ({id}[ ]*{ass_op}[ ]*({id}|{number})[ ]*({math_op}[ ]*({id}|{number}))?)
return              ("return"([01])?)
skip_keyword        ("continue"|"break")

%%

{logical_op}        {s=yytext;print("logical operators",s);}
{bitwise_op}        {s=yytext;print("bitwise operators",s);}
{variable_dec}      {
    
    s=yytext;print("variable declare",s);
    cntKey++;
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
        cntId++;
    }
}

{unary_op}          {s=yytext;print("uanry operator",s);}
{return}            {s=yytext;print("return keyword",s);cntKey++;}
{skip_keyword}      {s=yytext;print("skip keyword",s);cntKey++;}
{binary}            {s=yytext;print("Boolean",s);}
{datatype}          {s=yytext;print("Datatype",s);cntKey++;}
{integer}           {s=yytext;print("Integer",s);}
{string}            {s=yytext;print("String",s);}
{number}            {s=yytext;print("Number",s);}
{assignment}        {s=yytext;print("Assignment",s);}
{singleline}        {s=yytext;print("Single Line Comment",s);}
{multiline}         {s=yytext;print("Multi Line Comment",s);}
{if}                {s=yytext;print("if Condition",s);cntKey++;}
{elif}              {s=yytext;print("else if Condition",s);cntKey++;}
{else}              {s=yytext;print("else Condition",s);cntKey++;}
{forloop1}          {s=yytext;print("for loop1",s);cntKey++;}
{forloop2}          {s=yytext;print("for loop2",s);cntKey++;}
{whileloop}         {s=yytext;print("while loop",s);cntKey++;}
{function}          {s=yytext;print("function",s);}
{print}             {s=yytext;print("print",s);cntKey++;}
{eof}               {cntStmt++;}
%%

int yywrap(){
    return 1;
}

int main(){
    
    yyin = freopen("temp.txt","r",stdin);
    cout<<"Evaluation is running... \n";
    yylex();

    cout << "Identifiers : " << cntId << "\n";
	cout << "Keywords : " << cntKey << "\n";
	cout << "Statements: " << cntStmt << "\n";
}