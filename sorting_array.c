#include<stdio.h>
int main()
{
    int temp,i,j,n,A[100];
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the %d elements any order",n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
        if(A[j]<A[i])
        {
        
       
         temp=A[i];
         A[i]=A[j];
         A[j]=temp;
    }
       }
    }
    printf("new array is\t");
    for(i=0;i<n;i++)
      printf("%d",A[i]);
    return 0;
}