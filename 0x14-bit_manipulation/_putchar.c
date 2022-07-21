#include <unistd.h>
/**
 * _putchar - writes char
 * @c: The char
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
