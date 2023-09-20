#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			i++;
		}

		else if (str[i] == ' ' ||
		    str[i] == '\t' ||
		    str[i] == '\n' ||
		    str[i] == ',' ||
		    str[i] == ';' ||
		    str[i] == '.' ||
		    str[i] == '!' ||
		    str[i] == '?' ||
		    str[i] == '"' ||
		    str[i] == '(' ||
		    str[i] == ')' ||
		    str[i] == '{' ||
		    str[i] == '}' ||
		    )
			i++;
	}
	return (str);
}
