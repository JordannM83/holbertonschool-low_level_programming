#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog structure,
 * or NULL if memory allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(name_len + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		my_dog->name[i] = name[i];

	my_dog->owner = malloc(owner_len + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
		my_dog->owner[i] = owner[i];

	my_dog->age = age;

	return (my_dog);
}
