#include <unistd.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @c: The character to be checked
 * Return: Always 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		/*comm*/
		abs_val = c * -1;
		/*rrr*/
		return (abs_val);
	}
}
