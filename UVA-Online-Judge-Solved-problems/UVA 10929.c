#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
char a[100000];
int main()
{
    int ans,n;
        while(scanf("%s",a)==1 && !(a[0]=='0' &&strlen(a)==1))
        {
                ans=0; n=-1;
            while(a[++n]!='\0') ans=(ans*10+a[n]-48)%11;
            if(ans)
                printf("%s is not a multiple of 11.\n",a);
            else printf("%s is a multiple of 11.\n",a);
        }
    return 0;
}
