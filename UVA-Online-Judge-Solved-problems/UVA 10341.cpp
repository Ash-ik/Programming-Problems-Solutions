#include<stdio.h>
#include<math.h>
#define EPS 1e-7
using namespace std;

int p,q,r,s,t,u;

double Abs(double x)
{
    if(x<0.0) return -x;
    return x;
}
double f(double x)
{
  return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

double fd(double x)
{ // the derivative of function f
  return -p*exp(-x) + q*cos(x) - r*sin(x) + s/(cos(x)*cos(x)) + 2*t*x;
}
double root()
{
    if(f(0)==0) return 0;
    double x=0.5,x1;
    while(1)
    {
        x1=x-f(x)/fd(x);
        if(Abs(x1-x)<=EPS)
            return x;
        x=x1;
    }
}

int main()
{
    while (scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)!=EOF)
    {
        if(f(0)*f(1)>0) printf("No solution\n");
        else printf("%.4f\n",root());
    }
    return 0;
}
