#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    int i=0,t,o,n;
    string c,a[100],b[100];
    cin>>t;
    getchar();
    while(i<t)
        {
            getline(cin,a[i]);
            getline(cin,b[i]);
            i++;
        }
        cin>>n;
        getchar();
        while(n--)
        {
            getline(cin,c);
            o=0;
            while(o<t)
            {
                if(a[o]==c)
                    {cout<<b[o]<<endl;
                    break;}
                    o++;
            }
        }
        return 0;
}
