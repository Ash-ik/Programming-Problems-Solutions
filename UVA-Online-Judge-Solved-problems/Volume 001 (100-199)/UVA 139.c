#include <stdio.h>
#include <string.h>
struct data
{
    int len;
    char code[16],locality[26];
    double cost;
};

int main()
{
    int x=0;
    struct data phonebook[10000];
    while (1)
    {
        char s[1024];
        gets(s);
        if (!strcmp(s, "000000"))
            break;
        char* p = strchr(s, ' ');
        *p++ = '\0';
        strcpy(phonebook[x].code, s);
        phonebook[x].len = strlen(phonebook[x].code);
        char *q = strchr(p, '$');
        *q++ = '\0';
        strcpy(phonebook[x].locality, p);
        sscanf(q, "%lf", &phonebook[x].cost);
        phonebook[x].cost /= 100.0;
        x++;
    }
    while (1)
    {
        char number[16];
        scanf("%s", number);
        if (number[0] == '#')
            break;
        int duration;
        scanf("%d", &duration);
        int i = -1;
        if (number[0] == '0')
        {
            for (i = 0; i < x; i++)
                if (!strncmp(number, phonebook[i].code,
                             phonebook[i].len))
                {
                    int length = strlen(&number[phonebook[i].len]);
                    if (length < 4)
                        continue;
                    if (phonebook[i].code[1] == '0')
                    {
                        if (length <= 10)
                            break;
                    }
                    else
                    {
                        if (length <= 7)
                            break;
                    }
                }
        }
        if (i == -1)
            printf("%-15s %-5s%30s%5d%6.2lf%7.2lf\n",
                   number, "Local", number, duration, 0.0, 0.0);
        else if (i < x)
            printf("%-15s %-25s%10s%5d%6.2lf%7.2lf\n",
                   number, phonebook[i].locality,
                   &number[phonebook[i].len], duration,
                   phonebook[i].cost, phonebook[i].cost*duration);
        else
            printf("%-15s %-35s%5d%13.2lf\n", number, "Unknown", duration, -1.0);
    }
    return 0;
}

