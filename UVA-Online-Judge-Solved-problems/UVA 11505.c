#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define pi acos(-1.0)
#define rad(x) x*pi/180.0
int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int numOfCommand;
        double theta=0.0,x=0.0,y=0.0;
        scanf("%d",&numOfCommand);
        while(numOfCommand--)
        {
            char cmd;
            double value;
            scanf("\n%c%*c %lf",&cmd,&value);
            if(cmd=='f')
            {
                x+=value*cos(rad(theta));
                y+=value*sin(rad(theta));
            }
            else if(cmd=='l')
                theta=fmod(theta+value,360);
                else if(cmd=='r')
                    theta=fmod(theta-value,360);
                else
                {
                    x-=value*cos(rad(theta));
                    y-=value*sin(rad(theta));
                }
        }
        printf("%0.lf\n",sqrt(x*x+y*y));
    }
    return 0;
}
