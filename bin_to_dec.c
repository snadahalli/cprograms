/***********************************************************
* You can use all the programs on  www.c-program-example.com
* for personal and learning purposes. For permissions to use the
* programs for commercial purposes,
* contact info@c-program-example.com
* To find more C programs, do visit www.c-program-example.com
* and browse!
* 
*                      Happy Coding
***********************************************************/
 
 
 
#include<stdio.h>
int main(){
 long int bnum,dec=0,j=1,rem,bnum1,flag=0;
 
 printf("Enter any binary number : ");
 scanf("%ld",&bnum);
 bnum1=bnum;
 while(bnum!=0){
  rem=bnum%10;
  if((rem==0) || (rem==1))
  {
   flag=1;
   dec=dec+rem*j;
   j=j*2;
   bnum=bnum/10;
  }
  else
  {
   flag=0;
   break;
  }
 }
 if(flag==1)
 {
  printf("\nThe decimal eqivalent value of binary %ld is: %ld",bnum1,dec);
 }
 else
 {
  printf("\n\nEnter the Binary number!!!");
 
 }
 return 0;
}