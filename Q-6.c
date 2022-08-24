/******************************************************************************
6. Write a program to calculate factorial of a number
*******************************************************************************/

#include <stdio.h>

int main()
{ int n,sum=1;
printf("Enter the value of N: ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
sum*=i;
}
printf("factorial of %d is %d",n,sum);
    return 0;
}

