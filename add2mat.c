#include<stdio.h>
int main()
{
    int i,j,i1,j1;
    int a,a1,sum;
    printf("enter the no of squre");
    scanf("%d",&a);
    int M[a][a];
     printf("Enter the value of your matrix");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("Enter [%d][%d]",i,j);
            scanf("%d",&M[i][j]);
        }
    }
    printf("the matrix is \n");
     for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d",M[j][i]);
            
        }
        printf("\n");
    }
    printf("enter the no of squre");
    scanf("%d",&a1);
    int M1[a1][a1];
     printf("Enter the value of your matrix");
    for(i1=0;i1<a1;i1++)
    {
        for(j1=0;j1<a;j1++)
        {
            printf("Enter [%d][%d]",i1,j1);
            scanf("%d",&M[i1][j1]);
        }
    }
    printf("the matrix is \n");
     for(i1=0;i1<a;i1++)
    {
        for(j1=0;j1<a1;j1++)
        
            printf("%d",M1[j1][i1]);
            
    
        printf("\n");
    }
    sum=M1[i1][j1]+M[1][2];
    printf("%d",sum);
    return 0;
}
   