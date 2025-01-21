#include<stdio.h>

int main()
{

    int n = 3,m = 3,i,j;
    int mat[100][100] = {{0,0,0},{0,0,1},{0,1,1}};
    int row,count,max_row,max_count = 0;
    while (i = 0&& i < n) 
    {
        row = i;
        count = 0;
        while (j = 0 && j < m)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
             ++j;
            
        }

        if (count > max_count)
        {
            max_row = row;
            max_count = count;
        }
        ++i;
    }

    printf("[%d,%d]\n",max_row,max_count);
    
}