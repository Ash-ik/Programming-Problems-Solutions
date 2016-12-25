#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef unsigned long long ULL;

int val(char p)
{
    if(p>='0' && p<='9')
            return p-'0';
        else if(p>='A' && p<='Z')
            return p-55;
}

int minBase(char *input)
{
    int temp,i,max=0;
    for(i=0;input[i];i++)
    {
            temp=val(input[i]);
        if(temp>max)
            max=temp;
    }
    if(max==0) return 2;
    return max+1;
}

ULL convBase(char *input,int base,int len)
{
    int i,x=-1;
    ULL ans=0;
    for(i=len;i>=0;i--)
        ans+=val(input[i])*pow(base,++x);
    return ans;
}

int main()
{
    char a[1000],b[1000];
    while(scanf("%s %s",&a,&b)==2)
    {
        int flag=1,i,j,lenA=strlen(a),lenB=strlen(b);
        for(i=minBase(a);i<=36;i++)
        {
            for(j=minBase(b);j<=36;j++)
            {
                if(convBase(a,i,lenA-1)==convBase(b,j,lenB-1))
                {
                    printf("%s (base %d) = %s (base %d)\n",a,i,b,j);
                    flag=0;
                    break;
                }
            }
            if(!flag)
                break;
        }
        if(flag)
            printf("%s is not equal to %s in any base 2..36\n",a,b);
    }
    return 0;
}
