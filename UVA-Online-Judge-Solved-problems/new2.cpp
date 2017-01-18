#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;

#define integer unsigned long long
#define MaxN 1000001
#define MaxM 1000000000
#define stop 1000

bool is_prime[MaxN];
integer contribution[MaxN];
integer T[MaxN];

int main()
{
    // sieve
    memset(is_prime, true, sizeof(is_prime));
    for (integer i = 4; i < MaxN; i += 2)
    {
        is_prime[i] = false;
        contribution[i] = 1;
        contribution[i - 1] = 1;
    }
    for (integer j = 2; j < MaxN; j *= 2)
        contribution[j] = 2;
    for (integer i = 3; i < MaxN; i += 2)
        if (is_prime[i])
        {
            for (integer j = i * i; j < MaxN; j += (i << 1))
                is_prime[j] = false;
            for (integer j = i; j < MaxN; j *= i)
                contribution[j] = i;
        }
        for(int i=3;i<=50;i++)
            printf("%d %llu\n",i,contribution[i]);
    // calculate
    T[1] = 1;
    for (int i = 2; i < MaxN; i++)
        T[i] = (T[i - 1] * contribution[i]) % MaxM;
    // input/output
    int n;
    while (cin >> n && n)
    {
        integer sol = T[n];
        while (sol % 10 == 0)
            sol /= 10;
        cout << sol % 10 << endl;
    }
    return 0;
}
