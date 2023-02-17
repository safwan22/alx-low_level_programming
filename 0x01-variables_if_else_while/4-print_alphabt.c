#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char w = 'a';

	while (w <= 'z')
	{
		if (w != 'e' && w != 'q')
		{
			putchar(w);
		}
		w++;
	}
	putchar('\n');
	return (0);
}
