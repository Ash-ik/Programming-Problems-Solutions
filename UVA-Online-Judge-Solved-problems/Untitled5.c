#include<stdio.h>
#include<conio.h>
int main()
{
char ch[]="My name is Ashik.And you are?";
char c;
int i=0;
while(420)
{
printf("%c\a",ch[i]);
i++;
if(i==29)
{
printf("\n");i=17;
}
}
getch();
return 0;
}
