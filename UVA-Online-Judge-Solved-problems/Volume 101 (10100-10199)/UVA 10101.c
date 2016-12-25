#include<stdio.h>
int main()
{
    long long temp[50],n,x=0;
    while(scanf("%lld",&n)==1)
    {
        printf("%4d.",++x);
        if(n==0)
            {printf(" 0\n");continue;}

        temp[0]=n/100000000000000;
        if(temp[0]>0)
        printf(" %lld kuti",temp[0]);
        temp[1]=n%100000000000000;
        temp[1]=temp[1]/1000000000000;
        if(temp[1]>0)
        printf(" %lld lakh",temp[1]);
        temp[2]=n%1000000000000;
        temp[2]=temp[2]/10000000000;
        if(temp[2]>0)
        printf(" %lld hajar",temp[2]);
        temp[3]=n%10000000000;
        temp[3]=temp[3]/1000000000;
        if(temp[3]>0)
        printf(" %lld shata",temp[3]);
        temp[4]=n%1000000000;
        temp[4]=temp[4]/10000000;
        if(temp[4]>0)
        printf(" %lld kuti",temp[4]);
        else if(n/10000000>0)
        printf(" kuti",n/10000000);
        temp[5]=n%10000000;
        temp[5]=temp[5]/100000;
        if(temp[5]>0)
        printf(" %lld lakh",temp[5]);
        temp[6]=n%100000;
        temp[6]=temp[6]/1000;
        if(temp[6]>0)
        printf(" %lld hajar",temp[6]);
        temp[7]=n%1000;
        temp[7]=temp[7]/100;
        if(temp[7]>0)
        printf(" %lld shata",temp[7]);
        if(n%100>0)
            printf(" %lld",n%100);
        printf("\n");
    }
    return 0;
}

