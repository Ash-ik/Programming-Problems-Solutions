#include<stdio.h>
#define MAX 100002
int main()
{
    int i,j,B,S,L,R,left[MAX],right[MAX];
    bool dead[MAX];
    while(scanf("%d %d",&B,&S) &&(B+S))
    {
        for(i=0;i<=B+1;i++)
        {
            left[i]=i-1;
            right[i]=i+1;
            dead[i]=false;
        }
        for(i=1;i<=S;i++)
        {
            scanf("%d %d",&L,&R);

            int newLeft=left[L];
            while(dead[newLeft]) newLeft=left[newLeft];
            int newRight=right[R];
            while(dead[newRight]) newRight=right[newRight];

            for(j=L;j<=R;j++)
            {
                dead[j]=true;
                left[j]=newLeft;
                right[j]=newRight;
            }
            if(newLeft>0 && newRight<=B) printf("%d %d\n",newLeft,newRight);
            else if(newRight<=B) printf("* %d\n",newRight);
            else if(newLeft>0) printf("%d *\n",newLeft);
            else printf("* *\n");
        }
        puts("-");
    }
    return 0;

}
