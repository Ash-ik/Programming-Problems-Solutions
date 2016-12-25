#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
bool compare(char a, char b)
    {
        if(tolower(a)==tolower(b))
                return a<b;
        return tolower(a)<tolower(b);
    }

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
        sort(a,a+x,compare);
        printf("%s\n",a);
        while(next_permutation(a,a+x,compare))
        printf("%s\n",a);
    }
    return 0;
}
