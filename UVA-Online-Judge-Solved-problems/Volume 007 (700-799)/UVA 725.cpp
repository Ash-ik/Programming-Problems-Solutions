#include<stdio.h>
#include<iostream>
#include<vector>
#include<stdbool.h>
using namespace std;

bool isOk(int small,int big)
{
    int nums[20]={};
    if(small<10000)
        nums[0]++;
    while(small)
    {
        if(++nums[small%10]>1) return false;
        small/=10;
    }
    while(big)
    {
        if(++nums[big%10]>1) return false;
        big/=10;
    }
for(int i=0;i<=9;i++) if(nums[i]==0) return false;

    return true;
}
int main()
{
    vector<int>answers[100];
    for(int i=2;i<=79;i++)
    {
        for(int j=1234;j<50000;j++)
        {
            int temp=j*i;
            if(temp<100000 && isOk(j,temp))
                answers[i].push_back(j);
        }
    }
    int n,not_first=0;
    while(scanf("%d",&n)==1 &&n)
    {
        if(not_first++)
        printf("\n");
        if(answers[n].size()==0) printf("There are no solutions for %d.\n",n);
        else
            for(int i=0;i<answers[n].size();i++)
            {
                if(answers[n][i]<10000)
                    printf("%d / 0%d = %d\n",answers[n][i]*n,answers[n][i],n);
                else
                    printf("%d / %d = %d\n",answers[n][i]*n,answers[n][i],n);
            }
    }
    return 0;

}
