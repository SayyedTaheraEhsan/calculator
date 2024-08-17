#include<stdio.h>
int main()
{
    int i,j,k;
    printf("inter the table no\n");
    scanf("%d",&i);
    for(j=1;j<=10;j++)
    {
    k=i*j;
    printf(" %d\n",k);
    }
     return 0;
}