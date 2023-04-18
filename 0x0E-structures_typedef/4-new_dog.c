#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = 0, owner_len = 0, i;
	dog_t *new_dog;

	if (name)
		while (name[name_len])
		name_len++;

	if (owner)
		while (owner[owner_len])
		owner_len++;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (name_len + 1));
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		new_dog->name[i] = name ? name[i] : '\0';

	new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner ? owner[i] : '\0';

	new_dog->age = age;

	return (new_dog);
}

