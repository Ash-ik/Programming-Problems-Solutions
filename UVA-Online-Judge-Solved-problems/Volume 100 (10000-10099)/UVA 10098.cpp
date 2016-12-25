#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    long long n,x;
    char a[1000];
    scanf("%lld",&n);
    getchar();
    while(n--)
    {
        scanf("%s",a);
        x=strlen(a);
        sort(a,a+x);
        printf("%s\n",a);
        while(next_permutation(a,a+x))
        printf("%s\n",a);
        printf("\n");
    }
    return 0;
}

