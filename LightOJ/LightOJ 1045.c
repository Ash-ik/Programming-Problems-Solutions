#include<stdio.h>
#include<math.h>
#define read freopen("dataN.txt","r",stdin)
double f[1000005]={0};
int digit(int num,int base)
{
    return floor(f[num]/(f[base]-f[base-1])+1);
}
int main()
{
    int i;
    for(i=1;i<=1000000;i++)
        f[i]=log10(i)+f[i-1];
    int n,b,t,cases=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&b);
        printf("Case %d: %d\n",cases++,digit(n,b));
    }
    return 0;
}
