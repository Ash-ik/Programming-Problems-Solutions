#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<stdbool.h>
using namespace std;
int mod;
bool compare(int a, int b)
{
    if(a%mod!= b%mod)
       return a%mod<b%mod;
    else
    {
        if(abs(a)%2==0 && abs(b)%2==0)
          return a<b;
        else if(abs(a)%2 && abs(b)%2)
                return a>b;
        else if(abs(a)%2)
                return true;
        else
            return false;
    }
}
int main()
{
    int n,i,a[20000];
    while(scanf("%d %d",&n,&mod)==2 && !(n==0 &&mod==0))
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+i,compare);
        printf("%d %d\n",n,mod);
        for(i=0;i<n;i++)
            printf("%d\n",a[i]);
    }
    printf("0 0\n");
    return 0;
}
