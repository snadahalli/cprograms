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
 
/*WAP to check whether a given 5 digit number is palindrome or not */
 
#include<stdio.h>
 
int main()
{
 int num,rem,i,rev=0,num1,count=0;
 printf("Enter the five digit number:\n");
 scanf("%d",&num);
 num1=num;
 while(num>0)
 {
  rem=num%10;
  rev=rem+rev*10;
  num=num/10;
  count++;
 }
 if(count==5)
 {
  if(num1==rev)
  {
   printf("The Given Number %d is Palindrome",num1);
  }
  else
  {
   printf("The Given Number %d is NOT Palindrome",num1);  
  }
 }
 else
 {
  printf("The given  %d  number is not a five digit number!",num1);
 }
 return 0;
}