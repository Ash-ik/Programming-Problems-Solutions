#include<stdio.h>
int ans[]={0,1,3,6,10,15,21,28,36,45,46};
long ten_sum(long x)
{
    if(x<10) return ans[x];
    return ten_sum(x/10)*10+44*(x/10)+x/10-9;
}
long recursive_sum(long a)
{

}
long sumofDigit(long n, long ditInd, long poss) {
        if (n == 0) {
            return 0;
        }
        long m = n % 10;
        return n / 10 * 45 * ditInd + m * poss + m * (m - 1) / 2 * ditInd + sumofDigit(n / 10, ditInd * 10, poss + m * ditInd);
}
int main()
{
    long n;
    while(scanf("%ld",&n)==1)
    {

//        printf("%ld\n",recursive_sum(n));
        printf("%ld\n",sumofDigit(n,1,1));

    }
}
