#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    printf("1: %s", str);
    ptr = cap_string(str);
    printf("2: %s", ptr);
    printf("3: %s", str);
    return (0);
}
