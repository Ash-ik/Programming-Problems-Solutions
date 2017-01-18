#include <iostream>
using namespace std;
class matrix
{
private:
    int row,col;
    int m[100][100];
public:
    matrix()
    {
        row=1;
        col=1;
    }

    void input();
    void display();
    matrix operator+(matrix);
    matrix operator-(matrix);
};

void matrix::input()
{
    cout <<"Enter row and colm number:";
    cin >>row>>col;


    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cin>>m[r][c];
        }
    }
}
void matrix::display()
{
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cout<<m[r][c]<<" ";
        }
        cout<<"\n";
    }
}
matrix matrix::operator+(matrix M2)
{
    matrix M3;
    int value;

    M3.row=M2.row;
    M3.col=M2.col;

    cout<<"Sum of matrix:\n";
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            value=m[r][c]+M2.m[r][c];
            M3.m[r][c]=value;

        }

    }
    return M3;

}
matrix matrix::operator-(matrix M2)
{
    matrix M4;


     M4.row=M2.row;
    M4.col=M2.col;


    cout<<"Subtraction of matrix:\n";
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            M4.m[r][c]=m[r][c]-M2.m[r][c];

        }

    }
    return M4;
}

int main()
{

    matrix M1,M2,M3,M4;
    cout<<"Enter 1st matrix:\n";

    M1.input();
    cout<<"Enter 2nd matrix:\n";

    M2.input();
    cout<<"1st matrix:\n";

    M1.display();
    cout<<"2nd matrix:\n";

    M2.display();
    M3=M1+M2;
    M3.display();
    M4=M1-M2;
    M4.display();

    return 0;
}
