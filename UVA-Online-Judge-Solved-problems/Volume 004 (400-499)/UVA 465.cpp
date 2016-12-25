#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 2147483647
typedef long long LL;
using namespace std;

int main()
{
    char x[1000];
    char verdict[3][25]={"first number too big\n","second number too big\n","result too big\n"};
    while(gets(x))
    {
        printf("%s\n",x);
        double p,q;
        char r;
        sscanf(x,"%lf %c %lf",&p,&r,&q);
        if(p>MAX)
            printf("%s",verdict[0]);
        if(q>MAX)
            printf("%s",verdict[1]);
        if(r=='+') p=p+q;
              else p=p*q;
        if(p>MAX) printf("%s",verdict[2]);
    }
    return 0;

}
