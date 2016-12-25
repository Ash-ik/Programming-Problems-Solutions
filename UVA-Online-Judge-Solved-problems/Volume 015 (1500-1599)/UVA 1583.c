#include<stdio.h>
#include<string.h>

int sumdigit(int n)
{
    if(n<10)
        return n;
    return n%10+sumdigit(n/10);
}



char input[20];
int main()
{
    int ans[100046]={},t,i;
        for(i=1;i<=100000;i++)
    {
        int m=i+sumdigit(i);
        if(!ans[m])
        ans[m]=i;
    }
gets(input);
t=atoi(input);
    while(t--)
    {
        gets(input);
        printf("%d\n",ans[atoi(input)]);
    }
    return 0;
}
