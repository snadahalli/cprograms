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
 
/*C program to find the given character is Vowel or Consonant */
 
#include<stdio.h>
int main()
{
 char ch;
 printf("Enter a single character:\n");
 scanf("%c",&ch);
 if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
 {
  printf("The given Character '%c' is a Vowel\n ",ch);
 }
 else
 {
  printf("The given Character '%c' is a Consonant\n ",ch);
 }

return 0;
}
