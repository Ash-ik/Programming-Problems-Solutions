#include<stdio.h>
#include<string.h>
int main()
{
    int testCase,count=0;
    scanf("%d",&testCase);
    while(testCase--)
    {
        printf("Case %d\n",++count);

        char path[1010];
        int ans[30]={},i;
        scanf("%s",path);
        for(i=0;path[i];i++)
        {
            ++ans[path[i]-'A'];
            if( i && path[i+1]==path[i+2] && path[i]!=path[i-1] && i<strlen(path)-2)
                ++ans[path[i]-'A'];
            if(i && path[i]==path[i-1])
                --ans[path[i]-'A'];
        }
        for(i='A';i<='Z';i++)
            if(ans[i-'A'])
            printf("%c %d\n",i,ans[i-'A']);
    }
    return 0;
}
