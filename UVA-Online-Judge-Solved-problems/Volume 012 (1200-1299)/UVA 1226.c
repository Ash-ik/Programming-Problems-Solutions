#include<stdio.h>
#include<math.h>
#include<stdlib.h>
char a[100000];
int main()
{
    int ans,t,x,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        scanf("%s",a);
        ans=a[0]-48; n=0;
        while(a[++n]!='\0') ans=(ans*10+a[n]-48)%x;
        printf("%d\n",ans);
    }
    return 0;
}
