#include<stdio.h>
int main()
{
  float radius,area;

  printf("\nenter the radius of circle:");
  scanf("%d",&radius);

  area=3.14*radius*radius;
  printf("\nArea of circle:%f",area);

  return(0);
}
