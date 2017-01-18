#include<iostream>
#include<cmath>
#include<string>
#include<stdio.h>
#include<stdbool.h>
using namespace std;
void solve_equation(string eqn,double x,double y,double z,double a)
{
//    cout<<x<<" "<<y<<" "<<z<<" ";
    int negative=1;
    for(int i=0;i<eqn.length();i++)
    {
        if(eqn.at(i)=='=')
            negative=-1;
        else if(eqn.at(i)=='x')
        {
            double num=0;
            int p=i-1;
            while(p&& eqn.at(p)>='0' &&eqn.at(p)<='9')
            {
                num=num*10.0+eqn.at(p)-'0'+0.0;
                p--;
            }
            if(eqn.at(p)=='-' ||negative==-1)
                num=num*(-1);
            x=x+num;
            printf("(%d)\n",x);
        }
    }
    cout<<x;
//    cout<<x<<"x"<<y<<"y"<<z<<"z"<<"="<<a<<endl;
}
int main()
{
    int i;
    string equation1,equation2,equation3;
    double diff=1,f=0;
    double x1=0,y1=0,z1=0,a1=0,x2,y2,z2,a2,x3,y3,z3,a3,x,y,z;
    char c1,c2,c3;
    cout<<"Enter Eq 1:\n";
    while(1)
    {
        getline(cin,equation1);
    solve_equation(equation1,x1,y1,z1,a1);
    }
//    cin>>x1>>c1>>y1>>c2>>z1>>c3>>c3>>a1;
    cout<<"Enter Eq 2:";
//    cin>>x2>>c1>>y2>>c2>>z2>>c3>>c3>>a2;
    cout<<"Enter Eq 3:";
//    cin>>x3>>c1>>y3>>c2>>z3>>c3>>c3>>a3;

    for(  i=0; diff>0.00001; i++)
    {
        if(i==0)
        {
            y=z=0;
        }
        x=(1.0/x1)*(a1+(-y1*y)+(-z1*z));
       diff=abs(x-f);
            f=x;
        y=(1.0/y2)*(a2+(-x2*x)+(-z2*z));
        z=(1.0/z3)*(a3+(-x3*x)+(-y3*y));

    }
    cout<<i<<endl;
    cout<<"\nX="<<x<<" Y="<<y<<" Z="<<z<<endl;
    return 0;
}
