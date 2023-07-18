#include "dog.h"

/**
 * int_dog - function that initialize a variable of type struct dog
 * @d: dog to int
 * @name: Poppy
 * @age: 3.5
 * @owner: Bob
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
