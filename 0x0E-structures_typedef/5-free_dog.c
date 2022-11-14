#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free the dog
 * @d: The dog to be freed ;)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
