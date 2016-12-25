#include<stdio.h>
#include<string.h>

int modified_charValue(char x)
{
    if(x>='0' && x<='9') return x-'0';
    if(x>='A' && x<='Z') return x-'A'+10;
    if(x>='a' && x<='z') return x-'a'+36;
}
int main()
{
    char n[1024];
    while(scanf("%s",n)==1)
    {
        int ans=0,min_base=0,sum=0,i,len=strlen(n);
        if((len==1 &&n[0]=='0')||(len==2 && (n[0]=='-'||n[0]=='+')&&n[1]=='0'))
        {
                printf("2\n");
                continue;
        }
        for(i=0;n[i];i++)
        {
            if(n[i]=='-' ||n[i]=='+') continue;
            int val=modified_charValue(n[i]);
            sum+=val;
            if(val>min_base)
                min_base=val;
        }
        for(i=min_base;i<=61 && !ans;i++)
            if(sum%i==0) ans=i+1;

            if(ans) printf("%d\n",ans);
            else printf("such number is impossible!\n");
    }
    return 0;
}

