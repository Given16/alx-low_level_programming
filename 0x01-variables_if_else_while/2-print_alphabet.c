#include <stdio.h>

/**
 * main - entry point
 * Program that prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);

}
