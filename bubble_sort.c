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
 
 
#include<stdio.h>
int main() {
 int a[50], n, i, j, temp = 0;
 
 printf("Enter how many numbers you want:\n");
 scanf("%d", &n);
 printf("Enter the %d elements:\n", n);
 for (i = 0; i < n; i++) {
  scanf("%d", &a[i]);
 }
 printf("\n\t\tThe given array is:\n");
 for (i = 0; i < n; i++) {
  printf("\n\t\t%d", a[i]);
 }
 for (i = 0; i < n; i++) {
  for (j = i + 1; j < n; j++) {
   if (a[i] > a[j]) {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
 
 printf("\n\n\n\t\tThe sorted array using Buble sort is:\n");
 for (i = 0; i < n; i++) {
  printf("\n\t\t%d", a[i]);
 }
 return 0;
}