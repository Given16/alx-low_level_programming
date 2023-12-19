#include <stdio.h>
/**
 * main - entry point
 * Program that prints all the numbers of base 16 in lowercase.
 * Return: (0) Success
 */
int main(void)
{
	char num;

	char alph;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
