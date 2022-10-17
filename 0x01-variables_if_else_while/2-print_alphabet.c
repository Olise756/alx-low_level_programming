#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char low;
	/*commey*/
	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	/*space for clea code*/
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar(low);
	return (0);
}
