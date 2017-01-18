#include<bits/stdc++.h>
using namespace std;
typedef vector<string> vs;

bool isOperator(string x){
    if(x=="+"||x == "-"||x == "*"||x=="/")
        return true;
    return false;
}

int Priority(string x){
    if( x == "(" ) return 0 ;
    if( x == "+" or x == "-" ) return 1 ;
    if( x == "*" or x == "/" ) return 2 ;
    return -1;
}

double toDouble(string s) {
    double r = 0 ;
    istringstream sin(s);
    sin >> r ;
    return r ;
}
double solve(double a,double b,string c)
{
    if(c=="+")
        return a+b;
        if(c=="-")
        return a-b;
        if(c=="*")
        return a*b;
        if(c=="/")
        return a/b;
}

vs Split( string s) {
    vs a ;
    istringstream second(s);
    string b ;
    while(second>>b)
        a.push_back(b) ;
    return a;
}
double ans(vs p)
{
    stack<double> hold;
    for(int i=0;i<p.size();i++)
    {
        if(!isOperator(p[i]))
            hold.push(toDouble(p[i]));
            else
            {
                string operatr=p[i];
                double s1=hold.top();
                hold.pop();
                double s2=hold.top();
                hold.pop();
                double sum=solve(s2,s1,operatr);
                hold.push(sum);
            }
    }
    double t=hold.top();
    hold.pop();
    return t;
}
vs InfixToPostfix(vs s){
    int len = s.size();
    stack<string>op;
    vs ans;
    for(int i=0;i<len;i++)
        {
            if(s[i]=="(")
            op.push("(");
            else if(s[i]==")")
            {
            while(!op.empty() && op.top()!="(")
            {
                ans.push_back(op.top());
                op.pop();
            }
            op.pop();
        }
        else if(isOperator(s[i]))
        {
            while(!op.empty() &&Priority(op.top())>=Priority(s[i])){
                ans.push_back(op.top());
                op.pop();
            }
            op.push(s[i]);
        }
        else ans.push_back(s[i]);
    }
    while(!op.empty())
    {
        ans.push_back(op.top());
        op.pop();
    }
    return ans;
}


int main()
{
    int testCase;
    scanf("%d\n",&testCase);
    while(testCase--)
    {
        string p;
        getline(cin,p);
        vs numbers=Split(p);
        double n=ans(InfixToPostfix(numbers));
        printf("%.2lf\n",n);

    }
}
