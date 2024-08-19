#include<stdio.h>
int main()
{
    int i,j,div,mod;
    printf("enter the 2 no \n");
    scanf("%d%d",&i,&j);
    if (j!=0)
    {
        mod=i%j;
        div=i/j;
        printf("your div is%d\n and mod is%d\n",div,mod);
    }
    return 0;
}