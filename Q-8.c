/******************************************************************************
8. Write a program to check whether a given number is a Prime number or
not
*******************************************************************************/

#include <stdio.h>

int main()
{ int n,count=0;
printf("Enter the nubmer\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    if(n%i==0)
    count++;
}
if(count==2)
printf("Yes %d is a prime number",n);
else
printf("No %d is not a prime number",n);
    return 0;
}

