#include<stdio.h>
#include<map>
int maxi(int a,int b)
{
    if(a>b) return a;
    return b;
}
using namespace std;
int main()
{
    int maxi=0;
    map<string,int>counts;
    string in;
    while(cin>>in)
        if(++counts[in]>maxi) maxi=counts[in];

    return 0;
}

