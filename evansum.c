////Write a program to find the sum of all even numbers between 1 and 50 using a `for` loop
#include<stdio.h>
int main()
{
    int i,sum;
    sum=0;
    for(i=0;i<=50;i++)
    {
        if(i%2==0)
           sum+=i;
    }
    printf("sum of all even numbers between 1 to 50 is %d\n",sum);
    return 0;
}