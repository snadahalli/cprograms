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
 
#include<stdio.h>
int main()
{
 int num,num1;
 int count=0;
 printf("Enter a two digit odd number\n");
 scanf("%d",&num);
 num1=num;
 while(num>0)
 {
  num=num/10;
  count++;
 }
 
 if((num1%2) && (count==2))
 {
  printf("\nThe square of given number is:  %d",num1*num1);
  printf("\nThe cube of given number is:  %d",num1*num1*num1);
 }
 else
 {
  printf("The number entered is not an two digit odd number\n");
 }
 
 return 0; 
}
/* Author: Sandeepa Nadahalli */