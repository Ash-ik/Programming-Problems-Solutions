#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define pc putchar_unlocked
#define gc getchar_unlocked
#define getchar_unlocked getchar
#define putchar_unlocked putchar
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
typedef unsigned long long llu;
llu fib[102]={1,2};

    int i;
llu fi_BtoD(char a[])
{
    llu ans=0;
    int len=strlen(a),j;
    for(i = len-1, j = 0; i >= 0; i--, j++)
        if(a[i]=='1')
            ans+=fib[j];
    return ans;
}
char* fi_DtoB(llu n,char ans[])
{
    int index=fi_binSearch(0,100,n);
    i=-1;
    while(index>=0)
        {
            if(n>=fib[index])
            {
                ans[++i]='1';
                n-=fib[index];
            }
            else ans[++i]='0';
            index--;
        }
    ans[++i]='\n';
    ans[++i]='\0';
}
int fi_binSearch(int low,int high,llu n)
{
    int mid;
        while(high-low>1)
            {
                mid=(high+low)/2;
                if(fib[mid]>n)
                    high=mid;
                else
                    low=mid;
            }
            if(fib[high]<=n) return high;
            else return low;
}
char ans[100005];
int main()
{
    bool newLine=false;
    llu ans1,ans2;
    for(i=2;i<=100;i++)
        fib[i]=fib[i-1]+fib[i-2],printf("%d %llu\n",i,fib[i]);
    char a[101];
    while(scanf("%s",a)==1)
    {
        ans1=fi_BtoD(a);
        scanf("%s",a);
        ans2=fi_BtoD(a);
        fi_DtoB(ans1+ans2,ans);
        if(newLine)
            pc('\n');
        newLine=true;
        fwrite(ans,1,i,stdout);
        gc();
    }
}
