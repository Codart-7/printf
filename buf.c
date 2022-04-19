#include <unistd.h>

/**
 * buf - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and the errno is set appropriately.
 */
int buf(char c)
{
	return (write(1, &c, 1));
}
