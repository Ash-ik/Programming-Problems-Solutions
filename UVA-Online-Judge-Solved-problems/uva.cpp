#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
//    freopen("data.txt","r",stdin);
    char a[1000],answer[1000][1000],var[1000][10000];
    int fuck[100],l,j,damn,ash,x,i,f,w,max,z,ans,temp[1000];
    int out,num[100],flag[12]={1,1,1,1,1,1,1,1,1,1,1};
        while(scanf("%d %d",&f,&w)==2)
        {
            damn=0;
            flag[0]=flag[1]=flag[2]=flag[3]=flag[4]=flag[5]=flag[6]=flag[7]=flag[8]=flag[9]=flag[10]=1;
            out=0;
            max=0;
          for(i=0;i<f;i++)
          {
              scanf("%d",&num[i]);
              switch(num[i])
              {
                  case 1:flag[1]=0;break;
                  case 2:flag[2]=0;break;
                  case 3:flag[3]=0;break;
                  case 4:flag[4]=0;break;
                  case 5:flag[5]=0;break;
                  case 6:flag[6]=0;break;
                  case 7:flag[7]=0;break;
                  case 8:flag[8]=0;break;
                  case 9:flag[9]=0;break;
                  case 10:flag[10]=0;break;
                  default:break;
              }
          }
          for(i=0;i<w;i++)
          {
              ans=0;
              scanf("%s",a);
          x=strlen(a);
          for(z=0;z<x;z++)
          {
              if((a[z]=='q' ||a[z]=='a'||a[z]=='z') &&flag[1]) ans++;
              else if((a[z]=='w' ||a[z]=='s'||a[z]=='x') &&flag[2]) ans++;
              else if((a[z]=='e' ||a[z]=='d'||a[z]=='c') &&flag[3]) ans++;
              else if((a[z]=='r' ||a[z]=='f'||a[z]=='v'||a[z]=='t'||a[z]=='g'||a[z]=='b') &&flag[4]) ans++;
              else if(a[z]==' ' &&flag[5]) ans++;
              else if(a[z]==' ' &&flag[6]) ans++;
              else if((a[z]=='y' ||a[z]=='h'||a[z]=='n'||a[z]=='u'||a[z]=='j'||a[z]=='m') &&flag[7]) ans++;
              else if((a[z]=='i' ||a[z]=='k'||a[z]==',') &&flag[8]) ans++;
              else if((a[z]=='o' ||a[z]=='i'||a[z]=='.') &&flag[9]) ans++;
              else if((a[z]=='p' ||a[z]==';'||a[z]=='/') &&flag[10]) ans++;
          }
          if(ans==x)
            if(ans>=max)
              {
                  max=ans;
                  temp[out]=ans;
                  strcpy(answer[out],a);
                    out++;
              }
              ash=max;
        sort(answer[out],answer[out]+out);
          for(i=0;i<out;i++)
          if(temp[i]>=ash)
          damn++;
          for(i=0;i<out;i++)
          for(j=i+1;j<out;j++)
          {
              if(!strcmp(answer[i],answer[j]))
          {
          damn--;
          answer[i][0]=' ';
          }
          }
          printf("%d\n",damn);
          for(i=0;i<out;i++)
          if(temp[i]>=ash &&damn &&answer[i][0]!=' ')
          printf("%s\n",answer[i]);
        }
        }
        return 0;
}

