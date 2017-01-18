#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int x,a,i,ans,p;
int main()
{
    while(scanf("%d",&a)==1 &&a)
    {
        x=log10(a)/log10(2);
        ans=(a-(1<<x))*2;
        if(ans==0)
            ans=a;
        printf("%d\n",ans);
    }
    return 0;
}

