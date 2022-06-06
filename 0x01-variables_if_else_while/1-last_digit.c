#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 *  main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	if (b < 5)
	{
		printf("the last digit of %d is %d the string and is greater than 5", n, b);
	}
	else if (b == 0)
	{
		printf("the last digit of %d is %d the string and is 0", n, b);
	}
	else if (b < 6 && n != 0)
	{
		printf("the last digit of %d is %d the string and is less than 6", n, b);
	}
	return (0);
}
