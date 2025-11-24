#include "main.h"
#include <stdarg.h>

int print_string(char *s)

{
	if (s == NULL)
		write(1, "Error\n", 7);
	exit(1);
}
