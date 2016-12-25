#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int b,i;
    long double ans;
    char a[1000000];
    while(scanf("%s",a)==1 && strcmp(a,"0"))
    {
        ans=0;
        b=strlen(a);
        for(i=0;i<b;i++)
            ans=ans+(a[i]-'0')*((1<<b-i)-1);
        printf("%.0Lf\n",ans);
    }
    return 0;
}
