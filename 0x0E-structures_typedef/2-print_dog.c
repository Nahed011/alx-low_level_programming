#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints adog
 * @d: print the dog
 * Return: void
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
