#include <stdio.h>

/**
 * main - entry point
 * Program that prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */

int main(void)
{
	char alph;

	char ALPH;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}


	for (ALPH = 'A'; ALPH <= 'Z'; ALPH++)
	{
		putchar(ALPH);
	}
	putchar('\n');
	return (0);
}
