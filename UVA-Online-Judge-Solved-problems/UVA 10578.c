#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    while(scanf("%s",&a)!=EOF)
    {
        printf("%s ",a);
        int i,j=0;
        for(i=0;a[i];i++)
            j=j^(a[i]-'0');
            if(j%2==0)
        printf("A\n");
        else
            printf("B\n");
    }
    return 0;
}
