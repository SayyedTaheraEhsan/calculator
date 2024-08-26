///15. **Use a `do-while` loop to repeatedly ask the user to enter a number until the number is greater than 100.**
#include<stdio.h>
int main()
{
    int i,j;
    do
    {
        printf("enter the 3 digit no\n");
        scanf("%d",&i);
        i++;
        
    } while (i<100);
    return 0;
}