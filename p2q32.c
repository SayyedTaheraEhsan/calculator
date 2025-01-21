#include<stdio.h>

int main()
{
    int n,i,j,k,temp;

    printf("Enter number of rows and columns for Square Matrix : ");
    scanf("%d",&n);

    int M[n][n];
    printf("Enter elements for Matrix : ");
    while(i=0&&i<n)
    {
        while(j=0&&j<n)
        {
            printf("M[%d][%d] : ",i+1,j+1);
            scanf("%d",&M[i][j]);
            j++;
        }
        i++;
    }
    printf("Original Matrix : \n");
    while(i=0&&i<n)
    {
        printf("[");
        while(j=0&&j<n)
        {
            printf(" %d ",M[i][j]);
            j++;
        }
        printf("]\n");
        i++;
    }

    printf("Horizontally Flipped and Inverted Matrix : \n");

  while(i=0&&i<n)
  {
        while(j=n-1,k=0 && j>=0,k<n)
        {
            
            temp=M[i][j];
            M[i][j]=M[i][k];
            M[i][k] = temp;
            if(M[i][j]){
                M[i][j]=0;
            }
            else{
                M[i][j]=1;
            }
            j--,k++;
        }
        i++;
    }
   while(i=0&&i<n)
   {
        printf("[");
        while(j=0&&j<n)
        {
            printf(" %d ",M[i][j]);
            j++;
        }
        printf("]\n");
        i++;
    }

    return 0;
}