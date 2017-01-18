#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
int main()
{
    int testCase,count=0;
    scanf("%d",&testCase);
    while(testCase--)
    {
        printf("Case %d\n",++count);

        stack<char>temp;

        char path[1010];
        int ans[30]={},i;
        scanf("%s",path);
        temp.push(path[0]);
        for(i=1;path[i];i++)
        {

            if(path[i]==temp.top())
                temp.pop();
            else
            {
                 ++ans[temp.top()-'A'];
                temp.push(path[i]);
                ++ans[path[i]-'A'];
            }
        }
        for(i='A';i<='Z';i++)
            if(ans[i-'A'])
            printf("%c = %d\n",i,ans[i-'A']);
    }
    return 0;
}
