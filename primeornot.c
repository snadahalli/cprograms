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
main() 
 
{ 
 int a,c=0,i,num; 
 printf("Enter the number to be checked\n"); 
 scanf("%d",&num); 
 for(i=1;i<num;i++) 
 {  
  a=num%i; 
  if(a==0) 
  { 
   c=c+1; 
  } 
 } 
 
 if (c==1) 
 {
  printf("The given number %d is a prime\n", num); 
 } 
 else
 {
  printf("The given number %d is not prime\n", num); 
 } 
 return 0;   
 
}
