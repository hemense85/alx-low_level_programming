#include <stdio.h>
/**
 * main - print  numbers of base 16
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++);

	putchar('\n');
	return (0);
}
