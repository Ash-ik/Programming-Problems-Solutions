#include <stdio.h>
#include<stdbool.h>
#define UNASSIGNED 0

int N;

bool FindUnassignedLocation(int grid[N][N], int &row, int &col)
{
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (grid[row][col] == UNASSIGNED)
                return true;
    return false;
}

bool isSafe(int grid[N][N], int row, int col, int num)
{
    /* Check if 'num' is not already placed in current row,
       current column and current 3x3 box */
    return !UsedInRow(grid, row, num) &&
           !UsedInCol(grid, col, num) &&
           !UsedInBox(grid, row - row%3 , col - col%3, num);
}

bool SolveSudoku(int grid[N][N])
{
    int row, col;

    // If there is no unassigned location, we are done
    if (!FindUnassignedLocation(grid, row, col))
       return true; // success!

    // consider digits 1 to 9
    for (num=1;num<=N; num++)
    {
        // if looks promising
        if (isSafe(grid, row, col, num))
        {
            // make tentative assignment
            grid[row][col] = num;

            // return, if success, yay!
            if (SolveSudoku(grid))
                return true;

            // failure, unmake & try again
            grid[row][col] = UNASSIGNED;
        }
    }
    return false; // this triggers backtracking
}

bool UsedInRow(int grid[N][N], int row, int num)
{
    for (int col = 0; col < N; col++)
        if (grid[row][col] == num)
            return true;
    return false;
}

bool UsedInCol(int grid[N][N], int col, int num)
{
    int row;
    for (row = 0; row < N; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}

bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num)
{
    int row,col;
    for (row=0;row< 3; row++)
        for (col = 0; col < 3; col++)
            if (grid[row+boxStartRow][col+boxStartCol] == num)
                return true;
    return false;
}

/* A utility function to print grid  */
void printGrid(int grid[N][N])
{
    int row,col;
    for (row = 0; row < N; row++)
    {
       for (col = 0; col < N; col++)
             printf("%3d", grid[row][col]);
        printf("\n");
    }
}



int main()
{
    freopen("dataN.txt","r",stdin);
    int i,j;
    scanf("%d",&N);
    int puzzle[N][N];

    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        scanf("%d",&puzzle[i][j]);
    if (SolveSudoku(puzzle) == true)
          printGrid(puzzle);
    else
         printf("No solution exists");

    return 0;
}
