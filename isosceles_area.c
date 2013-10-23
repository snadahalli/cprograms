/***********************************************************
* You can use all the programs on  www.c-program-example.com
* for personal and learning purposes. For permissions to use the
* programs for commercial purposes,
* contact info@c-program-example.com
* To find more C programs, do visit www.c-program-example.com
* and browse!
* 
*                         Happy Coding
***********************************************************/
 /*
* Cross posted from  http://www.c-program-example.com/2011/09/c-program-to-compute-area-of-isosceles.html
*/
 
/*WAP to compute the area of an isosceles triangle */
 
#include<stdio.h>
#include<math.h>
int main() {
 int a, b, c;
 float area, s;
 printf("Enter the sides of a triangle:\n");
 
 scanf("%d%d%d", &a, &b, &c);
 if ((a + b > c && a + c > b && b + c > a) && (a > 0 && b > 0 && c > 0)) {
  if (a == b || b == c || a == c) {
   s = (a + b + c) / 2.0;
   area = sqrt((s * (s - a) * (s - b) * (s - c)));
   printf("\nArea of an isosceles triangle is: %2f\n", area);
  } else {
   printf("\nTriangle is not an isosceles ");
  }
 } else {
  printf("\n Triangle formation not possible\n");
 }
 return 0;
}