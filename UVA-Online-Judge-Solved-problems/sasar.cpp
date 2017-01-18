#include<iostream>

using namespace std;

class matrix
{
    int column;
    int row;
    int array[2][2];

public:
    void setdata(void);
    void display(void);
    int add(matrix);
    int sub(matrix);
};
void matrix::setdata(void)
{
    cout << "Enter the matrix row : ";
    cin >> row;
    cout << "Enter the matrix column : ";
    cin >> column;
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cin>>array[i][j];
        }
    }
}
void matrix::display(void)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cout<<array[i][j]<<"   ";
        }
        cout<<endl;
    }
}
int matrix::add(matrix m)
{
    int i,j;
    if(row==m.row&&column==m.column)
    {
        for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cout<<array[i][j]+m.array[i][j]<<"   ";
        }
        cout<<endl;
    }
    }
    else{cout<<"Impossible!!";}

}
int matrix::sub(matrix n)
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {

            cout<<array[i][j]-n.array[i][j]<<"   ";
        }
        cout<<endl;
    }
}
int main()
{
    matrix m1,m2;
    cout<<"Enter 1st mat: ";
    m1.setdata();
    cout<<"Display 1st mat:"<<endl;
    m1.display();


    cout<<"Enter 2nd mat: ";
    m2.setdata();
    cout<<"Display 2nd mat:"<<endl;
    m2.display();

    cout<<"Addition of 1st & 2nd mat:  "<<endl;
    m1.add(m2);


    cout<<"Subtract of 1st & 2nd mat:  "<<endl;
    m1.sub(m2);
}
