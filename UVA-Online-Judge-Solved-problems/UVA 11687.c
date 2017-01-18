#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
char a[10000000];
int main()
{
    long long x,ans,p;
    while(scanf("%s",a)==1 && strcmp(a,"END"))
        {
            ans=1;
            while(atoi(a)!=strlen(a))
            {
                ans++;
                p=strlen(a);
                sprintf(a,"%lld",p);
            }
            printf("%lld\n",ans);
        }
    return 0;
}
