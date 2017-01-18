#include<stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
struct info
{
    int time;
    string name;
};
string lower(string x)
{
  for (int i=0;x[i];i++)
    x[i]=tolower(x[i]);

  return x;
}
bool compare(info a,info b)
{
    if(a.time==b.time) return lower(a.name)<lower(b.name);
    return a.time<b.time;
}
int main()
{
    int n;
    int first=0;
    while(scanf("%d",&n)!=EOF)
    {
        int i;
        bool odd=false;
        info a[n+1];
        for(i=0;i<n;i++)
        {
            char x[25];
            int mn,sc,ms;
            scanf("%s : %d min %d sec %d ms",&x,&mn,&sc,&ms);
            a[i].name=x;
            a[i].time=(mn*60+sc)*1000+ms;
        }
        sort(a,a+n,compare);

        if(n%2) n--,odd=true;

        int row=1;
        for(i=1;i<=n;i++)
        {
            if(i%2) printf("Row %d\n",row++);
            printf("%s\n",a[i-1].name.c_str());
        }
        if(odd) printf("Row %d\n%s\n",row,a[n].name.c_str());

        printf("\n");
    }
    return 0;
}
