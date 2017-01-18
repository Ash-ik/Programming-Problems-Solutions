#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int guess;
    while(scanf("%d",&guess)==1 &&guess)
    {
        getchar();
        int low=0,high=11;
        char command[5];
        while(scanf("%*s %s",&command) &&strcmp("on",command))
        {
            if(strcmp("high",command)==0 &&guess<=high)
                high=guess-1;
            else if(strcmp("low",command)==0 && guess>=low)
                low=guess+1;
            scanf("%d",&guess);

            getchar();
        }
        if(guess<low||guess>high||low>high) printf("Stan is dishonest\n");
        else printf("Stan may be honest\n");
    }
    return 0;
}
