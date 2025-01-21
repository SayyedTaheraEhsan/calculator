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
     printf("your addtion of uper tringular is \n");
      sum=0;
     for(j=0;j<2;j++) 
    {
    
        for(i=0;i<2;i++)
        {
            if(i<j)
            {
             sum=sum+M[i][j];
             printf("sum=%d\t\n",sum);
            }
        }
        
    }
    return 0;

}