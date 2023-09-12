#include "main.h"
/**
* print_alphabet - print all alphabet in lowercase
*
* Return: Always 0 (sucess)
*/
void print_alphabet(void)
{
	char low_case;

	for (low_case = 'a'; low_case <= 'z'; low_case++)
	{
	_putchar(low_case);
	}
	_putchar('\n');
}
