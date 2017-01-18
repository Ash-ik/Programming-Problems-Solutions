#include<stdio.h>
#include<math.h>

int main()
{
    int Vt, Vo;
    while(scanf("%d %d", &Vt, &Vo) &&!(!Vt && !Vo))
    {
        double D=0,l,max_l = 0;
        int max=0,i;
        for(i=1;;i++)
        {
            double V=(double)Vt/i;
            if(V<=Vo) break;
            D=0.3d*sqrt(V-Vo);
            l=i*D;
            if(l>=max_l)
            {
                if(fabs(l-max_l)<1e-12)
                {
                    max_l=0;
                    max=0;
                    break;
                }
                max_l=l;
                max=i;
            }
        }
        printf("%d\n",max);
    }
}
