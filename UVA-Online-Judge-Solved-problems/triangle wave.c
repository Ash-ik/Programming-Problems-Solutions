#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,amp,frq,t;
    scanf("%d",&t);
        while(t--)
        {
            scanf("%d %d",&amp,&frq);
            for(a=1;a<=frq;a++)
            {
                for(b=1;b<=amp;b++)
                {
                    for(c=amp;c>amp-b;c--)
                        printf("%d",b);
                    printf("\n");
                }
                for(d=b-2;d>=1;d--)
                {
                    for(c=amp;c>amp-d;c--)
                        printf("%d",d);
                    printf("\n");
                }
                if(a<frq) printf("\n");
            }
            if(t>=1)
                printf("\n");
        }
        return 0;
}
