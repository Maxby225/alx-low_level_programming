#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more hearders goes there */
/**
 * main - Entry point 
 * 
 * return: Always 0 (Success)
 *
 */
/* betty style doc for funtion main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        if (n > 0)
         	printf("%d is positive\n", n); 
	if (n == 0)                              
                printf("%d is zero\n", n);     
        if (n < 0)
         	printf("%d is neagtive\n", n);
	return (0); 
}
