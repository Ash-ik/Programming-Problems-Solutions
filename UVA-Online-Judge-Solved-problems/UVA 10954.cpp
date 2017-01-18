#include<cstdio>
#include<cmath>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
    int x,n,temp,sum;
    while(scanf("%d",&n)==1 &&n)
    {
        sum=0;
        priority_queue<int>ans;
        while(n--)
        {
            scanf("%d",&x);
            ans.push(-x);
        }
        while(ans.size()>1)
        {
            register int p=-ans.top();
            ans.pop();
            register int q=-ans.top();
            ans.pop();
            temp=p+q;
            sum+=temp;
            ans.push(-temp);
        }
        printf("%d\n",sum);
    }
    return 0;
}
