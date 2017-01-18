#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000],wb;
    int ans,r,c;
    while(gets(a) &&strcmp(a,"0 0 0"))
    {
        sscanf(a,"%d %d %c",&r,&c,&wb);
        ans=((r-7)*(c-7));
        if(ans%2 &&wb=='1')
        printf("%d\n",(ans>>1)+1);
        else printf("%d\n",ans>>1);
    }
    return 0;
}
