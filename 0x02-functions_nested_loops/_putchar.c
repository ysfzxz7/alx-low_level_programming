#include <unistd.h>
/**
 * _putchar - writes a char l to stdout
 * @l: the character to write
 *
 *Return: On Success 1.
 *	  On Error, -1.
 *
 */
int _putchar(char l)
{
	return (write(1, &l, 1));
}
