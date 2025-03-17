#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new doggo.
 * @name: name of dog.
 * @age: age of the dog.
 * @owner: owner of the doggy.
 * Return: Pointer to the new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	dog_t *new;

	if (name == NULL || owner == NULL)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	new->name = malloc(i * sizeof(char));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		new->name[k] = name[k];
	new->age = age;
	for (j = 0; owner[j]; j++)
		;
	j++;
	new->owner = malloc(j * sizeof(char));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		new->owner[k] = owner[k];
	return (new);
}
