/******************************************************************************
4. Write a program to calculate sum of squares of first N natural numbers
*******************************************************************************/

#include <stdio.h>

int main()
{ int n,sum=0;
printf("Enter the value of N: ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
sum+=i*i;
}
printf("Sum of squares of first %d  natural numbers is %d",n,sum);
    return 0;
}

