#include<stdio.h>
#include<math.h>
int main()
{
    int n,d;
    while(scanf("%d %d",&n,&d)!=EOF && (n+d))
    {
        long double ans=1.0;
        while(d--)
            ans*=n;
        printf("%0.Lf\n",ans);
    }
    return 0;
}
