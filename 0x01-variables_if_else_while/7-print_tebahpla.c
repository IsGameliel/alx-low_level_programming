#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints out the alphabet
 * @void: Empty parameter list for main.
 *
 * Description: Prints out alphabet in there reverse order
 * Can only use putchar
 *
 * Return: 0 for success
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
