#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to be capitalized
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int s_count;

	s_count = 0;
	while (s[s_count] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[s_count] == ' ' || s[s_count] == '\t' || s[s_count] == '\n'
		    || s[s_count] == ',' || s[s_count] == ';' || s[s_count] == '.'
		    || s[s_count] == '!' || s[s_count] == '?' || s[s_count] == '"'
		    || s[s_count] == '(' || s[s_count] == ')' || s[s_count] == '{'
		    || s[s_count] == '}')
		{
			if (s[s_count + 1] >= 97 && s[s_count + 1] <= 122)
			{
				s[s_count + 1] = s[s_count + 1] - 32;
			}
		}
		s_count++;
	}
	return (s);

}
