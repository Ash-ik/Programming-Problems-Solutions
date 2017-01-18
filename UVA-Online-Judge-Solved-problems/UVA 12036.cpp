#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int flag,t,x=1,p,n,a[10000],i,num;
    scanf("%d",&t);
    while(x<=t)
    {
        scanf("%d",&n);
        p=n*n;
        for(i=0;i<p;i++)
        scanf("%d",&a[i]);
        sort(a,a+p);
        num=1,flag=1;
        a[p]='\0';
        for(i=0;i<p;i++)
        {
            if(a[i]==a[i+1]) num++;
            else
            {
                if(num>n) {flag=0;printf("Case %d: no\n",x++);break;}
                num=1;
            }
        }
        if(flag) printf("Case %d: yes\n",x++);
    }
    return 0;
}
