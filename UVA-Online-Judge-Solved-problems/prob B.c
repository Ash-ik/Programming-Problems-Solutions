#include<stdio.h>
int main()
{
    int cases,caseno,a,b,c,d;

    scanf("%d",&cases);
    for(caseno=1;caseno<=cases;caseno++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if((a+b+c)>=d && (a+b+d)>=c && (a+c+d)>=b && (b+c+d)>=a)
            printf("Case %d: Okay\n",caseno);
        else
            printf("Case %d: Not Okay\n",caseno);
    }

    return 0;
}
