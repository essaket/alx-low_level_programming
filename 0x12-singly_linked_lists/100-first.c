#include "lists.h"

void hicham(void) __attribute__ ((constructor));

/**
 * hicham - funtion that prints a string before the main function is executed
 */

void hicham(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
