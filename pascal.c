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

/*
* Original URL: http://www.c-program-example.com/2011/10/c-program-to-print-pascal-triangle.html
*/

/*
* GitHub URL: https://github.com/snadahalli/cprograms/blob/master/pascal.c
*/

#include"stdio.h"
int main() 
{
    int r, i, j, b, num;
    printf("How many lines do you want?");
    scanf("%d", &r);
    b = r;
    for(i=0;i<r;i++) 
    {
        num = 1;
        for(j=0;j<=i;j++) 
        {
            printf("%d", num);
            num = (num * (i-j)/(j+1));
        }
        printf("\n");
    }
}