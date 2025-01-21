
#include<stdio.h>
#include<stdlib.h>
 void selection_sort(int *a,int c)  ///// creat a function
 {
    int p = 0,t = 0;
  for(int i = 0;i < c-1;i++)        ////selection sort sorting
        {
            p= i;  
            for(int j=i+1;j<c;j++)
            {
                if(a[p] > a[j])  
                {
                    p= j; 
                }
            }
            if(p!= i)                   /////swaping
            {
                 t = a[p];
                a[p] = a[i];
                a[i] = t;
            
            }
        }}
int main()
{

    FILE *file;
    int *a,c = 0,v= 0,k = 0;        
     file = fopen("anatherfile.txt","r");    ////file open
      if(file == NULL)   /// file is nul
    {
        printf("\n anatherfile.txt file is not present \n ");
    }
    while (fscanf(file,"%d",&v) != EOF)    ////element of file
    {
        c++;  
    }
    a = (int *)malloc(c * sizeof(int));     //// memory allocation syntaqx
     rewind(file);
      while (fscanf(file,"%d",&v) != EOF)     //// element stor in memory up to last no
    {
        a[k] = v; 
        k++; 
        printf("%d\t",v);
    }
     
      
    selection_sort(a,c);   //// call function
    printf("\nsorted elements are : \n"); //// print
    for(int i = 0;i < c;i++)             
    
        printf("%d\n",a[i]);
      
     return 0;
   }