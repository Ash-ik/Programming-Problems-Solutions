#include<cstdio>
#include<algorithm>
using namespace std;
int absolute(int a)
{
    if(a<0)
        return 0-a;
    return a;
}
int compare(int a,int b)
{
    return absolute(a)<absolute(b);
}
int dif[100020];
int main()
{
    int ans,temp,i,n,g,x,a,b;
    while(scanf("%d %d",&n,&g)==2)
    {
        x=0;
        ans=0;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&a,&b);
            temp=a-b;
            if(temp>0)
            ans+=3;
            else
            dif[x++]=temp;
        }
        sort(dif,dif+x,compare);
        for(i=0;i<x;i++)
        {
            if(dif[i]==0 &&g-1>=0)
            {
                ans+=3;
                g--;
            }
            else if(dif[i]==0 &&g==0)
            ans++;
            if(dif[i]<0 &&g+dif[i]-1>=0)
            {
                ans+=3;
                g=g+dif[i]-1;
            }
            else if(dif[i]<0 && g+dif[i]==0)
            {
                ans++;
                g=0;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
