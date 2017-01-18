#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define EPS 1e-7
int main()
{
    const double v=sqrt(2)-1.0;
    int n,t,cases=1;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&t);
        printf("Case %d: %.2lf\n",cases++,EPS+t/v);
    }
    return 0;

}
