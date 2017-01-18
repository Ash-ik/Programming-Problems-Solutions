#include<stdio.h>
#include<stdbool.h>

int board[200]={},count;

void print_board(int n)
{
    int i,j;
    printf("\n\nSolution %d:\n\n",++count);
    for(i=1; i<=n; i++,printf("\n"))
        for(j=1; j<=n; j++)
        {
            if(board[i]==j) printf(" Q");
            else printf(" -");
        }
}
bool place(int row ,int column)
{
    int i;
    for(i=1; i<=row-1; i++)
        if(board[i]==column||abs(board[i]-column)==abs(i-row)) return false;

    return true;
}
void queen(int row, int n)
{
    int column;
    for(column=1;column<=n;column++)
    {
        if(place(row,column))
        {
            board[row]=column;
            if(row==n) print_board(n);
            else queen(row+1,n);
        }
    }
}

int main()
{
    int n;
    printf("Enter number of queen's :");
    scanf("%d",&n);
    queen(1,n);
    return 0;
}
