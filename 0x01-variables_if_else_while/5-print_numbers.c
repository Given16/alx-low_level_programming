#include <stdio.h>

/**
 * main - entry point
 * Program that prints all single digit numbers of base 10 starting from 0
 * Return:(0)
 */

int main(void)
{
	int num;
	
	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
		fflush(stdout);
	}
	return (0);
}

