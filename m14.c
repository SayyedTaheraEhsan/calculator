/////**Write a `for` loop that prints the first 10 terms of the series 2, 4, 8, 16, ... (powers of 2).**
#include<stdio.h>
int main()
{
    int A=2;
    int i;
    for(i=0;i<10;i++)
    {
     printf("%d\n",A);
     A=2*A;
    
    }
    return 0;
}