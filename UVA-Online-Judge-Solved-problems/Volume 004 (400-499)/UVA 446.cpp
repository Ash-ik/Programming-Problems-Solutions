#include<cstdio>
#include<cstring>
#include<string>
#include<cstdlib>
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
string binary(string x)
{
    string sReturn="";
    int i;
    for(i=0; i<x.length(); i++)
        switch (x.at(i))
        {
        case '0':
            sReturn.append("0000");
            break;
        case '1':
            sReturn.append("0001");
            break;
        case '2':
            sReturn.append("0010");
            break;
        case '3':
            sReturn.append("0011");
            break;
        case '4':
            sReturn.append("0100");
            break;
        case '5':
            sReturn.append("0101");
            break;
        case '6':
            sReturn.append("0110");
            break;
        case '7':
            sReturn.append("0111");
            break;
        case '8':
            sReturn.append("1000");
            break;
        case '9':
            sReturn.append("1001");
            break;
        case 'A':
            sReturn.append("1010");
            break;
        case 'B':
            sReturn.append("1011");
            break;
        case 'C':
            sReturn.append("1100");
            break;
        case 'D':
            sReturn.append("1101");
            break;
        case 'E':
            sReturn.append("1110");
            break;
        case 'F':
            sReturn.append("1111");
            break;
        }
    while(sReturn.length()!=13)
        sReturn="0"+sReturn;
    return sReturn;
}
string a,b,a_bin,b_bin;
int main()
{
    int t,p,q;
    char sign;
    scanf("%d",&t);
    while(t--)
    {
        cin>>a>>sign>>b;
        a_bin=binary(a);
        b_bin=binary(b);
        p=dec(a_bin);
        q=dec(b_bin);
        if(sign=='+')
        printf("%s %c %s = %d\n",a_bin.c_str(),sign,b_bin.c_str(),p+q);
        else
        printf("%s %c %s = %d\n",a_bin.c_str(),sign,b_bin.c_str(),p-q);
    }
    return 0;
}
