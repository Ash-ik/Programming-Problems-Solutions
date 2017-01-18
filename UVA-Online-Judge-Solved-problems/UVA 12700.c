#include<stdio.h>
#include<string.h>
int main()
{

    int i=1,t,bd,www,n,tie,ab,x;
    char a[1000];
    scanf("%d",&t);
    while(i<=t)
    {
        bd=www=tie=ab=0;
        scanf("%d",&n);
        scanf("%s",a);
        for(x=0;x<n;x++)
        switch(a[x])
        {
            case 'B':bd++;break;
            case 'W':www++;break;
            case 'A':ab++;break;
            case 'T':tie++;break;
            default:break;
        }
        if(bd==n-ab &&ab!=n) printf("Case %d: BANGLAWASH\n",i++);
        else if(www==n-ab &&ab!=n) printf("Case %d: WHITEWASH\n",i++);
        else if(bd==www &&ab!=n) printf("Case %d: DRAW %d %d\n",i++,bd,tie);
        else if(bd>www) printf("Case %d: BANGLADESH %d - %d\n",i++,bd,www);
        else if(www>bd) printf("Case %d: WWW %d - %d\n",i++,www,bd);
        else printf("Case %d: ABANDONED\n",i++);
    }
    return 0;
}
