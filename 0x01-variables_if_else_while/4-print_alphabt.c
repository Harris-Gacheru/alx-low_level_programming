#include <stdio.h>

/**
 * main - print lowercase a-z except 'q' and 'e'
 * Retur: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((aplha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
