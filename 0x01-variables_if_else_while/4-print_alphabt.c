#include <stdio.h>

/**
 * main - entry point
 * Program that prints the alphabet in lowercase except p and e
 * Return (0)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'p' && alph != 'e')
		{
			putchar(alph);
		}
	}
	putchar('\n');
	return(0);
}
