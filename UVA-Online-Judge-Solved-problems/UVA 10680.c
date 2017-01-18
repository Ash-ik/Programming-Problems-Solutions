#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define MAX 1000001
#define MOD 1000000000
typedef long long LL;
bool is_prime[MAX];
LL leastPrimeDivisor[MAX];
LL T[MAX];
void calculate()
{
    LL i,j;
        memset(is_prime, true, sizeof(is_prime));
    for (i = 4; i < MAX; i += 2)
    {
        is_prime[i] = false;
        leastPrimeDivisor[i] = 1;
        leastPrimeDivisor[i - 1] = 1;
    }
    for (j = 2; j < MAX; j *= 2)
        leastPrimeDivisor[j] = 2;
    for (i = 3; i < MAX; i += 2)
        if (is_prime[i])
        {
            for (j = i * i; j < MAX; j += (i << 1))
                is_prime[j] = false;
            for (j = i; j < MAX; j *= i)
                leastPrimeDivisor[j] = i;
        }
    T[1] = 1;
    for (i = 2; i < MAX; i++)
        T[i] = (T[i - 1] * leastPrimeDivisor[i]) % MOD;
}

int main()
{
    calculate();
    int n;
    while (scanf("%d",&n) && n)
    {
        n= T[n];
        while (n%10==0)
            n/=10;
        printf("%d\n",n%10);
    }
    return 0;
}
