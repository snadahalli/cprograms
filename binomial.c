/***********************************************************
* You can use all the programs on  www.c-program-example.com
* for personal and learning purposes. For permissions to use the
* programs for commercial purposes,
* contact info@c-program-example.com
* To find more C programs, do visit www.c-program-example.com
* and browse!
* Original url: 
* http://www.c-program-example.com/2011/10/c-program-to-find-binomial-coefficients.html
* GitHub Url: 
*                      Happy Coding
***********************************************************/
 
#include<stdio.h>
void main()
{
 int i,j,n,k,min,c[20][20]={0};
 printf("\n Enter the value of n:");
 scanf("%d",&n);
 printf("\n Enter the value of k:");
 scanf("%d",&k);
 if(n>=k)
 {
  for(i=0;i<=n;i++)
  {
   min=(i<k)?i:k;
   for(j=0;j<=min;j++)
    if(j==k || j==0)
     c[i][j]=1;
    else
     c[i][j]=c[i-1][j-1]+c[i-1][j];
  }
  for(i=0;i<=n;i++)
  {
   for(j=0;j<=n;j++)
   {
    if(i>=j)
     printf("%d\t",c[i][j]);
   }
   printf("\n");
  }
 }
 else
  printf("\n Invalid input \n Enter value n>=k \n");
}
