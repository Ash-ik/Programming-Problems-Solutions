#include<stdio.h>
#include<windows.h>
int p,i=3,boy_pos=3,girl_pos=40;
void boy()
{
//    for(p=0;p<boy_pos;p++) printf(" ");
    printf("(\"_\")\n");
//    for(p=0;p<boy_pos;p++) printf(" ");
    printf("(| |\\\n");
//    for(p=0;p<boy_pos;p++) printf(" ");
    printf(" / ) \n");
}
void girl()
{
//    for(p=0;p<girl_pos;p++) printf(" ");
    printf("(^_^)\n");
//    for(p=0;p<girl_pos;p++) printf(" ");
    printf("/| |)\n");
//    for(p=0;p<girl_pos;p++) printf(" ");
    printf(" ( (\n");

}
int main()
{
    while(i<girl_pos-2)
          {
                boy();
                for(boy_pos=i;boy_pos<girl_pos-3;boy_pos++,girl_pos--) printf(" ");
                i++;
                girl();
                Sleep(1000);
                system("cls");
          }
}
