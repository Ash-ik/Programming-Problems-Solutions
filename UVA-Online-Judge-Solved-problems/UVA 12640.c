#include<stdio.h>
int main()
{
    char tmp;
    int c,temp=0,max=0;
    while(scanf("%d%c",&c,&tmp)!=EOF)
    {
        temp=temp+c;
        if(temp<0)
        temp=0;
        if(temp>max)
        max=temp;
        if(tmp=='\n')
        {
            printf("%d\n",max);
            temp=max=0;
        }
    }
    return 0;
}
