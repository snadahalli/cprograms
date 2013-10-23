/***********************************************************
* You can use all the programs on  www.c-program-example.com
* for personal and learning purposes. For permissions to use the
* programs for commercial purposes,
* contact info@c-program-example.com
* To find more C programs, do visit www.c-program-example.com
* and browse!
* This program was originally posted at
* http://www.c-program-example.com/2011/09/you-can-use-all-programs-on-www_30.html
*                                  Happy Coding
***********************************************************/
 
/* C Program To Find The Biggest(Largest) Of 3 Numbers */
 
#include<stdio.h>
 
int main() {
 
 int a, b, c;
 printf("Enter the value for a:\n");
 scanf("%d", &a);
 printf("Enter the value for b:\n");
 scanf("%d", &b);
 printf("Enter the value for c:\n");
 scanf("%d", &c);
 if ((a > b) && (a > c)) {
  printf("\n The big one is a= %d", a);
 } else if (b > c) {
  printf("\n The big one is b= %d", b);
 } else {
  printf("\n The big one is c= %d", c);
 }
 return 0;
}