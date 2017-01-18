#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 1000001
bool isSubSequence(char a[],char b[])
{
        int i,j=0,n=strlen(a),m=strlen(b);

         for(i=0;i<m;i++)
            if(b[i]==a[j])
                j++;

         if(j==n) return true;

         return false;

}

int main()
{
    char a[MAX],b[MAX];
    int i,j,flag,x,p;
    while(scanf("%s %s",a,b)!=EOF)
    {
        if(isSubSequence(a,b)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

