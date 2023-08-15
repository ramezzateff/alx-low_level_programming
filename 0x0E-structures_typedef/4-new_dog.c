#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int jj = 0;

	while (s[jj] != '\0')
		jj++;

	return (jj);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @s1: pointer to the buffer in which we copy the string
 * @s2: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *s1, char *s2)
{
	int len1, i;

	len1 = _strlen(s1);

	for (i = 0; s1[i] < len1; i++)
		s2[i] = s1[i];
	s2[len1] = '\0';
	return (s2);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *dog;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(name, dog->name);
	_strcpy(owner, dog->owner);
	dog->age = age;
	return (dog);
}
