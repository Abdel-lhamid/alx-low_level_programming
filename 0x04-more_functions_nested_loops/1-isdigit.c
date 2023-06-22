#include "main.h"

/**
 * _isdigit - checks if 0<=c<10
 * @c: the argument we want to test
 * Retun: 1 if true else 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return(1);
	return(0);
}
