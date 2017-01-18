#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    char input[20];
    int GCD,a,b,t,h1,h2,s,cases=1;
    gets(input);
    t=atoi(input);
    while(t--)
    {
        gets(input);

        h1=atoi(strtok(input," "))-1;
        h2=atoi(strtok(NULL," "))*(atoi(strtok(NULL," "))-1);
        a=h2/h1;
        b=h2-(h1*a);
        GCD=gcd(b,h1);

         b/=GCD,h1/=GCD;

            printf("Case %d:",cases++);

         if(a) printf(" %d",a);
         if(b) printf(" %d/%d",b,h1);
         puts("");
    }
    return 0;
}
