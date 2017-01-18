#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
bool command(string s)
{
    if(s=="BACK"||s=="FORWARD") return true;
    return false;
}
int main()
{
    freopen("dataN.txt","r",stdin);
    string input,store[1000];
    int t,n=-1;
    scanf("%d%*c",&t);
    for(int x=1;x<=t;x++)
    {
            printf("Case %d:\n",x);
        while(getline(cin,input) &&input!="QUIT")
        {
        if(command(input))
        {
            static int index=n;
            if(input=="FORWARD")
            index++;
            else if(input=="BACK")
                index--;
                if(index<0)
                    cout<<"Ignored\n";
                else
            cout<<store[index]<<endl;
        }
        else
            store[++n]=input;
        }
    }
}
