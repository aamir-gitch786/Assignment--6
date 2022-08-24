/******************************************************************************
9. Write a program to calculate LCM of two numbers
*******************************************************************************/

#include <stdio.h>
int main() {
   int a,b;
   printf("Enter the value of first number ");
   scanf("%d",&a);
   printf("Enter the value of seconde number ");
   scanf("%d",&b);
   for(int i=1;i<=a*b;i++)
   {
       if(i%a==0 && i%b==0)
       {printf("LCM(%d , %d) is :%d",a,b,i);
       break;}
   }

    return 0;
}

