#include "main.h"

/**
 *_isalpha - Return 1 if c is a letter. lowercase or uppercase
 * @c:unsigned int value to be compared with ASCII value
 * Return: 1 if its alphabet otherwise 0
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
