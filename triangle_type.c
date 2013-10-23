/***********************************************************
* You can use all the programs on  www.c-program-example.com
* for personal and learning purposes. For permissions to use the
* programs for commercial purposes,
* contact info@c-program-example.com
* To find more C programs, do visit www.c-program-example.com
* and browse!
* 
*                                  Happy Coding
***********************************************************/


/*a and b are two integers arrays each with n elements. 
 Write a program to find the array c such that c[i]=a[i]+b[n-1-i] */

#include<stdio.h>
int main() {
 int a[20], b[20], c[30], i, n;
 printf("Enter the number of elements to the array:\n");
 scanf("%d", &n);
 printf("\nEnter the  %d elements to the array A:\n", n);
 for (i = 0; i < n; i++) {
  scanf("%d", &a[i]);
 }
 printf("\nEnter the  %d elements to the array B:\n", n);
 for (i = 0; i < n; i++) {
  scanf("%d", &b[i]);
 }

 for (i = 0; i < n; i++) {
  c[i] = a[i] + b[n - 1 - i];
 }

 printf("\nC array elements are:\n");
 for (i = 0; i < n; i++) {
  printf("\n");
  printf("%d", c[i]);
 }
 return 0;

}