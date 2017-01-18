#include<iostream>
using namespace std;
class c1
{
    static int resource;
public:
    int get_resource();
    void free_resource(){resource=0;};
};
int c1::resource=0;
int c1::get_resource()
{
    if(resource)return 0;
    else
    {
        resource=1;
        return 1;
    }
}
int main()
{
    c1 ob1,ob2;
    if(ob1.get_resource()) cout<<"ob1 has resource.\n";
    if(!ob2.get_resource()) cout<<"ob2 denied resource.\n";
    ob1.free_resource();
    if(ob2.get_resource())
        cout<<"ob2 can now use resource.\n";
    return 0;
}
