#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * pointed to by 's' with the constant byte 'b'
 * A pointer to the memory area to be filled 's'
 * The character to fill the memory area with 'b'
 * The number of bytes to be filled 'n'
 *
 * Return: A pointer to the filled memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

i	return (memory);
}
