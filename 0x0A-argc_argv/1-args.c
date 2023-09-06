#include <stdio.h>
#include"main.h"
/**
 * main - prints the number of command line arguments
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 Always
 */
int main(int argc, __attribute__((unused))char** argv)
{
	(void)argv;
	printf("%d\n", argc-1);
	return (0);
}
