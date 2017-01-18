#include<stdio.h>
#include<math.h>
int main()
{
    int N,i=1,x;
    while(scanf("%d",&N)==1 && N>=0)
    {
        x=ceil(log10(N)/log10(2));
        printf("Case %d: %d\n",i,x);
        i++;
    }
    return 0;
}
