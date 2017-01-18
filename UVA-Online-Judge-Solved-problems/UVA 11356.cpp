#include<stdio.h>
#include<string.h>
#include<map>
#include<stdbool.h>
#include<iostream>
#include<string>
using namespace std;

char months[][10]= {"","January","February","March","April","May","June","July","August","September","October","November","December"};

bool leapYear(int year)
{
    if((year%400==0)||((year%4==0)&&(year%100!=0)))
        return true;
    return false;
}

int find_month(string month)
{
    int i;
    for(i=1; i<=12; i++)
        if(month.compare(months[i])==0)
            return i;
    return 0;
}
int main()
{

    int t;
    register int days[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&t);
    getchar();
    for(int i=1; i<=t; i++)
    {
        int year,date,k;
        string m;
        scanf("%d-",&year);
        getline(cin,m,'-');
        scanf("%d",&date);
        scanf("%d",&k);

        int month=find_month(m);
        if(leapYear(year)==true)
            days[2]=29;
        else days[2]=28;

        while(k--)
        {
            if(date+1>days[month])
            {
                date=1;
                if(month+1>12)
                {
                    month=1;
                    year++;

                    if(leapYear(year)==true)
                        days[2]=29;
                    else days[2]=28;
                }
                else month++;
            }
            else
                date++;
        }
        printf("Case %d: %0004d-%s-%02d\n",i,year,months[month],date);
    }
    return 0;
}
