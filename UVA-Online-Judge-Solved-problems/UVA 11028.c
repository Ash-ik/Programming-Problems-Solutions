#include<stdio.h>
int main()
{
    int c=1,n,SOP[22] ={0,1, 1, 1, 3, 8, 21, 43, 69, 102, 145,197, 261, 336, 425, 527, 645, 778, 929, 1097, 1285,1492};
    while(scanf("%d",&n)==1 &&n)
        printf("Case #%d: %d\n",c++,SOP[n]);
    return 0;

}
