/***********************************************************
 * You can use all the programs on  www.c-program-example.com
 * for personal and learning purposes. For permissions to use the
 * programs for commercial purposes,
 * contact info@c-program-example.com
 * To find more C programs, do visit www.c-program-example.com
 * and browse!
 * 
 *                      Happy Coding
 ***********************************************************/


/*
 * print 		1
 * 			   232
 * 		      34543
 * 			 4567654
 * 		    567898765 
 */

#include<stdio.h>	

void display(int start, char *str){
	int i,j;
	
	for(i=start; i<=(start+start); i++)
		printf("%c",str[i]);
	for(j=i-2;j>=start;j--)
		printf("%c",str[j]);
}

main(){
	char str[]="123456789";
	int i, j;
	for(i=0;i<5;i++){
		display(i, str);
		printf("\n");
	}
}

/* https://github.com/snadahalli/cprograms */