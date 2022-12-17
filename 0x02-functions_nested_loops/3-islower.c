#include "main.h"
/**
 * _islower-ckeck for lower case charater
 * @c: the charater to be check
 * Return: 1 if the letter is lowcase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a'  && c <= 'z')
		return (1);
	else
		return (0);
}
