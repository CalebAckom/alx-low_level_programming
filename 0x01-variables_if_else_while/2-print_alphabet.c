#include <stdio.h>
/**
 * main - Starting point
 *
 * Description: Displays all the alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');

	return (0);
}
