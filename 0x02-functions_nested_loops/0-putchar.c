#include <stdio.h>
/**
 * main - print _putchar
 * by clinton
 * Return: 0(success)
 */
#define MAXSTRING 80
int main( void ){
    char message[] = "this is a test";
    
    for (int count = 0; count < MAXSTRING; count++)
    {
        if (message[count] == '\0')
        {
            putchar('\n');
            break;
        }
        else
            putchar(message[count]);
    }
    return 0;
}
