#include<stdio.h>
#include<math.h>
int main()
{
    int n,div,ans;
    printf("enter the no\n");
    scanf("%d",&n);
    int flag=1;
    for(int i=2;i<sqrt(n);i++)
    {
     if(n%i==0)
     flag=0;
    }
    if(flag)
    printf("uor no %d is prim\n",n);
    else
    printf("uour no is not prim\n");
    return 0;

}