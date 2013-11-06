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
 
 
/*WAP to read ten integers from the keyboards and print the sum of even and odd numbers.*/
 
#include<stdio.h>
 
int main()
{
 int a[10];
 int i,sumeven=0,sumodd=0;
 printf("Enter ten Integers:\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
 }
 
 for(i=0;i<10;i++)
 {
  if(a[i]%2==0)
  {
   sumeven=sumeven+a[i];
  }
  else
  {
   sumodd=sumodd+a[i];
  }
 }
 
 printf("\nSum of even numbers is:  %d", sumeven);
 printf("\nSum of odd numbers  is: %d", sumodd);
 return 0;
}
