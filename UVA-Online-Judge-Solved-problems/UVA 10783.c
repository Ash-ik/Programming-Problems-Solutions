#include<stdio.h>
int main()
{
    int t,a,b,c=1,i,ans;
    scanf("%d",&t);
        while(c<=t)
            {
            scanf("%d %d",&a,&b);
            ans=0;
            if(a%2==0)
            a++;
            for(i=a;i<=b;)
            {
                ans=ans+i;
                i=i+2;
            }
                printf("Case %d: %d\n",c,ans);
                c++;
            }

}
