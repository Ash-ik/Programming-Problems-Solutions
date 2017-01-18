#include<iostream>
#include<math.h>
using namespace std;
class point2D
{
    double a,b,distance;
public:
    point2D()
    {
        a=b=0;
    }
    point2D& operator-(point2D&);
    friend ostream& operator<<(ostream&,point2D&);
    friend istream& operator>>(istream&,point2D&);
};
istream& operator>>(istream& in,point2D& input)
{
    cout<<"Enter x and y axis of input point:";
    in>>input.a>>input.b;
    return in;
}
ostream& operator<<(ostream& out,point2D& output)
{
    out<<"The total distance is: ";
    out<<output.distance;
}
point2D& point2D::operator-(point2D& NEW)
{
    NEW.distance=sqrt((a-NEW.a)*(a-NEW.a)+(b-NEW.b)*(b-NEW.b));
    return NEW;
}

int main()
{
    point2D A,B;
    cin>>A>>B;
    cout<<A-B;
return 0;
}
