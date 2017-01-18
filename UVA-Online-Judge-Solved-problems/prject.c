#include<stdio.h>
#include<string.h>
#include<windows.h>
struct create
    {
        char name[100];
        char dept[100];
        char college[100];
        char school[100];
        int roll;
        int batch;
        int year;
    int course;
    struct address;
    struct teacher;

    }student[60];
struct address
{
    char village[100];
    char city[100];
    char country[100];
};
struct teacher
{
    char name[100];
    char designation[100];
};
int x=0;
void delete()
{
    int tst;
    printf("Enter roll TO delete profile:");
            scanf("%d",&tst);
            student[tst].roll=0;
            strcpy(student[tst].name,"");
            strcpy(student[tst].dept,"");
            student[tst].batch=0;
            strcpy(student[tst].college,"");
            strcpy(student[tst].school,"");
}
void create_profile()
{
    char t[100];
    int tst;
    printf("Enter your roll:");
            scanf("%d",&tst);
            getchar();
            student[tst].roll=tst;
            printf("\nEnter your name:");
            gets(t);
            strcpy(student[tst].name,t);
            printf("\nEnter your DEPT. name:");
            gets(t);
            strcpy(student[tst].dept,t);
            printf("\nEnter student's batch:");
            scanf("%d",&student[tst].batch);
            getchar();
            printf("\nEnter student's college:");
            gets(t);
            strcpy(student[tst].college,t);
            printf("\nEnter student's school:");
            gets(t);
            strcpy(student[tst].school,t);
            x++;
}
void search()
{
    int temp;
    printf("Enter roll to see profile:");
    scanf("%d",&temp);
    printf("Roll: %d\nName:%s\nDept:%s\nBatch:%d\nCollege:%s\nschool:%s\n",student[temp].roll,student[temp].name,student[temp].dept,student[temp].batch,student[temp].college,student[temp].school);
}
void operate(int d)
{
    if(d==1)
        {
//            system("cls");
            create_profile();
        }
        else if(d==2)
            {
//                system("cls");
                search();
            }
        else if(d==3)
        {
//
            delete();
        }
}
int main()
{
    char welcome[100]="\n\n\n\n\t\tWELCOME TO\n\t\t\tSTUDENT PROFILE VIEWER!!!";
    char instruction[1000]="\n\n\n\n\t\t\tINDEX\n\n\t\t\t0-EXIT\n\t\t\t1-Create\n\t\t\t2-Search & show\n\t\t\tn/a-Edit\n\t\t\t3-Delete profile\n\n\t\t\tEnter your choice:";
    int z,n,p=0;
    for(z=0;z<strlen(welcome);z++)
    {
        printf("%c",welcome[z]);
        Sleep(100);
    }
    Sleep(2000);
    system("cls");
    for(z=0;z<strlen(instruction);z++)
    {
        printf("%c",instruction[z]);
        Sleep(100);
    }
    //scanf("%d",&n);
    while(scanf("%d",&n)!=EOF &&n)
    {
        system("cls");
        if(++p)
            {
                operate(n);
                Sleep(2000);
                system("cls");
            }
            for(z=0;z<strlen(instruction);z++)
    {
        printf("%c",instruction[z]);
        Sleep(100);
    }
    }
}
