#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool comp(char a[],char b[])
{
    int i,diff=0;
    for (i=0; a[i] || b[i]; i++)
				diff+=a[i]!=b[i];
    return diff<=1;
}
int main()
{
    int t,cases=0,i,n;
    scanf("%d\n",&t);
    char in[1000][12],x[12];
    while(t--)
    {
        scanf("%d\n",&n);
        for(i=0;i<n;i++)
            gets(in[i]);
        gets(x);
        printf("Case %d:\n",++cases);
        for(i=0;i<n;i++)
            if(comp(in[i],x))
                puts(in[i]);
    }
}
