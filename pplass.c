#include<stdio.h>
#include<stdlib.h>
int main()


{int i,n,j,temp,*abc,efg;
 int A[10]= {70,60,80,20,60,10,30,40,50};
 
 abc=(int *) calloc (10,sizeof(int));
 for (i=0;i<n;i++)
 {
   printf("your array is %d\n",abc[i]);
  }
  printf("runing selection sort .....\n");
 for (i=0; i<n-1; i++)
 {
    efg=i;
    for(j=i+1;j<n;j++)
    {
        if(A[j]<A[efg])
        {
            efg=j;
        }
    }
    temp=A[i];
    A[i]=A[efg];
    A[efg]=temp;
 }
}