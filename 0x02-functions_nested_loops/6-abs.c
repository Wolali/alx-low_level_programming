#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes absolute value of an integer
 * @i: The number to be computed
 * Return: Absolute value of the number or zero
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
