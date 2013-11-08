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
 int i,a[20],sum=0,b[20],counter=0,num=100;
 printf("The numbers between 100 and 200 which are divisible by 7 are:\n");
 for(i=100;i<=200;i++)
 {
  if(i%7==0)
  {
   sum=sum+i;
   a[i]=i;
   printf("\n");
   printf(" %d",i);
  }
 }
 printf("\nThe sum of numbers divisible by seven is %d", sum);
 return 0;
}   