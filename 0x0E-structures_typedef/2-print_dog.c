#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print record of dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: nil\n");
		else
			printf("Name: %s\n", d->name);
<<<<<<< HEAD
		if (d->age == NULL)
=======
		if (d->age < 0 )
>>>>>>> d5a42c30e705256a735cb98d082a027298983ffe
			printf("Age: nil\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}
<<<<<<< HEAD
	else
		return;
=======
>>>>>>> d5a42c30e705256a735cb98d082a027298983ffe
}