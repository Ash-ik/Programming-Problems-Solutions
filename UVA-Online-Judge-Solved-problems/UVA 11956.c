#include<stdio.h>
int main ()
  {
  int pos,i,t,p=1;
  char c[100010];
  scanf ("%d",&t);
  getchar ();
  while(t--)
  {
  gets(c);
  unsigned char ans [100] = {};
  pos=0;
  for (i=0;c[i];i++)
  {
  switch(c[i])
        {
            case '>':pos++; break;
            case '<':pos--; break;
            case '+':ans[pos]++; break;
            case '-':ans[pos]--; break;
            default:break;
        }
  if (pos>99) pos=0;
  if (pos<0) pos=99;
  }
  printf ("Case% d:",p++);
  for (i=0;i<100;i++)
    printf(" %02X",ans [i]);
    puts("");
  }
  return 0;
  }
