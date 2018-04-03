/***********************************************************
* You can use all the programs on  www.c-program-example.com
* for personal and learning purposes. For permissions to use the
* programs for commercial purposes,
* contact info@c-program-example.com
* To find more C programs, do visit www.c-program-example.com
* and browse!
* 
* 
*                      Happy Coding
***********************************************************/


#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

int inc[50],w[50],sum,n;

int promising(int i,int wt,int total)
{
	return(((wt+total)>=sum)&&((wt==sum)||(wt+w[i+1]<=sum)));
}


/*
* You can find this program on GitHub 
* https://github.com/snadahalli/cprograms/blob/master/subsets.c
*/


void main()
{
	int i,j,n,temp,total=0;
	
 	printf("How many numbers do you have?\n->");
 	scanf("%d",&n);
 	
 	printf("\nEnter %d numbers to the set:\n->", n);
 	
	for(i=0;i<n;i++)
 	{
  		scanf("%d",&w[i]);
  		total+=w[i];
 	}
 
 	printf("\nWhat should be the sum value?\n->");
 	scanf("%d",&sum);
 
 	for(i=0;i<=n;i++)
  		for(j=0;j<n-1;j++)
  			if(w[j]>w[j+1])
   			{
    			temp=w[j];
    			w[j]=w[j+1];
    			w[j+1]=temp;
   			}
   			
   			
	printf("\nThe given %d numbers in ascending order:\n",n);

 
 	for(i=0;i<n;i++)
  		printf("%d\t",w[i]);
 
 	if((total<sum))
  		printf("\nSubset construction is not possible");
 	
	else
 	{
  		for(i=0;i<n;i++)
   			inc[i]=0;
  		printf("\n\n\nThe solution using backtracking is:\n");
  		sumset(-1,0,total);
 	}
 
 	getch();
}


void sumset(int i,int wt,int total)
{
	int j;
 	if(promising(i,wt,total))
 	{
  		if(wt==sum)
  		{
   			printf("\n{");
   			for(j=0;j<=i;j++)
    			if(inc[j])
    				printf(" %d",w[j]);
   			printf(" }\n");
  		}
  		
		else
  		{
   			inc[i+1]=TRUE;
   			sumset(i+1,wt+w[i+1],total-w[i+1]);
   			inc[i+1]=FALSE;
   			sumset(i+1,wt,total-w[i+1]);
  		}
 	}
}

