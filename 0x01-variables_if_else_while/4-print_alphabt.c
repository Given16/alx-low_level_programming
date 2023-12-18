#include <stdio.h>

/**
 * main - entry point
 * Program that prints the alphabet in lowercase except p and e
 * Return (0)
 */

int main(void)
{
	char alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'p' && alphabet != 'e')
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
