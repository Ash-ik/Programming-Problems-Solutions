#include<stdio.h>
#include<string.h>
#include<math.h>
#define EPS 1e-7
#define pi acos(-1.0)
int i=1,test;
double D,N,ans;

int main()
{

    scanf("%d",&test);
    while(test--)
    {
        scanf("%lf %lf",&D,&N);
        ans=D + D/(N-1);
        ans=2*pi*ans;
        printf("Case %d: %.3lf\n",i++,ans+EPS);
    }
    return 0;
}

