#include <stdio.h>
 
void main()
{
 int A[10][10];
 int i, j, R, C, flag =1;
 
 printf("Enter the order of the matrix A\n");
 scanf("%d %d", &R, &C);
 
 printf("Enter the elements of matrix A\n");
 for(i=0; i<R; i++)
 {
  for(j=0; j<C; j++)
  {
   scanf("%d",&A[i][j]);
  }
 }
 printf("MATRIX A is\n");
 for(i=0; i<R; i++)
 {
  for(j=0; j<C; j++)
  {
   printf("%3d",A[i][j]);
  }
  printf("\n");
 }
 
 /* Check for unit (or identity) matrix */
 
 for(i=0; i<R; i++)
 {
  for(j=0; j<C; j++) {
   if((A[i][i] != 1) || (( i != j) && (A[i][j] != 0)))
   {
    flag = 0;
    break;
   }
  }
 }
 
 if(flag == 1 )
  printf("It is identity matrix\n");
 else
  printf("It is not a identity matrix\n");
}