#include<stdio.h>
#include<string.h>
#include<math.h>
int power(int n,int p)
{
    while(p--)
        n=n*n;

    return n;
}
int convert(char num[],int base)
{
    int i,j,ans=0,len=strlen(num);
    for(j=0,i=len-1;j<len;j++,i--)
        ans+=(num[j]-'0')*pow(base,i);

        return ans;
}
int minimumBase(char num[])
{
    int x,y,base=0;
    for(x=0;num[x];x++)
        if((num[x]-'0')>base)
        base=num[x]-'0';


    for(base=base+1;base<=100;base++)
    {
        x=convert(num,base);
        y=sqrt(x);
        if(y*y==x) return base;
    }
    return 0;
}
int main()
{
    char n[110];
    while(gets(n) &&strcmp(n,"0"))
        printf("%d\n",minimumBase(n));
return 0;
}
