#include <stdio.h>

long factorial(int);

 int main()
{
 int n;
long f;

printf("enter an integer to find an factorial\n");
scanf("%d",&n);

if(n<0)
printf("negative integers are not allowed.\n");
 else
  {
 f=factorial(n);
 printf("%d!=%ld\n",n,f);
  }
return 0;
}

long factorial(int n)
{
 if (n==0)
return 1;
else
return(n*factorial(n-1));
}

