#include <stdio.h>

void main()
{
int x,y,temp;

printf("enter the value of x and y");
  scanf("%d%d",&x,&y);

printf("before swappingx=%d,y=%d",x,y);
temp=x;
x=y;
y=temp;
printf("after swappingx=%d,y=%d",x,y);

}
