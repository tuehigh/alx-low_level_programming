#include<stdio.h>
#include <stdlib.h>
/**
 * main - prints its own name
 *
 * Return: 0 Always
 */
int main(__attribute__((unused))int argc, char **argv)
{
        printf("%s\n", argv[0]);
        exit(EXIT_SUCCESS);
}
