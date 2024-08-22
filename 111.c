///**Create a `do-while` loop that prompts the user for input and prints the input until the user enters "111".**
#include<stdio.h>
int main()
{
    int i;
    do{
    printf("enter the first same 3 digit no\n");
    scanf("%d",&i);
    if(i!=111)
    {
    printf("your value of iis %d\n",i);
    }
    }while(i!=111);
    printf("your value is 111\n");
    return 0;

    
}