#include<stdio.h>
#include<string.h>
char year[1000099];
int hold[5]={4,100,400,55,15};
int main()
{
    unsigned long long x=0,leap_year,i,p,y,leap,bulukulu,huluculu;
    while(scanf("%s",&year)==1)
    {
        if(x)
            printf("\n");
        x++;
        leap_year=bulukulu=huluculu=0;
        int leap[5]={};
        p=strlen(year);
        for(i=0;i<5;i++)
        {
            for(y=0;y<p;y++)
            leap[i]=(leap[i]*10+year[y]-'0')%hold[i];
            if(leap[i])
                leap[i]=1;
        }
        if((!leap[0] && leap[1])|| !leap[2])
        {
            leap_year=1;
            if(!leap[3]) bulukulu=1;
        }
        if(!leap[4]) huluculu=1;
        if(leap_year) printf("This is leap year.\n");
        if(huluculu) printf("This is huluculu festival year.\n");
        if(bulukulu) printf("This is bulukulu festival year.\n");
        if(!leap_year && !huluculu && !bulukulu) printf("This is an ordinary year.\n");
    }
    return 0;
}
