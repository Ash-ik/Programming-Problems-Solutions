#include<stdio.h>
#include<string.h>
#define MAX 1000000
int factorCount[MAX]={};
void distinct_factor_count()
{
    int i, j;
    for(i=2;i<=MAX;i++)
        if(!factorCount[i])
            for(j=i;j<=MAX;j+=i)
                factorCount[j]++;
}

int main()
{
    distinct_factor_count();
    int n;
    while(scanf("%d",&n) &&n)
        printf("%d : %d\n",n,factorCount[n]);
    return 0;
}
