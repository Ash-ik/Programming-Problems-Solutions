#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
int maxi(int a,int b)
{
    if(a>b) return a;
    return b;
}
int gcs(string x,string y,int lenX,int lenY)
{
    if(lenX==0||lenY==0) return 0;
    if(x.at(lenX-1)==y.at(lenY-1))
    {
        return 1+gcs(x,y,lenX-1,lenY-1);
    }
    else
        return maxi(gcs(x,y,lenX-1,lenY),gcs(x,y,lenX,lenY-1));
}

int main()
{
    string a="asbhcik";
    string b="pabcij";
    printf("Greatest common subsequences of asbhcik & pabcij is : %d",gcs(a,b,a.length(),b.length()));

    return 0;
}
