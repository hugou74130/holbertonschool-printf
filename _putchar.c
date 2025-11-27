#include <unistd.h>
#include "main.h"

static char buffer[BUFF_SIZE];
static int buffer_index;

int _putchar(char c)
{
	buffer[buffer_index] = c;
	buffer_index++;
	if (buffer_index == BUFF_SIZE)
	{
		_flush_buffer();
	}

	return (1);
}

void _flush_buffer(void)
{
	write(1, buffer, buffer_index);

	buffer_index = 0;
}
