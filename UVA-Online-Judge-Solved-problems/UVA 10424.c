#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int sumOfNum(int num)
{
    while(num>9)
        num=num/100+num/10%10+num%10;
        return num;
}
int toLower(char x)
{
    if(x>='a' && x<='z') return x-'a'+1;
        return x-'A'+1;
}
bool isChar(char x)
{
    if(x>='A' && x<='z') return true;
    return false;
}
int main()
{
    char inp1[55],inp2[55];
    int i,rat1=0,rat2=0;
    while(gets(inp1))
    {
        rat1=rat2=0;
        gets(inp2);
        for(i=0;inp1[i];i++)
            if(isChar(inp1[i]))
            rat1+=toLower(inp1[i]);

        rat1=sumOfNum(rat1);

        for(i=0;inp2[i];i++)
            if(isChar(inp2[i]))
            rat2+=toLower(inp2[i]);
        rat2=sumOfNum(rat2);
    if(rat1==0 && rat2==0)
        puts("");
    else if(rat1<rat2)
        printf("%.2f %%\n",(float)(rat1*100.0)/rat2);
    else
        printf("%.2f %%\n",(float)(rat2*100.0)/rat1);
    }

    return 0;
}
