
#include<stdio.h>
int main()
{
    
    int i=10;
    printf("integer value i=%d\n",i);
    
     int *p=&i;
     
     printf(" inger add i=%d\n",&i);
    printf("   ponter value  i=%d\n",*p);
    printf("    pointer add  i=%d\n",&p);
    *p=20;
     printf("change value ny  uding pointer i=%d\n",i);
     return 0;
}