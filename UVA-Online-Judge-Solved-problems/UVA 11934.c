#include<stdio.h>
int main()
{
    freopen("dataN.txt","r",stdin);
    freopen("sakib.txt","w",stdout);
    int a,b,c,d,l,x,ans;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)==5 &&!(a==0 &&b==0&&c==0&&d==0&&l==0))
    {
        ans=0;
        for(x=0;x<=l;x++)
        if((a*x*x+b*x+c)%d==0) ans++;
        printf("%d\n",ans);
    }
    return 0;
}
