#include<stdio.h>
#include<stdbool.h>
#include<vector>
using namespace std;
bool solve(int n,int m)
{
    vector<int>data;
        for(int i=1;i<=n;i++) data.push_back(i);
        int c=0;
        while(data[c]!=13)
        {
            data.erase(data.begin()+c);
            c=c+m-1;
            if(c>=data.size()) c=c%data.size();
        }
        if(data[c]==13 &&data.size()==1) return true;
        return false;
}
int main()
{
    int n,i;
    while(scanf("%d",&n) &&n)
    {
        int m=0;
        while(!solve(n,++m));
        printf("%d\n",m);
    }
    return 0;
}
