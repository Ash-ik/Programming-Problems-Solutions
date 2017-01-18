#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
bool prime(int num)
{
    int sRoot,i;
    if(num<=1)
        return false;
    if(num==2)
        return true;
    if(num%2==0)
        return false;
    sRoot=sqrt(num*1.0);
    for(i=3;i<=sRoot;i+=2)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    while(scanf("%d",&n)==1 &&n)
    {
        if(!(n==2 ||n==3 ||n==5 ||n==7||n==13||n==17||n==19||n==31) && prime(n))
            puts("Given number is prime. But, NO perfect number is available.");
        else if(!(n==2 ||n==3 ||n==5 ||n==7||n==13||n==17||n==19||n==31) && !prime(n))
            puts("Given number is NOT prime! NO perfect number is available.");
        else
            switch(n)
        {
            case 2: puts("Perfect: 6!");break;
            case 3: puts("Perfect: 28!");break;
            case 5: puts("Perfect: 496!");break;
            case 7: puts("Perfect: 8128!");break;
            case 13: puts("Perfect: 33550336!");break;
            case 17: puts("Perfect: 8589869056!");break;
            case 19: puts("Perfect: 137438691328!");break;
            case 31: puts("Perfect: 2305843008139952128!");break;
            default:break;
        }
    }
    return 0;
}
