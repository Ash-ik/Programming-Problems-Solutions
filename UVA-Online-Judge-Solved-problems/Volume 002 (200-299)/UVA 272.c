#include<stdio.h>
int main()
{
    char a;
    long long flag=0;
    while(scanf("%c",&a)==1)
    {
            if(a=='"')
        {
            flag++;
            if(flag%2!=0)
                printf("``");
            else if(flag%2==0)
                printf("''");
        }
        else printf("%c",a);
        }
    return 0;
}
