#include<bits/stdc++.h>   //all header file included in this header file :p
using namespace std;


void solve(string eqn,int *val_x,int *val_y,int *val_z,int *val_d)
{
    int i,num=0,temp_x=0,temp_y=0,temp_z=0,temp_d=0;


    bool neg=false,right_of_equal=false;

    for(i=0; i<eqn.length(); i++)
    {
        if((eqn.at(i)=='+'||eqn.at(i)=='-'||eqn.at(i)=='=') &&num!=0)
        {
            if(neg) num=num*(-1);

            if(right_of_equal) num=num*(-1);
            temp_d+=num;
            num=0;
            neg=false;
        }

        if(eqn.at(i)=='-') neg=true;

        if(eqn.at(i)=='=') right_of_equal=true;

        if(eqn.at(i)>='0' &&eqn.at(i)<='9') num=num*10+(eqn.at(i)-'0');



        if(eqn.at(i)=='x')
        {
            if(num==0) num=1;

            if(neg) num=num*(-1);

            if(right_of_equal) num=num*(-1);

            temp_x+=num;
            num=0;
            neg=false;
        }

        if(eqn.at(i)=='y')
        {
            if(num==0) num=1;

            if(neg) num=num*(-1);

            if(right_of_equal) num=num*(-1);

            temp_y+=num;
            num=0;
            neg=false;
        }
        if(eqn.at(i)=='z')
        {
            if(num==0) num=1;

            if(neg) num=num*(-1);

            if(right_of_equal) num=num*(-1);

            temp_z+=num;
            num=0;
            neg=false;
        }


    }

    if(i==eqn.length() &&num!=0)
    {
        if(neg) num=num*(-1);

            if(right_of_equal) num=num*(-1);
            temp_d+=num;
            num=0;
            neg=false;
    }



    *val_x=temp_x;   //finally saving the value in x,y,z
    *val_y=temp_y;
    *val_z=temp_z;
    *val_d=-temp_d;
}


int main()
{
    string eqn;
    int x1,y1,z1,d1,x2,y2,z2,d2,x3,y3,z3,d3;
    cout<<"Enter equation 1:\n";
    getline(cin,eqn);
    solve(eqn,&x1,&y1,&z1,&d1); //sending x1,y1,z1,d1 s address to find out x1,y1,z1 value from equation and save in it

    printf("\n(%dx) + (%dy) + (%dz) + (%d)=0\n",x1,y1,z1,d1);

    cout<<"Enter equation 2:\n";
    getline(cin,eqn);
    solve(eqn,&x2,&y2,&z2,&d2);

    printf("\n(%dx) + (%dy) + (%dz) + (%d)=0\n",x2,y2,z2,d2);

    cout<<"Enter equation 3:\n";
    getline(cin,eqn);
    solve(eqn,&x3,&y3,&z3,&d3);

    printf("\n(%dx) + (%dy) + (%dz) + (%d)=0\n",x3,y3,z3,d3);


//now u have got x1,x2,x3,y1,y2......d3 now you know what to do with them :p

    return 0;
}
