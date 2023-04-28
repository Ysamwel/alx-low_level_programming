#include "lists.h"
/**
 * racestruct - prints a string before main() function is executed
 */
void racestruct(void) __attribute__ ((constructor));

void racestruct(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
