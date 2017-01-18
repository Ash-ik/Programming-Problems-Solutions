#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define pc putchar_unlocked
#define putchar_unlocked putchar
#define read freopen("dataN.txt","r",stdin)
#define write freopen("dataOUT.txt","w",stdout)
int main()
{
    int t,i,j,cnt,len;
    char in1[10],in2[1000],x;
    gets(in1);
    t=atoi(in1);
    while(t--)
    {
        gets(in2);
        cnt=0;
        int a[130]={};
        for(i=0;in2[i];i++)
        {
            x=in2[i];
            if(!a[x])
              cnt++;

              a[x]++;
        }
        len=i;
        for(j=0,i='a';i<='z';i++)
            if(a[i])
            {
                for(;j<len-cnt+1;j++)
                    pc(i);
                    cnt--;
            }
            pc('\n');
    }
    return 0;

}
