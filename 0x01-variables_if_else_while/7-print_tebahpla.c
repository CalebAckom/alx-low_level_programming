#include <stdio.h>
/**
 * main - Starting point
 *
 * Description: Displays lowercase alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
