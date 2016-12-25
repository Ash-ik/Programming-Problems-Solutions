#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>
#include<map>
#include<stdbool.h>
#include<string.h>
using namespace std;
int main()
{
    char x[10],y[]="XXXXXX";
    string a[102];
    map<string,string>ans;
    int z=-1;
    while(scanf("%s",x)==1 && strcmp(x,y))
    {
        a[++z]=x;
        sort(x,x+strlen(x));
        ans[a[z]]=x;
    }
    z++;
    sort(a,a+z);
    while(scanf("%s",x)==1 &&strcmp(x,y))
    {
        sort(x,x+strlen(x));
        string p=x;
        int i,flag=1;
        for(i=0;i<z;i++)
        {
            if(p==ans[a[i]])
            printf("%s\n",a[i].c_str()),flag=0;
        }
        if(i==z && flag)
            printf("NOT A VALID WORD\n");
        printf("******\n");
    }
return 0;
}


