#include "main.h"
#include <unistd>
/**
 * _putchar - write the character c to stdout
 * @c: the charater to print
 *
 * Return: 0
 * on error, -1 is Return, and erron is set appropriately
 */
int _putchar(char)
{
	return (write(1, &c, 1));
}	
