#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - structure to define a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct my_dog - Structure representing a dog
 * * @name: Name of the dog
 * * @age: Age of the dog
 * * @owner: Owner of the dog
 * dog_t - typedef for struct dog
 * Description: No description found for struct my_dog.
 */

typedef struct my_dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif
