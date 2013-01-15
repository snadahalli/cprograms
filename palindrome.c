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
 
#include <stdio.h>
#include <string.h>
 
void main()
{
 char string[25], revString[25]={'\0'};
 int  i,length = 0, flag = 0;
 
 fflush(stdin);
 
 printf("Enter a string\n");
 gets(string);
 
 for (i=0; string[i] != '\0'; i++) /*keep going through each */
 {                                 /*character of the string */
  length++;                     /*till its end */
 }
 
 for (i=length-1; i >= 0 ; i--)
 {
  revString[length-i-1] = string[i];
 }
 
 /*Compare the input string and its reverse. If both are equal
   then the input string is palindrome. Otherwise it is
   not a palindrome */
 
 for (i=0; i < length ; i++)
 {
  if (revString[i] == string[i])
   flag = 1;
  else
   flag = 0;
 }
 
 if (flag == 1)
  printf ("%s is a palindrome\n", string);
 else
  printf("%s is not a palindrome\n", string);
 
}   /*End of main()*/