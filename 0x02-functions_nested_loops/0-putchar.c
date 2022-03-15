#include <stdio.h>
#include "main.h"

/**
 * main - putchar
 * _putcharprints the characters
 * Return: Always 0 (Success)
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}

int _putchar(char c)
{
	fwrite(1, &c, 1);
	return (0);
}
