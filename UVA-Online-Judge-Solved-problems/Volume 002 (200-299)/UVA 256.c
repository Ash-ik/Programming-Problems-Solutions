#include<stdio.h>
#include<string.h>
char *a[10];
int main()
{
    a[2]="00\n01\n81\n";
    a[4]="0000\n0001\n2025\n3025\n9801\n";
    a[6]="000000\n000001\n088209\n494209\n998001\n";
    a[8]="00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001\n";

    int n;
    while(scanf("%d",&n)==1)
    printf("%s",a[n]);
    return 0;
}
