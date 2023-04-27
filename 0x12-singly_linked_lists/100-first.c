#include "lists.h"

/**
 * startupfun - Prints a startup message before the main function is executed.
 *
 * Return: Nothing.
 */
void startupfun(void) __attribute__ ((constructor));

void startupfun(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
