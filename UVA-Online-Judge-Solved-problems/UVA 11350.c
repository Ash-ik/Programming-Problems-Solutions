#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char save[92];
        scanf("%s",save);
        long long i,a=0,b=1,c=1,d=0,x=1,y=1;
        int len=strlen(save);
        for(i=0;i<len;i++)
        {
            if(save[i]=='L')
            {
                b=x;
                d=y;
            }
            else
            {
                a=x;
                c=y;
            }
            x=a+b;
            y=c+d;
        }
        printf("%lld/%lld\n",x,y);
    }
    return 0;
}
