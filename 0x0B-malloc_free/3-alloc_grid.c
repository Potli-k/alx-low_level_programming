#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: point to two dim. array
 */
int **alloc_grid(int width, int height)
{
  int i, j;
  int *ptr = NULL;

  if (width <= 0 || height <= 0)
    return (NULL);

  ptr = (int *)malloc(width * height * sizeof(int));

  for (i = 0; i < width * height; i++)
    {
    }

  return (ptr);
}
