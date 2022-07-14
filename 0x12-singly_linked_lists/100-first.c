#include <stdio.h>

/**
 * pre_print - print string before main function executed
 */

void __attribute__((constructor)) pre_print(void);

void prie_print(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
