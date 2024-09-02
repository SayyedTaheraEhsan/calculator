#include<stdio.h>
int main()
{
    int i,j,k,c,n,M[100][100],B[100][0],A[100][100];
    printf("enter the vactor size\n");
    scanf("%d",&n);
    printf("enter the element of vector\n");
    for(i=0;i<n;i++)
    {
        printf("[%d]",i);
        scanf("%d",&B[0][i]);
    }
    printf("enter the matrix culame size\n");
    scanf("%d",&c);
    printf("enter the element of matrix \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("[%d][%d]",i,j);
           scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<1;i++)
    {
        for(j=0;j<c;j++)
        {   M[i][j]=0;
            for(k=0;k<n;k++)
            M[i][j]+=B[i][k]*A[k][j];
        }
    }
     printf("you vactor and matrix multiplication is\n");
    for(i=0;i<1;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
    return 0;
}