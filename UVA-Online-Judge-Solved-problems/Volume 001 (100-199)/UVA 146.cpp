#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    long long x;
    char a[100000];
    while(scanf("%s",a) &&strcmp(a,"#"))
    {
        x=strlen(a);
        if(next_permutation(a,a+x))
        printf("%s\n",a);
        else printf("No Successor\n");
    }
    return 0;
}
