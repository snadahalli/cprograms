/* Sandeepa Nadahalli
* C program to check whether a given integer number is positive or negative.
* Originally posted at
* http://www.c-program-example.com/2011/09/c-program-to-check-whether-given_30.html
* On www.c-program-example.com
*/
#include <stdio.h>
void main()
{
 int number;

 printf("Enter a number\n");
 scanf ("%d", &number);

 if (number > 0)
  printf ("%d is a positive number\n", number);
 else if (number < 0)
  printf ("%d is a negative number\n", number);
 else
  printf("You entered 0\n");
}
