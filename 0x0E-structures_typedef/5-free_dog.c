#include "dog.h"

/**
 * free_dog - frees all the pointers of a dog
 * @d: the pointer to be freed.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
