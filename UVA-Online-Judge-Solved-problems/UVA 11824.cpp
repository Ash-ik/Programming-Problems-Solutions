#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int a[50],x,i,t,j;
    long long sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        i=0,j=0;
        while(scanf("%d",&a[i])==1)
        {
            if(a[i]==0)
            break;
            i++;
        }
        sort(a,a+i);
        x=i;
        while(j<i)
            {
                sum+=pow(a[j],x);
                j++,x--;
            }
        sum=sum*2;
        if(sum<=5000000)
        printf("%lld\n",sum);
        else printf("Too expensive\n");
    }
    return 0;
}
