#include<stdio.h>
#include<set>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int friendshipNo;
        set<char*>friendCounter;
        scanf("%d",&friendshipNo);
        while(friendshipNo--)
        {
            char *friend1,*friend2;
            scanf("%s %s",&friend1,&friend2);
            friendCounter.insert(friend1);
            friendCounter.insert(friend2);
            printf("%d\n",friendCounter.size());
        }
    }
    return 0;
}
