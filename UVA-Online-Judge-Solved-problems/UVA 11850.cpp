#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,t,a[10000],flag,temp;
    while(scanf("%d",&t) && t!=0)
    {
        temp=0;
        while(temp<t) scanf("%d",&a[temp++]);
        sort(a,a+t);
        a[t]=1422;
        for(i=1;i<t;i++)
        {
            if((a[i]-a[i-1])>200)
        {
            flag=0;
            break;
        }
        else flag=1;
    }
    if(flag==1 &&a[t]-a[t-1]<=100)
    printf("POSSIBLE\n");
    else printf("IMPOSSIBLE\n");
    }
    return 0;
}
