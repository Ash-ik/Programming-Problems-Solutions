#include<stdio.h>
#include<string.h>
#define EPS 1e-7

char input[30];
int i=1,test;
double r,t,ans;

int main()
{

    gets(input);
    test=atoi(input);
    while(test--)
    {
        gets(input);
        sscanf(input,"%lf %lf",&r,&t);
        ans=t/(r-1);
        printf("Case %d: %.3lf %.3lf\n",i++,ans+EPS,t+ans+EPS);
    }
    return 0;
}
