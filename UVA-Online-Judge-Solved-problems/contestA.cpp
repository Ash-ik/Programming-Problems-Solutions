#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    int t,i,j;
    char in[30];
    cin>>t;
    while(t--)
    {
        cin>>in;
        for(i=0;i<strlen(in);i++) if(in[i]=='A') break;
        for(j=0;j<10;j++)
        {
            in[i]=j+'0';
            if(atoi(in)%8==0) {printf("YES\n%d\n",j);break;}
        }
        if(j==10) printf("NO\n");
    }
    return 0;
}
