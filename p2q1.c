#include<stdio.h>
int main()
{ 
  int A[1000],sum=0,mult=1,i;
  printf("enter the 5 elements of matrix\n");
  for(i=0;i<5;i++)
  {
    scanf("%d",&A[i]);
    
    sum+=A[i];
    mult*=A[i];
  }
  printf("%d\n",sum);
   printf("%d\n",mult);

  return 0;
}