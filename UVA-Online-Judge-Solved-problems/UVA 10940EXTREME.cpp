#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int x,a[500009],i,ans,p,num,n;
int main()
{
    for(n=1;n<=500000;n++)
    {
        x=log10(n)/log10(2);
        ans=(n-(1<<x))*2;
        if(ans==0)
            a[n]=n;
        else
        a[n]=ans;
    }
    while(scanf("%d",&num)==1 &&num)
        printf("%d\n",a[num]);
    return 0;
}


