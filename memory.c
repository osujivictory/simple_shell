#include "shell.h"

/**
 * bfree - frees the pointer and nulls the address
 * @ptr: address of the pointer to free
 *
 * Return: 1 if free, else 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
