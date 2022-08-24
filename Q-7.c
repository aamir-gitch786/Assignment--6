/******************************************************************************
7. Write a program to count digits in a given number
*******************************************************************************/

#include <stdio.h>

int main()
{ int n,count=0,tem;
printf("Enter the value of number: ");
scanf("%d",&n);
tem=n;
while(n!=0)
{
   n/=10;
   count++;
}
printf("Number of digits in a given number %d is %d",tem,count);
    return 0;
}

