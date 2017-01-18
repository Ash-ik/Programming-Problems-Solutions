#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
queue<int>card;
int main()
{
    int i,n;
    while(scanf("%d",&n)==1 &&n)
    {
        for(i=1;i<=n;i++)
        card.push(i);
        printf("Discarded cards:");
        while(card.size()>1)
        {
            printf(" %d",card.front());
            card.pop();
            i=card.front();
            card.pop();
            if(!card.empty())
                printf(",");
            card.push(i);
        }
        printf("\nRemaining card: %d\n",card.front());
        card.pop();
    }
    return 0;
}

