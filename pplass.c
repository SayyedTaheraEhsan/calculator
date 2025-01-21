#include<stdio.h>
#include<stdlib.h>
int main()
{
    // Variable Allocation
    FILE *file;
    int n,j,temp,*abc,efg;
 abc=(int *) malloc (n* sizeof(int));
 //file = fopen("anatherfile.txt","r")
 for (int i=0;i<n;i++)
 {
scanf("%d",&abc);
 }
{
        abc++; 
          // increase count for every iteration 

 }
   
  
  printf("runing selection sort .....\n");
 for (int i=0; i<n-1; i++)
 {

    for(j=i+1;j<n;j++)
    {
        if(abc[i]>abc[j])
        {
            efg=j;
        }
    }
    temp=abc[i];
    abc[i]=abc[efg];
    abc[efg]=temp;
 }
 for(int i=0; i<n; i++)
 {
 printf("after the selection sort your value is %d \n",abc[i]);
 }
}