#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet letters in lowercase then in upper case
 *
 * Return: Always 0 (success)
 *
*/

int main(void)
{
	char ch = 'a';
	char ch = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints A - Z*/
	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}