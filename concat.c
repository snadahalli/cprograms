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
#include<string.h>
void main()
{
 char str1[30],str2[30], str3[30];
 printf("Enter the first String\n");
 gets(str1);
 printf("\nEnter the second String\n");
 gets(str2);
 printf("\nEnter the Third String\n");
 gets(str3);
 printf("\nFirst String is:\n");
 printf("%s",str1);
 printf("\n\nSecond String is:\n");
 printf("%s",str2);
 printf("\n\nThird String is:\n");
 printf("%s",str3);
 printf("\n\nString after concatenation is:\n ");
 
 stringconcatenate(str1,str2);
 stringconcatenate(str1,str3);
 printf("%s",str1);
}
 
stringconcatenate(char str1[],char str2[])
{
 int ln1,ln2,i;
 ln1=strlen(str1);
 ln2=strlen(str2);
 
 for(i=0;i<=ln2;i++)
 {
  str1[ln1+i]=str2[i];
 }
 
}

/* Author: Sandeepa Nadahalli */