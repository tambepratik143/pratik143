#include <stdio.h>
void main()
{
int a,b;
printf("enter value of num1 &num2:");
scanf("%d%d",&a,&b);

a=a+b;
b=a-b;
a=a-b;

printf("after swapping value of a: %d",a);
printf("after swapping value of b:%d",b);

}
