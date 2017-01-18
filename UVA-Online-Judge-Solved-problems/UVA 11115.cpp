#include<cstdio>
#include<math.h>
#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n,d;
    while(scanf("%d %d",&n,&d)!=EOF && (n+d))
    {
        long double ans=1.0;
        while(d--)
            ans*=n;
            cout.precision(0);
            cout.setf(ios::fixed);
        cout<<ans<<'\n';
    }
    return 0;
}

