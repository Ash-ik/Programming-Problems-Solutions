#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    int count,max,l,ans;
    string s;
    while(getline(cin,s))
        {
        count=0,max=0;
        l=s.size();
        for(int i=0;i<l;i++)
    {
        if(s[i]==' ')
            count++;
        else
            {
                if(count>max)
                max=count;
                count=0;
            }
    }
    ans=ceil(log(max)/log(2));
    printf("%d\n",ans);
    }
    return 0;
}
