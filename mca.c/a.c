#include<stdio.h>
int main()
{
    int i,j,sum;
    int M[2][2];
    printf("enter your matrix\n ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         printf("[%d][%d]", i, j);
            scanf("%d", &M[i][j]);
        }
    }
     printf("your matrix is\n");
     for(i=0;i<2;i++) 
    {
        for(j=0;j<2;j++)
        {
         printf("%d\t", M[i][j]);
        }
       printf("\n");
    }
     printf("your addtion of culem is \n");

     for(j=0;j<2;j++) 
    {
        sum=0;
    
        for(i=0;i<2;i++)
        {
           sum=sum+M[i][j];
        }
         printf("sum=%d\t",sum);
    }
    return 0;

}