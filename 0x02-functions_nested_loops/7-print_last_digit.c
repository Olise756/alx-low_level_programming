#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The character to be checked
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int last;
	/*r*/
	last = n % 10;
	/*u*/
	if (last < 0)
	{
		last = last * -1;
		/*comm*/
	}
	_putchar(last + '0');
	return (last);
}
