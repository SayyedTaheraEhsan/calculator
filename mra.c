#include <stdio.h>
int main()
{
    int i, j, k;
    int A[3][3];
    printf("enter the value of your 3by3 matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("Enter [%d][%d]", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("your matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        k = 0;
        for (j = 0; j < 3; j++)
        {
            k = k + A[i][j];
        }
        printf("k=%d\n", k);
    }
    printf("\n");
    return 0;
}