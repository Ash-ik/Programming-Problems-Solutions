#include<stdio.h>
#include<string>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    char a[100]="WORDFISH";
    string x,ans="",b="AB";
    for(int i=0;i<10;i++)
        prev_permutation(a,a+strlen(a));
    for(int i=0;i<21;i++)
    {
        next_permutation(a,a+strlen(a));
        x=a;
        if(x>b)
        {
            ans=b=x;
            printf("%s\n",x.c_str());
        }
    if(x=="WORDHSFI")
        printf("()");
    }
    printf("%s\n",ans.c_str());
}
