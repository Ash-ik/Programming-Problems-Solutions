#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    int i,ans,sum;
    while(scanf("%s",a) &&strcmp(a,"*"))
    {
        sum=0;
        ans=0;
        for(i=0;i<strlen(a);i++)
        {
            switch(a[i])
            {
                case 'W':sum+=64;break;
                case 'H':sum+=32;break;
                case 'Q':sum+=16;break;
                case 'E':sum+=8;break;
                case 'S':sum+=4;break;
                case 'T':sum+=2;break;
                case 'X':sum+=1;break;
                case '/':
                        if(sum>0)
                        if(sum==64) ans++;
                        sum=0;
                    break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
