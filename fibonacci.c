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

/* WAP to generate n Fibonacci terms using array declaration */

#include <stdio.h>

int main()
{
 int n,i;
 int a[100]={0,1,1};
 int fib, fib1=0,fib2=1;
 printf("How many fibonacci numbers do you want?\n");
 scanf("%d",&n);
 for(i=2;i<=n;i++)
 {
  fib=fib1+fib2;
  a[i]=fib;
  fib1=fib2;
  fib2=fib;
 }
 printf("\nFibonacci numbers up to  %d terms are:\n",n);
 for(i=0;i<n;i++)
 {
  printf("\t\n%d\n",a[i]);
 }
 return 0;
}
