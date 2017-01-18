#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#include<stdbool.h>
#include<map>
#include<iostream>
using namespace std;
int main()
{
    int out,ash,n,j,i,f,w,x,max,z,ans,num;
    bool flag[12];
        while(scanf("%d %d",&f,&w)==2)
        {
            string temp[110],a[110];
            map<string,bool>check;
            n=0,ash=0;
        flag[1]=flag[2]=flag[3]=flag[4]=flag[5]=flag[6]=flag[7]=flag[8]=flag[9]=flag[10]=true;
            max=0;
          for(i=0;i<f;i++)
          {
              scanf("%d",&num);
              flag[num]=false;
          }
        for(i=0;i<w;i++)
          {
              ans=0;
              cin>>a[i];
          for(z=0;z<a[i].length();z++)
          {
              if((a[i].at(z)=='q' ||a[i].at(z)=='a'||a[i].at(z)=='z') &&flag[1]) ans++;
              else if((a[i].at(z)=='w' ||a[i].at(z)=='s'||a[i].at(z)=='x') &&flag[2]) ans++;
              else if((a[i].at(z)=='e' ||a[i].at(z)=='d'||a[i].at(z)=='c') &&flag[3]) ans++;
              else if((a[i].at(z)=='r' ||a[i].at(z)=='f'||a[i].at(z)=='v'||a[i].at(z)=='t'||a[i].at(z)=='g'||a[i].at(z)=='b') &&flag[4]) ans++;
              else if(a[i].at(z)==' ' &&flag[5]) ans++;
              else if(a[i].at(z)==' ' &&flag[6]) ans++;
              else if((a[i].at(z)=='y' ||a[i].at(z)=='h'||a[i].at(z)=='n'||a[i].at(z)=='u'||a[i].at(z)=='j'||a[i].at(z)=='m') &&flag[7]) ans++;
              else if((a[i].at(z)=='i' ||a[i].at(z)=='k'||a[i].at(z)==',') &&flag[8]) ans++;
              else if((a[i].at(z)=='o' ||a[i].at(z)=='i'||a[i].at(z)=='.') &&flag[9]) ans++;
              else if((a[i].at(z)=='p' ||a[i].at(z)==';'||a[i].at(z)=='/') &&flag[10]) ans++;
          }
          if(ans==z)
          {
              if(!check[a[i]])
                  temp[ash++]=a[i],check[a[i]]=true;
              if(ans>max)
                    max=ans;
          }
    }
    out=0;
        sort(temp,temp+ash);
        for(i=0;i<ash;i++)
            {
                if(temp[i].length()!=max)
                    {
                        temp[i]="";
                    }
                else out++;
            }
        printf("%d\n",out);
        for(i=0;i<ash;i++)
            if(temp[i].length())
            printf("%s\n",temp[i].c_str());
}
    return 0;
}
