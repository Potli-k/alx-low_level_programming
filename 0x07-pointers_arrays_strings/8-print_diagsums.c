#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 *
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0, step1, step2;

	for (i = 0; i <= (size - 1); i++)
	{
		step1 =  (size + 1) * i;
		sum1 = sum1 + *(a + step1);
	}

	for (j = 1; j <= size; j++)
	{
		step2 = (size - 1) * j;
		sum2 = sum2 + *(a + step2);
	}
	printf("%d, %d\n", sum1, sum2);
}
