#include<stdio.h>
#include<vector>
#include<map>
using namespace std;
int main()
{
    freopen("dataN.txt","r",stdin);
    int a,n=0;
    vector<int>ans;
    map<int,int>freq;
    while(scanf("%d",&a)!=EOF)
    {
        if(++freq[a]==1)
        {
            ans.push_back(a);
            n++;
        }
    }
    for(int p=0;p<n;p++)
        {
            int d=ans[p];
            printf("%d %d\n",d,freq[d]);
        }
return 0;
}
