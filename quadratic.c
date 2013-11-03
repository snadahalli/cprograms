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
#include<math.h>
 
main()
{
 int a,b,c;
 float disc,r1,r2;
 for(;;)
 {
  printf("\nEnter the non Zero co-efficients a, b,c\n");
  scanf("%d%d%d",&a,&b,&c);
  if((a==0) || (b==0) || (c==0))
  {
   printf("\nPlease enter non zero co-efficients \n");
  }else{
   disc=((b*b)-(4*a*c));
   if(disc>0)
   {
    printf("Roots are Real:\n");
    r1=(-b-(sqrt(disc)))/(2.0*a);
    r2=(-b+(sqrt(disc)))/(2.0*a);
    printf("Roots are:%f and %f  \n", r1,r2);
 
   } 
   else if(disc<0)
   {
    printf("Roots are Imaginary:\n");
    r1=-b/(2.0*a);
 
    printf("First root: %lf +%fi \n", r1,sqrt(-disc)/(2.0*a));
    printf("Second root:%lf -%lfi\n", r1,sqrt(-disc)/(2.0*a));
   }
   else
   {
    printf("Roots are Equal\n");
    r1= -b/(2.0*a);
    printf("Equal; roots are:%f and %f  \n", r1,r1);
   }
   return 0;
  }
 }
}