#include <stdio.h>
void main()
{
 int marks;
 printf("enter your marks:");
 scanf("%d",&marks);

 if(marks>100)
  printf("not valid marks");

else if(marks>=80)

  printf("your grade is A");

else if(marks>=70)

  printf("your grade is B");

else if(marks>=50)

  printf("your grade is C");

else if(marks>=35)

  printf("your grade is D");

else 

  printf("your grade is E");
}
