#include<stdio.h>
#include<math.h>

void perfection(int n)
{
    printf("%5d  ",n);
    char verdict[3][10]={"PERFECT","DEFICIENT","ABUNDANT"};
    if(n==1) {
            printf("%s\n",verdict[1]);
            return;
    }
    int i,divisor_sum=1;
    for(i=2;i<=n/2;i++)
        if(n%i==0)
            divisor_sum+=i;

    if(divisor_sum==n) printf("%s\n",verdict[0]);
    else if(divisor_sum<n) printf("%s\n",verdict[1]);
    else printf("%s\n",verdict[2]);
}

int main()
{
    printf("PERFECTION OUTPUT\n");

    int n;
    while(scanf("%d",&n) &&n)
        perfection(n);

    printf("END OF OUTPUT\n");
    return 0;

}
