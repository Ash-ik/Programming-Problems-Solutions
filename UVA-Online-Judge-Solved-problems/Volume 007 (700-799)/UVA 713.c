#include<stdio.h>
#include<string.h>
int min(int a,int b)
{
    if(a<b) return a;
    return b;
}
int max(int a,int b)
{
    if(a>b) return a;
    return b;
}
void reverse(char *num)
{
    int x,y;
    char temp[1000]={};
    for(x=strlen(num)-1,y=0;x>=0;x--,y++)
    temp[y]=num[x];
        strcpy(num,temp);
//        return num;
}
int main()
{
    int testCase;
    char num1[1000],num2[1000];
    scanf("%d\n",&testCase);
    while(testCase--)
    {
        scanf("%s %s",&num1,&num2);
        reverse(num1);
        reverse(num2);
        int i,temp=0,carry=0,minimum=min(strlen(num1),strlen(num2)),maximum=max(strlen(num1),strlen(num2));
        char ans[1000]={};
        for(i=maximum-1;i>=minimum;i--)
        {
            temp+=num1[i]+num2[i]-96+carry;
            if(temp>9){temp%=10;carry=1;}
            else carry=0;
            ans[i]=temp+'0';
        }
        printf("%s + %s> %s\n",num1,num2,ans);
    }
    return 0;
}
