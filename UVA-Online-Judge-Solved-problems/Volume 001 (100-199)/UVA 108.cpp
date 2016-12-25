#include<stdio.h>
#define getchar_unlocked getchar
int fastRead_int() {
    register int c = getchar_unlocked();
    int x = 0,neg = 0;
    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());
    if(c=='-') {
        neg = 1;
        c = getchar_unlocked();
    }
    for(; c>47 && c<58 ; c = getchar_unlocked()) {
        x = (x<<1) + (x<<3) + c - 48;
    }
    if(neg)
        return -x;
    return x;
}

int maxi(int a,int b)
{
    if(a>b) return a;
    return b;
}
int arr[105][105],input[105][105],n,i,j,k,l;
int find_max_sum()
{
    int ans=0;
    for(i=0;i<n+1;i++)
        for(j=0;j<n+1;j++)
        {
            if(!i||!j)
                arr[i][j]=0;
            else arr[i][j]=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1]+input[i-1][j-1];
        }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=i;k<n;k++)
                for(l=j;l<n;l++)
                    ans=maxi(ans,arr[k+1][l+1]-arr[i][l+1]-arr[k+1][j]+arr[i][j]);
    return ans;
}
int main()
{
    n=fastRead_int();
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            input[i][j]=fastRead_int();
    printf("%d\n",find_max_sum());
    return 0;
}
