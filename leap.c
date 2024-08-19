#include<stdio.h>
int main()
{
    int i;
    printf("enter aany no you to chack this is leap or not\n");
    scanf("%d",&i);
    if(i%4==0)
    {
        if(i%100==0)
        {
            if(i%400==0)
            {
                printf("this year is leap year\n");
            }
        }
        printf("this is not a leap year\n");
    }
    return 0;
    
}