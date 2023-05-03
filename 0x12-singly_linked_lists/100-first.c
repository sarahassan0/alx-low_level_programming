#include<stdio.h>

/**
 * first - Apply the constructor attribute to first() so that it
 * is executed before main()
 */

void first(void) __attribute__((constructor));
/**
 * first - execute before main
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
