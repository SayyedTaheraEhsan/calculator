///**Create a `do-while` loop that keeps asking for a integer-password until the correct one is entered.**
   #include<stdio.h>
   int main()
   {
    int i,a,c;
    printf("creat a password in 4 positive no\n");
    scanf("%d",&c);
    do 
    {
        printf("enter the correct password\n");
        scanf("%d",&a);
        if (a!=c)
        {
            printf("your password is not correct anter correct password plz \n");
            i++;
        }
    } while(a!=c);
    
      printf("your password is correct\n");
    
    
    return 0;
   }