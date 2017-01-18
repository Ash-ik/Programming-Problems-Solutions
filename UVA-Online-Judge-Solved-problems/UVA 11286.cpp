#include<stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    int i,n;
    while(scanf("%d",&n) &&n)
    {
        int maxi=0;
        string a[5],b[n+1];
        map<string,int>counts;
        for(i=0;i<n;i++)
        {
            cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
            sort(a,a+5);
            string x=a[0]+"-"+a[1]+"-"+a[2]+"-"+a[3]+"-"+a[4];
            if(++counts[x]>maxi)
                maxi=counts[x];
            b[i]=x;
        }

        int ans=0;
        for(i=0;i<n;i++) if(counts[b[i]]==maxi) ans++;
        printf("%d\n",ans);
    }
    return 0;

}
