#include <unistd.h>

/**
 * _putchar - Writes a single character to standard output (stdout).
 * This function serves as a low-level printing mechanism, often used
 * in place of the standard library's putchar() for project requirements.
 *
 * @c: The character to be written.
 *
 * Return: On success, 1 (the number of bytes written) is returned;
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
