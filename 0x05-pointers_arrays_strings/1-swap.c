#include <stdio.h>

/**
 * swap-int - Swaps the values of two integers.
 * @a: The first interger to be swapped.
 * @b: The second interger to be sawpped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that sawps the values of two intergers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
