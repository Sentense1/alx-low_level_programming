#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int num3;
	int i;

	printf("%lu, %lu, ", num1, num2);

	for (i = 0; i <= 47; i++)
	{
		num3 = num1 + num2;
		if (num3 < 20365011074)
			printf("%lu, ", num3);
		num1 = num2;
		num2 = num3;
	}
	printf("20365011074\n");

	return (0);
}
