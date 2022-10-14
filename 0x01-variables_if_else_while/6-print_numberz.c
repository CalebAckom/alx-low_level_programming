#include <stdio.h>
/**
 * main - Starting point
 *
 * Description: Displays numbers in  different style
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
