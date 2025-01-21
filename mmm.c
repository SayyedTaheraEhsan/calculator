#include<stdio.h>
int main()
{
    int i,j,n,m,x,y,k;
    int A[100][100];
    int B[100][100];
    int C[100][100];
    printf("inter the 1st matrix row size\n");
    scanf("%d",&n);
    printf("inter the 1st matrix colume size\n");
    scanf("%d",&m);
    printf("enter the element of 1st matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("[%d][%d]\t",i,j);
            scanf("%d",&A[i][j]);
        }
    }
     printf("yout 1st matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    do
    {
      printf("inter the 2nd matrix row size \n make sure your row size is same of 1st matrix culem size\n");
      scanf("%d",&x);
      if(m!=x)
       printf("enter row 2nd matrix size same the 1st matrix culem size\nather waise matrix maltipication not possible\n");
    } while(m!=x);
    printf("inter the 2nd matrix colume size\n");
    scanf("%d",&y);
    printf("enter the elementof 2nd matrix\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("[%d][%d]\t",i,j);
            scanf("%d",&B[i][j]);
        }
    }
       printf("yout 2nd matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<y;j++)
        {
         C[i][j]=0;
         for(k=0;k<m;k++)
         {
            C[i][j]+=A[i][k]*B[k][j];
         }
        }
    }
    printf("your mult matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}