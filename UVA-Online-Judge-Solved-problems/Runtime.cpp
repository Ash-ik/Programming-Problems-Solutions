#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include<math.h>
#define MAX 10000
int ans[MAX+1]={};
using namespace std;
void display(int arr[], int size) {
   for (int i = 0; i < size; ++i) {
      cout << arr[i] << " ";
   }
   cout << endl;
}
double getTime(clock_t time1, clock_t time2) {
    double ticks = time1 - time2;
    return (ticks*10)/CLOCKS_PER_SEC;
}
//insert your desired function here
void generate()
{
    int isPrime[MAX]={};
    int prime[MAX];
    int i,j,n,p,x,y;
    n=-1;
    for(i=2;i<MAX;i++)
    {
        if(!isPrime[i])
        {
            prime[++n]=i;
            for(j=2;i*j<MAX; j++)
                isPrime[i*j]=1;
        }
    }
    for(x=0;x<=n;x++)
        {
            p=0;
        for(y=x;y<=n;y++)
    {
        p+=prime[y];
        if(p>MAX)
            break;
        ++ans[p];
    }
        }
}
int main()
{
    clock_t begin=clock();
    //your desired function
    freopen("dataN.txt","r",stdin);
    int d;
    generate();
    while(scanf("%d",&d)==1 &&d)
        printf("%d\n",ans[d]);
    clock_t end=clock();
    cout<<getTime(end,begin)<<" ms"<<endl;
    return 0;
}
