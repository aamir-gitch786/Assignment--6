/******************************************************************************
5. Write a program to calculate sum of cubes of first N natural numbers
*******************************************************************************/

#include <stdio.h>

int main()
{ int n,sum=0;
printf("Enter the value of N: ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
sum+=i*i*i;
}
printf("Sum of cubes of first  %d  natural numbers is %d",n,sum);
    return 0;
}

