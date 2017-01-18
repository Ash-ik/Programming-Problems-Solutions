#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isCool(char a[])
{
    int i,p=strlen(a);
    if(p==1)
        return false;
    int charList[257]={},count[257]={};
    for(i=0;i<p;i++)
        ++charList[a[i]];

    for(i=97;i<=122;i++)
    {
        if(charList[i])
        {
            if(++count[charList[i]]>1)
                return false;
        }
    }
    return true;
}

int main()
{
    int t,cases=0;
    while(scanf("%d",&t)==1)
    {
        int ans=0;
        while(t--)
        {
            char p[35];
            scanf("%s",p);
            if(isCool(p))
                ans++;
        }
        printf("Case %d: %d\n",++cases,ans);
    }
    return 0;
}
