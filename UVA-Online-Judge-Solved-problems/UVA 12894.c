#include<stdio.h>
int main(){
    int n,x0,y0,cx,cy,r;
char x[100];
gets(x);
n=atoi(x);

    while (n--){
            gets(x);
        sscanf(x,"%d%d%*d%*d%d%d%d",&x0,&y0,&cx,&cy,&r);

        if (2*(cx-x0)+(y0-cy)-3*r)
            puts("NO");
        else
            puts("YES");
    }
    return 0;
}
