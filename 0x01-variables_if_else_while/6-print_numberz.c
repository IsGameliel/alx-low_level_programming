#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints out numbers in base 10
 * @void: Empty parameters list for main.
 *
 * Description: Prints numbers 0-9
 *
 * Return: 0 for success
*/
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
