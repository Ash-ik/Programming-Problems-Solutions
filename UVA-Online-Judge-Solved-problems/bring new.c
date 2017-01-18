#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[9]="mara kha";
    for(i=0;i<9;i++)
    {
       if(getch() &&i!=9)    //getch() is the main magic here,it takes input from keyboard without showing it! in display!!
       {
           printf("%c",a[i]);
       }
    }
    return 0;
}
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//char to_lower(char z)
//{
//    if(z>='A' && z<='Z')
//        return z+32;
//    else return z;
//}
//int main()
//{
//    int i,x=0;
//    char a[100],c,temp[10000];
//    while(c=getch())
//    {
//        c=to_lower(c);
//       if(c=='k'||c=='u'||c=='e'||c=='t')
//           {
//                temp[x++]=c;
//                temp[x]='\0';
//           }
//           else
//            {
//                x=0;
//                strcpy(temp,"");
//           }
//           if(strcmp(temp,"kuet")==0)
//           {
//               system("cls");
//               Sleep(500);
//               printf("\n\n\n\n\n\n\n\n\t\tWELCOME TO THE BASHBAGAN :/\n\n\n\n\n");
//               break;
//           }
//    }
//    return 0;
//}
//
