#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char c;
	/*coomrt*/
	int i = 0;
	/*commet*/
	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(i);
		}
		_putchar('\n');
		i++;
	}
}
