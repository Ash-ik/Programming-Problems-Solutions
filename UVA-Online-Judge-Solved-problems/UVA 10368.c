#include<stdio.h>
#include<stdbool.h>
bool modifiedGCD(int a,int b)
{
    int i;
    if(a<b)
    {
        register int temp=a;
        a=b;
        b=temp;
    }

    if(a%b==0)
        return true;

        for(i=a%b;i<a;i+=b)
            if(!modifiedGCD(i,b))
                return true;

    return false;
}
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF &&(a+b))
    {
        if(modifiedGCD(a,b))
            printf("Stan wins\n");
        else
            printf("Ollie wins\n");
    }
    return 0;
}
