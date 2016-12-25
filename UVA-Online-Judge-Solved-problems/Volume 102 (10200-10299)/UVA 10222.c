#include<stdio.h>
int main()
{
    char a[50]={'`','1','2','3','4','5','6','7','8','9','0','-','=','q','w','e','r','t','y','u','i','o','p','[',']','\\','a','s','d','f','g','h','j','k','l',';','\'','z','x','c','v','b','n','m',',','.','/'};
    char p;
    int i;
    while(scanf("%c",&p)==1)
    {
        if(p>=65 && p<=90)
        p=p+32;
            if(p==' ')
    printf(" ");
    if(p=='\n')
    printf("\n");
    else for(i=0;i<48;i++)
    {
        if(p==a[i])
        printf("%c",a[i-2]);
    }
    }
    return 0;
}
