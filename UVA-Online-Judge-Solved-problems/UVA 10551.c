#include<stdio.h>
#include<string.h>
#include<math.h>
int flag=1;
int convBase(int num,int base)
{
    int x=-1;
    int ans=0;
    for(;num>0;)
        {
            ans+=(num%10)*pow(base,++x);
            num/=10;
        }
    return ans;
}
int tenToBase(int num,int base)
{
    if(num==0)
            return flag;

        else
        {
            flag=0;
            tenToBase(num/base,base);
            printf("%d",num%base);
        }
}
int main()
{
    int base;
    while(scanf("%d",&base)!=EOF &&base)
    {
        char bigNum[1005];
        int x,n,converted,num2;
        scanf("%s %d",bigNum,&num2);
        converted=convBase(num2,base);
        x=bigNum[0]-'0'; n=0;
        while(bigNum[++n]!='\0') x=(x*base+bigNum[n]-'0')%converted;
        tenToBase(x,base);
        if(flag)
            printf("0\n");
            else printf("\n");
            flag=1;
    }
    return 0;
}
