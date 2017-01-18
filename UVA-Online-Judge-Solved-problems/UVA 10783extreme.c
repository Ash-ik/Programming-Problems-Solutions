#include<stdio.h>
int main()
{
    int t,a,b,c=1,i,ans;
        scanf("%d",&t);
        while(c<=t)
            {
            scanf("%d %d",&a,&b);
            if(b%2!=0)
            b++;
            printf("Case %d: %d\n",c,(b>>1)*(b>>1)-(a>>1)*(a>>1));
            c++;
            }
            return 0;
}
