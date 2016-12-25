#include<stdio.h>
long long car[40]={1,9,45,55,99,297,703,999,2223,2728,4879,4950,5050,5292,7272,7777,9999,17344,22222,38962,77778,82656,95121,99999,142857,148149,181819,187110,208495,318682,329967,351352,356643,390313,461539,466830,499500,500500,533170};
int main()
{
    long long i,p,t,a,b,j,flag;
        scanf("%lld",&t);
        for(p=1;p<=t;p++)
        {
            flag=1;
            scanf("%lld %lld",&a,&b);
            printf("case #%lld\n",p);
             for(j=0;j<40;j++)
                if(car[j]>=a &&car[j]<=b)
                {
                    flag=0;
                    printf("%lld\n",car[j]);
                }
                if(flag)
                    printf("no kaprekar numbers\n");
                    if(t-p)
                        printf("\n");
        }
    return 0;
}
