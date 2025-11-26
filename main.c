#include <stdio.h>
#include "main.h"

/**
 * main - Entry point for testing _printf
 *
 * Return: Always 0
 */
int main(void)
{
	int len1, len2;
	unsigned int num = 255;
	unsigned int large_num = 4294967295; /* UINT_MAX (2^32 - 1) */

	printf("--- Standard printf (Control) ---\n");
	printf("Unsigned [%%u]: %u\n", num);
	printf("Octal [%%o]: %o\n", num);
	printf("Hex lower [%%x]: %x\n", num);
	printf("Hex upper [%%X]: %X\n", num);
	printf("Large Unsigned [%%u]: %u\n", large_num);
	printf("Large Hex lower [%%x]: %x\n", large_num);
	printf("Literal Percent [%%%%]: %%\n");

	printf("\n--- Custom _printf (Test) ---\n");

	/* Test simple conversions */
	len1 = _printf("Unsigned [%%u]: %u\n", num);
	len2 = printf("Unsigned [%%u]: %u\n", num);
	printf("Lengths: _printf=%d, printf=%d\n", len1, len2);

	len1 = _printf("Octal [%%o]: %o\n", num);
	len2 = printf("Octal [%%o]: %o\n", num);
	printf("Lengths: _printf=%d, printf=%d\n", len1, len2);

	len1 = _printf("Hex lower [%%x]: %x\n", num);
	len2 = printf("Hex lower [%%x]: %x\n", num);
	printf("Lengths: _printf=%d, printf=%d\n", len1, len2);

	len1 = _printf("Hex upper [%%X]: %X\n", num);
	len2 = printf("Hex upper [%%X]: %X\n", num);
	printf("Lengths: _printf=%d, printf=%d\n", len1, len2);

	/* Test boundary value (UINT_MAX) */
	printf("\n--- Test UINT_MAX ---\n");
	len1 = _printf("Large Unsigned [%%u]: %u\n", large_num);
	len2 = printf("Large Unsigned [%%u]: %u\n", large_num);
	printf("Lengths: _printf=%d, printf=%d\n", len1, len2);

	len1 = _printf("Large Hex lower [%%x]: %x\n", large_num);
	len2 = printf("Large Hex lower [%%x]: %x\n", large_num);
	printf("Lengths: _printf=%d, printf=%d\n", len1, len2);

	/* Test percent sign */
	printf("\n--- Test Percent Sign ---\n");
	len1 = _printf("Literal Percent [%%%%]: %%\n");
	len2 = printf("Literal Percent [%%%%]: %%\n");
	printf("Lengths: _printf=%d, printf=%d\n", len1, len2);

	return (0);
}
