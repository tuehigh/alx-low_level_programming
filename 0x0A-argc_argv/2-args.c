#include <stdio.h>
#include"main.h"
/**
 * main - prints its arguments
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 Always
 */
int main(int argc, char **argv)
{
	int count = 0;
	int i = 0;

	for (i = argc ; i != 0 ; i--)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}

