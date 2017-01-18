#include<stdio.h>
#include<stdbool.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,x,y,z;
        bool solution=false;
        scanf("%d %d %d",&a,&b,&c);
        for(x=-100;x<=100;x++)
        {
            if(x*x<=c &&x<=b &&x<=a)
            {
                for(y=-100;y<=100;y++)
                    if(x!=y && x*x+y*y<=c &&x*y<=b &&x+y<=a)
                {
                    for(z=-100;z<=100;z++)
                        if(x!=y &&y!=z &&z!=x && x*x+y*y+z*z==c &&x*y*z==b &&x+y+z==a)
                    {
                        solution=true;
                        printf("%d %d %d\n",x,y,z);
                        break;
                    }
                    if(solution)
                        break;
                }
            }
            if(solution)
                    break;
        }

    if(solution==false)
        printf("No solution.\n");
    }
    return 0;
}
