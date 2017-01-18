#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
int compare(const void *a,const void *b)
{
    return (*(int*)b-*(int*)a);
}

const int inf = 1e8;
int N,S;
int arr[55];
int dp[55][305];
int vis[55][305],True;
bool path[55][305];
int call(int pos,int sum){
    if(sum < 0) return inf;
    if(sum == 0) return 0;
    if(pos == N) return inf;
    if(vis[pos][sum] == True) return dp[pos][sum];
    vis[pos][sum] = True;
    dp[pos][sum]=inf;
    int tmp = call(pos,sum-arr[pos])+1;
    if(dp[pos][sum]>tmp){
        dp[pos][sum]=tmp;
        path[pos][sum] = true;
    }
    tmp = call(pos+1,sum);
    if(dp[pos][sum]>tmp){
        dp[pos][sum]=tmp;
        path[pos][sum] = false;
    }
    return dp[pos][sum];
}

void printPath(int pos,int sum){
    if(sum == 0) return;
    if(path[pos][sum]){
        printf(" %d",arr[pos]);
        printPath(pos,sum-arr[pos]);
    }else{
        printPath(pos+1,sum);
    }
}

int main()
{
    char input[500],*z;
    int cases=1,i,t;
    gets(input);
    t=atoi(input);
    while(t--)
    {
        gets(input);
        N=atoi(strtok(input," "));
        S=atoi(strtok(NULL," "));
        gets(input);
        for(i=0,z=strtok(input," "); z ; z=strtok(NULL," "))
            arr[i++]=atoi(z);
        qsort(arr,N,sizeof(int),compare);
        True=cases;
        printf("Case %d:",cases++);
        int counts=call(0,S);
        if(counts!=inf)
        {
            printf(" [%d]",counts);
            printPath(0,S);
            puts("");
        }
        else puts(" impossible");
    }
    return 0;
}
