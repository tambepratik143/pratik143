#include <stdio.h>

long factorial(int);

void main()
{
 int number;
 long fact=1;
 
 printf("enter a number to calculate its factorial\n");
 scanf("%d",&number);

 printf("%d!=%ld\n",number,factorial(number));

}
 long factorial(int n)
{
 int c;
 long result=1;

 for(c=1;c>=n;c++)
 result=result*c;
}
