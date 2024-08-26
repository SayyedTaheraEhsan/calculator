////Use a `while` loop to print the Fibonacci sequence up to the 10th term.
#include<stdio.h>
int main()
{
    int i=0,i2,i1=1;
    i2=1+i1;
     printf("%d\n%d\n%d\n",i,i1,i2);
    while(i<10)
    {
        if(i=2)
    {
        i=i1;
        i1=i2;
        i2=i+i1;
        printf("%d\n",i2);
        i++;
    }
    }
    return 0;
}

