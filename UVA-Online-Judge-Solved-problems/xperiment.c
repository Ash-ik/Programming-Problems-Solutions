#include <stdio.h>
#include<stdbool.h>
#define read freopen("dataN.txt","r",stdin)
#define mod 1000000000
struct couple
{
    int first,second;
};
char Map[1001][1001];

struct couple couples(int x,int y)
    {
        struct couple z;
        z.first=x;
        z.second=y;
        return z;
    }

int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        int n=t,cnt=1;
        if(!(n%9)) cnt++;
        while(n-n/10!=t && cnt)
            n++;
            printf("%d",n);
            if(cnt==2)
                printf(" %d",n+1);
            puts("");
    }
  return 0;
}
