#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Always 0
 */

void print_alphabet(void)
{
	char i;
	/*commet*/
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
