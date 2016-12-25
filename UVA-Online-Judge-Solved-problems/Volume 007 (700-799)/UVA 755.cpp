#include<stdio.h>
#include<string.h>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int dataset;
    scanf("%d",&dataset);
    map<char,char>chrctr;
    char j='2';
    int k=0;
    for(int i='A';i<='Y';i++)
    {
        if(i=='Q')
            i++;

        chrctr[i]=j;
        if(++k==3)
            {
                j=j+1;
                k=0;
            }

    }
    while(dataset--)
    {
        int n;
        map<string,int>ans;
        vector<string>p;
        scanf("%d",&n);
        while(n--)
        {
            int counts=0;
            char a[1000];
            scanf("%s",a);
            string temp="";
            for(int i=0;i<strlen(a);i++)
            {
                if(a[i]>='0' && a[i]<='9'&&a[i]!='-')
                {
                    counts++;
                    temp+=a[i];
                }
                else if(chrctr[a[i]]!=0 &&a[i]!='-')
                    {
                        counts++;
                        temp+=chrctr[a[i]];
                    }
                if(counts==3 &&a[i]!='-')
                    temp+="-";
            }
            if(!ans[temp])
                p.push_back(temp);
            ans[temp]++;
        }
        sort(p.begin(),p.end());
        int no_duplicate=1;
        for(int i=0;i<p.size();i++)
        {
            if(ans[p[i]]>1)
            no_duplicate=0,printf("%s %d\n",p[i].c_str(),ans[p[i]]);
        }
        if(no_duplicate)
            printf("No duplicates.\n");
        if(dataset) putchar('\n');
    }
    return 0;

}
