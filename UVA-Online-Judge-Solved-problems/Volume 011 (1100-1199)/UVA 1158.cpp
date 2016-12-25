#include <cstring>
#include<cstdio>
#include<cstdlib>
#include <vector>

int K[400001];
char ans[40000]={};
    char in[20];
std::vector<int> W;

int minimum(int a,int b)
{
    if(a<b) return a;
    return b;
}
int main()
{
    freopen("1158.in", "r", stdin);
    freopen("1158.out", "w", stdout);
    int n,i,j;
    for(i=1; i*i*i<=400000; i=i+1)
        W.push_back(i*i*i);

    for(j=1, i=1; j<=400000; i++, j=j+i*i)
        W.push_back(j);

    memset(K,63,sizeof(K));

    K[0]=0;
    for(i=0;i<178; i++)
        for(j=W[i];j<=400000;j++)
            K[j]=minimum(K[j], K[j-W[i]]+1);
        i=j=0;
    while(gets(in))
{
        n=atoi(in);
        if(n==-1)
            break;
        sprintf(in,"%d\n",K[n]);
        strcat(ans,in);
}

    fwrite(ans,1,strlen(ans),stdout);

    return 0;
}
