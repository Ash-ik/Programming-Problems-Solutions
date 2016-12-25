#include<bits/stdc++.h>
#define read freopen("dataN.txt","r",stdin)
using namespace std;
int main()
{
    int i,cnt=0;
    char *p,a[35];
    vector<char*>ans;
    map<char*,int>lenCount,freqCount;
    while(gets(a))
    {
        if(!strcmp(a,"#"))
        {
            for(i=0;i<ans.size();i++)
                printf("%s %d %d\n",ans[i],lenCount[ans[i]],freqCount[ans[i]]);
            ans.clear();
            lenCount.clear();
            freqCount.clear();
            cnt=0;
        }
        if(!cnt)
            p=strtok(a," ,?.!");
        else p=strtok(NULL," ,?.!");
        cnt=1;
        if(freqCount[p]==0)
            ans.push_back(p);
        lenCount[p]=strlen(p);
        freqCount[p]=freqCount[p]+1;
    }

}
