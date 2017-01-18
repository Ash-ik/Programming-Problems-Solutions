#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    char n[100];
    char *p;
    long long a;
    while(scanf("%s",&n)==1)
    {
    if(atoi(n)<0) break;
    if(n[1]=='x')
    {
        a=strtol(n,NULL,16);
        printf("%lld\n",a);
    }
    else
    printf("0x%X\n",atoi(n));
    }
    return 0;
}
