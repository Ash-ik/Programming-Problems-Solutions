#include<stdio.h>
#include<map>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
        for(int i=1;i<=t;i++)
        {
            map<string,int>data;
            int n,d;
            scanf("%d",&n);
            getchar();
            while(n--)
            {
                string a;
                int x;
                cin>>a;
                scanf("%d",&x);
                data[a]=x;
                getchar();
            }
            string sub;
            scanf("%d",&d);
            cin>>sub;
            printf("Case %d: ",i);
            if(data[sub]==0)
            {
                printf("Do your own homework!\n");
            }
            else
            {
                if(data[sub]<=d)
                    printf("Yesss\n");
                    else if(data[sub]>d && data[sub]<=(d+5))
                        printf("Late\n");
                        else if(data[sub]>d+5)
                        printf("Do your own homework!\n");

            }
        }
        return 0;
}
