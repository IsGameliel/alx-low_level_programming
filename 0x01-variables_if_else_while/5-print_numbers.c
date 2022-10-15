#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - This prints out the base 10
 * @void: Empty parameter list for main.
 *
 * Description: Prints numbers 0-9
 *
 * Return: prints 0 when its successful
*/
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
