#include<stdio.h>
#include<math.h>
int get_powers(int n,int p)
{
    int power=p,res=0;
    while(power<=n)
        res+=n/power,power=power*p;
    return res;
}

int main()
{
    int cnt,i,n,x,primes[27]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
    while(scanf("%d",&n) &&n)
    {
        printf("%3d! =",n);
        i=0,cnt=0;
        while(primes[i]<=n)
            {
                x=get_powers(n,primes[i]);
                if(x)
                {
                    cnt++;
                if(cnt==16)
                    printf("\n%9d",x);
                    else
                        printf("%3d",x);
                }
                i++;
            }
            puts("");
    }
    return 0;
}
