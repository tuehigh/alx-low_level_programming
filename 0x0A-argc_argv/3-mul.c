#include <stdio.h>
#include"main.h"
/**
 * main - multiplies two integers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if Successful and 1 if Failure
 */
int main(int argc, char **argv)
{
	int sum;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
}
