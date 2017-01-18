#include<stdio.h>
int main()
{
    long int a,b,c,n,N;
    while(scanf("%ld",&N)==1)
    {
        for(n=0;n<N;n++)
        {
            scanf("%ld %ld %ld",&a,&b,&c);
            if((a+b)>c && (b+c)>a && (c+a)>b)
            printf("OK\n");
            else printf("Wrong!!\n");
        }
    }
    return 0;
}
