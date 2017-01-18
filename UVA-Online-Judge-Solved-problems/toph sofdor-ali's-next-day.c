#include <stdio.h>
#include<stdbool.h>
bool leapyear(int yr)
{
    if((yr%4==0)&&!(yr%100==0)||(yr%400==0))
        return true;
    return false;
}
int main()
{
    int t,day, month, year;
    char *months[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d", &day, &month, &year);
        if(month==2)
        {
            if((!leapyear(year) &&day==28)||day==29)
                day=1,month=3;
            else
                day++;
        }
        else if(month==4||month==6||month==9||month==11)
        {
            if(day==30) day=1,month++;
            else day++;
        }
        else
        {
            if(day==31) day=1,month++;
            else day++;
            if(month==13)
                month=1,year++;
        }
        if(day<10)
            putchar('0');
        printf("%d %s, %d\n",day,months[month-1],year);
    }
    return 0;
}
