#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<string>
#include<stdlib.h>
#include<stdbool.h>
#include<sstream>
#include<iostream>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t)==1)
    {
        int i,n;
        long long int x=0,total=0,sum;
        map<int,bool>ans;
        for(i=0; i<t; i++)
        {
            scanf("%d",&n);
            if(!ans[n])
            {
                sum+=n;
                ans[n]=true;
            }
        }
        printf("%lld\n",total);
    }
    return 0;
}
