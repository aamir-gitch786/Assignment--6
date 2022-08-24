/******************************************************************************
10. Write a program to reverse a given number
*******************************************************************************/

#include <stdio.h>

int main()
{ int n,r,sum=0,tem;
printf("Enter the number\n");
scanf("%d",&n);
tem=n;
while(n!=0)
{
   r=n%10;
   sum=sum*10+r;
   n/=10;
}
printf("The reverse of %d is %d ",tem,sum);
    return 0;
}

