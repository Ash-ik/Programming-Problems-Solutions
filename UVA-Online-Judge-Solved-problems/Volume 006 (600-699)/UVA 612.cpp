#include<stdio.h>
#include<string>
#include<algorithm>
#include<iostream>
#include<stdbool.h>
using namespace std;

struct DNA
{
    int swaps_count;
    int position;
    string sequence;
};
bool compare(DNA a,DNA b)
{
    if(a.swaps_count==b.swaps_count) return a.position<b.position;

    return a.swaps_count<b.swaps_count;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        DNA data[y+1];
        for(int i=0;i<y;i++)
        {
            char temp[x+2];
            scanf("%s",&temp);
            data[i].sequence=temp;
            data[i].position=i;
            int ans=0;
            for(int j=0;temp[j];j++)
            {
                for(int k=j+1;temp[k];k++)
                    if(temp[j]>temp[k]) ans++;
            }
            data[i].swaps_count=ans;
        }
        sort(data,data+y,compare);
        for(int i=0;i<y;i++)
            printf("%s\n",data[i].sequence.c_str());
        if(t)
            printf("\n");
    }
    return 0;
}
