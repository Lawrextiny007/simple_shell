#include "shell.h"

/**
 * main - add sum of numbers
 * @num1: first integer to be added
 * @num2: second integer to be added
 *
 * Return: (0) success
 */

int main(int num1, int num2)
{
	int sum;

	num1 = 5;
	num2 = 7;
	sum = num1 + num2;

	printf("%d", sum);
	return (0);
}

