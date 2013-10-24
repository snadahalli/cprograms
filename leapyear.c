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
 
/*C Program to find the given year is leap or not */
 
#include<stdio.h>
int main()
{
 int year;
 printf("\nEnter the year in yyyy format\n");
 scanf("%d",&year);
 if(((year%4==0) && (year%100!=0)) || (year%400==0))
 {
  printf("The given year  %d is a leap year.\n ",year);
 }
 else
 {
  printf("The given year  %d is NOT a leap year.\n ",year);
 }
 return 0;
}
