///**Print the first 10 multiples of 3 using a `for` loop.**
#include<stdio.h>
int main()
{
    int i,mult,a;
    a=3;
    for(i=1;i<=10;i++)
    {
        mult=a*i;
        printf("%d\n",mult);
    }
    return 0;
}
