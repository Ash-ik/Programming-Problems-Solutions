#include<stdio.h>
int main()
{
    int p,q,m,n,ans=0;
    while(scanf("%d %d",&m,&n) &&!(!m && !n))
    {
        p=m,q=n;
        if(m==0||n==0) ans=0;
        else if(m==1||n==1) ans=m*n;
        else if(m==2||n==2)
        {
            if(m<n)
            {
                m=n;
                n=2;
            }
            ans=4*(m/4);
            if(m%4<=2)
                ans=ans+(m%4)*2;
            else ans=ans+4;
        }
        else ans=((m*n)+1)/2;
        printf("%d knights may be placed on a %d row %d column board.\n",ans,p,q);
    }
    return 0;
}
