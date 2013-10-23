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

/* Write a program to convert a given decimal numbers into its binary equivalent . */


#include<stdio.h>
 int main()
  {
    int num,i=0,binary=0,num1, biny[30],counter=0;
 printf("Enter the Decimal  number:\n");
 scanf("%d",&num);
 num1=num;
  do
   {
    binary=num%2;
    biny[i]=binary;
    num=num/2;
    i++;
    counter++;
   } while(num>0);
  
  printf("\nThe given decimal %d number binary equalant is :\n",num1);
  counter--;
 while(counter>=0){
   printf("%d" ,biny[counter]);
      counter--;
 }
 
 return 0;
 }
