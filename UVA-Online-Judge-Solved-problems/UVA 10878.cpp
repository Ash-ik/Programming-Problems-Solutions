#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int dec(string y)
{
    int ans=0,n,m;
    for(n=0,m=y.length()-1; n<y.length(); n++,m--)
        if(y.at(n)=='1')
            ans+=1<<m;
        return ans;
}
char a[10000][100000];
int main()
{
    int i=-1,n,p,q;
    while(gets(a[++i]));
    for(p=1;p<i-1;p++)
        {
            string x="";
            for(q=0;q<strlen(a[p]);q++)
            {
                if(a[p][q]==' ')
                    x+="0";
                if(a[p][q]=='o')
                    x+="1";
            }
            n=dec(x);
            printf("%c",n);
        }
    return 0;
}
