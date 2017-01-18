#include<stdio.h>
int main()
{
    int t,m,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&d);
        if(m==1 ||m==10)
        {
            if(d==3||d==10||d==17||d==24||d==31) printf("Monday\n");
            else if(d==4||d==11||d==18||d==25) printf("Tuesday\n");
            else if(d==5||d==12||d==19||d==26) printf("Wednesday\n");
            else if(d==6||d==13||d==20||d==27) printf("Thursday\n");
            else if(d==7||d==14||d==21||d==28) printf("Friday\n");
            else if(d==1||d==8||d==15||d==22||d==29) printf("Saturday\n");
            else printf("Sunday\n");
        }
        else if(m==2 ||m==3||m==11)
        {
            if(d==3||d==10||d==17||d==24||d==31) printf("Thursday\n");
            else if(d==4||d==11||d==18||d==25) printf("Friday\n");
            else if(d==5||d==12||d==19||d==26) printf("Saturday\n");
            else if(d==6||d==13||d==20||d==27) printf("Sunday\n");
            else if(d==7||d==14||d==21||d==28) printf("Monday\n");
            else if(d==1||d==8||d==15||d==22||d==29) printf("Tuesday\n");
            else printf("Wednesday\n");
        }
        else if(m==4)
        {
            if(d==3||d==10||d==17||d==24) printf("Sunday\n");
            else if(d==4||d==11||d==18||d==25) printf("Monday\n");
            else if(d==5||d==12||d==19||d==26) printf("Tuesday\n");
            else if(d==6||d==13||d==20||d==27) printf("Wednesday\n");
            else if(d==7||d==14||d==21||d==28) printf("Thursday\n");
            else if(d==1||d==8||d==15||d==22||d==29) printf("Friday\n");
            else printf("Saturday\n");
        }
        else if(m==5)
        {
            if(d==3||d==10||d==17||d==24 ||d==31) printf("Tuesday\n");
            else if(d==4||d==11||d==18||d==25) printf("Wednesday\n");
            else if(d==5||d==12||d==19||d==26) printf("Thursday\n");
            else if(d==6||d==13||d==20||d==27) printf("Friday\n");
            else if(d==7||d==14||d==21||d==28) printf("Saturday\n");
            else if(d==1||d==8||d==15||d==22||d==29) printf("Sunday\n");
            else printf("Monday\n");
        }
        else if(m==6)
        {
            if(d==3||d==10||d==17||d==24) printf("Friday\n");
            else if(d==4||d==11||d==18||d==25) printf("Saturday\n");
            else if(d==5||d==12||d==19||d==26) printf("Sunday\n");
            else if(d==6||d==13||d==20||d==27) printf("Monday\n");
            else if(d==7||d==14||d==21||d==28) printf("Tuesday\n");
            else if(d==1||d==8||d==15||d==22||d==29) printf("Wednesday\n");
            else printf("Thursday\n");
        }
        else if(m==7)
        {
            if(d==3||d==10||d==17||d==24 ||d==31) printf("Sunday\n");
            else if(d==4||d==11||d==18||d==25) printf("Monday\n");
            else if(d==5||d==12||d==19||d==26) printf("Tuesday\n");
            else if(d==6||d==13||d==20||d==27) printf("Wednesday\n");
            else if(d==7||d==14||d==21||d==28) printf("Thursday\n");
            else if(d==1||d==8||d==15||d==22||d==29) printf("Friday\n");
            else printf("Saturday\n");
        }
        else if(m==8)
        {
            if(d==3||d==10||d==17||d==24 ||d==31) printf("Wednesday\n");
            else if(d==4||d==11||d==18||d==25) printf("Thursday\n");
            else if(d==5||d==12||d==19||d==26) printf("Friday\n");
            else if(d==6||d==13||d==20||d==27) printf("Saturday\n");
            else if(d==7||d==14||d==21||d==28) printf("Sunday\n");
            else if(d==1||d==8||d==15||d==22||d==29) printf("Monday\n");
            else printf("Tuesday\n");
        }
        else if(m==9)
        {
            if(d==3||d==10||d==17||d==24) printf("Saturday\n");
            else if(d==4||d==11||d==18||d==25) printf("Sunday\n");
            else if(d==5||d==12||d==19||d==26) printf("Monday\n");
            else if(d==6||d==13||d==20||d==27) printf("Tuesday\n");
            else if(d==7||d==14||d==21||d==28) printf("Wednesday\n");
            else if(d==1||d==8||d==15||d==22||d==29) printf("Thursday\n");
            else printf("Friday\n");
        }
        else
        {
            if(d==3||d==10||d==17||d==24||d==31) printf("Saturday\n");
            else if(d==4||d==11||d==18||d==25) printf("Sunday\n");
            else if(d==5||d==12||d==19||d==26) printf("Monday\n");
            else if(d==6||d==13||d==20||d==27) printf("Tuesday\n");
            else if(d==7||d==14||d==21||d==28) printf("Wednesday\n");
            else if(d==1||d==8||d==15||d==22||d==29) printf("Thursday\n");
            else printf("Friday\n");
        }
    }
    return 0;
}
