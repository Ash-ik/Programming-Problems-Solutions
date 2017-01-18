#include<stdio.h>
int main()
{
    int movies;
    scanf("%d",&movies);
    while(movies--)
    {
        char input[74];
        int i,j;
        scanf("%s",input);
        for(i=0,j=1;j<=3;)
        {
            if(input[i]=='0')
            {
                if(j==1)
                    printf("\\ / ");
                if(j==2)
                    printf(" |  ");
                if(j==3)
                    printf("/o\\ ");
            }
            if(input[i]=='1')
            {
                if(j==1)
                    printf(" o  ");
                if(j==2)
                    printf("/|\\ ");
                if(j==3)
                    printf("/ \\ ");
            }
            if(input[i]=='2')
            {
                if(j==1)
                    printf("    ");
                if(j==2)
                    printf("    ");
                if(j==3)
                    printf("__\\o");
            }
            if(input[i]=='3')
            {
                if(j==1)
                    printf("    ");
                if(j==2)
                    printf("    ");
                if(j==3)
                    printf("\\_\\o");
            }
            if(input[i]=='4')
            {
                if(j==1)
                    printf("_o_ ");
                if(j==2)
                    printf(" |  ");
                if(j==3)
                    printf("/ \\ ");
            }
            if(input[i]=='5')
            {
                if(j==1)
                    printf("\\o/ ");
                if(j==2)
                    printf(" |  ");
                if(j==3)
                    printf("/ \\ ");
            }
            if(input[i]=='6')
            {
                if(j==1)
                    printf("\\o_ ");
                if(j==2)
                    printf("\\|  ");
                if(j==3)
                    printf(" |  ");
            }
            if(input[i]=='7')
            {
                if(j==1)
                    printf("\\o/ ");
                if(j==2)
                    printf("\\|/ ");
                if(j==3)
                    printf("    ");
            }
            if(input[i]=='8')
            {
                if(j==1)
                    printf("    ");
                if(j==2)
                    printf(" __o");
                if(j==3)
                    printf("/  |");
            }
            if(input[i]=='9')
            {
                if(j==1)
                    printf(" o  ");
                if(j==2)
                    printf("( ) ");
                if(j==3)
                    printf("/ \\ ");
            }
            if(i<strlen(input)-1)
                printf(" ");
            if(i==strlen(input)-1)
                {
                    i=0;
                    j++;
                    printf("\n");
                }
                else i++;
        }
        printf("\n");
    }
    return 0;
}
