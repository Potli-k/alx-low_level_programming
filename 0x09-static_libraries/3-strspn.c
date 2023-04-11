#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r, n;

	for (n = 0; *(s + n); n++)
	{
		for (r = 0; *(accept + r); r++)
		{
			if (*(s + n) == *(accept + r))
				break;
		}
	if (*(accept + r) == '\0')
		break;
	}
	return (n);
}
