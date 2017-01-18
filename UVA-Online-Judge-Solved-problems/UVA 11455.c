#include<stdio.h>
int main()
{
    int i=1,t;
    scanf("%d",&t);
    while(i<=t)
    {
        unsigned long a,b,c,d;
        scanf("%lu %lu %lu %lu",&a,&b,&c,&d);
        if(a==b && b==c && c==d )
        printf("square\n");
        else if(a==b && c==d || b==c && d==a ||a==c && b==d)
        printf("rectangle\n");
        else if(a<=(b+c+d) && b<=(a+c+d) && c<=(a+b+d) && d<=(a+b+c))
        printf("quadrangle\n");
        else
        printf("banana\n");
        i++;
    }
    return 0;
}
