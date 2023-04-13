#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 *
 * Return: Pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;

if (size == 0)
return (NULL);

char *s = (char *)malloc(size * sizeof(char));

for (i = 0; i < size; i++)
s[i] = c;

return (s);
}
