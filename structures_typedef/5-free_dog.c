#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog structure
 * @d: pointer to the dog structure to free
 * * Description: This function frees the memory allocated for a dog structure,
 * including its name and owner strings.
 * If the pointer is NULL, it does nothing.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	return (NULL);
	free(d->name);
	free(d->owner);
	free(d);
}
