#include <stdio.h>
char day_str[7][4] = {
	"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"
};
char mon_str[12][4] = {
	"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL",
	"AUG", "SEP", "OCT", "NOV", "DEC"
};

int findDay(char *x)
{
    int i;
    for(i=0;i<7;i++)
        if(!strcmp(day_str[i],x)) return i;
}
int findMonth(char *x)
{
    int i;
    for(i=0;i<12;i++)
        if(!strcmp(mon_str[i],x)) return i;
}

int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
	int testcase,a,b,i,ans;
    char s1[5], s2[5];
	scanf("%d", &testcase);
	while (testcase--)
    {
		scanf("%s %s", s1, s2);
		a = findDay(s2),b = findMonth(s1),ans = 0;
		for (i = 0; i < days[b]; i++) {
			if ((a + i)%7 == 5 || (a + i)%7 == 6)
				ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
