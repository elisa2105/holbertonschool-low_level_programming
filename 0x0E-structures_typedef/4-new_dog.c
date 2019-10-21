#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - initialize a variable of type struct dog
 * @name: dog´s name
 * @age: dog´s age
 * @owner: dog´s owner
 * Return: a dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
int sizeA = 0;
int sizeB = 0;
int i = 0;
dog_t *dog;
while (name[sizeA++])
continue;
while (owner[sizeB++])
continue;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc((sizeA + 1) * sizeof(char));
if (dog->name == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (; i < sizeA; i++)
dog->name[i] = name[i];
dog->age = age;
dog->owner = malloc((sizeB + 1) * sizeof(char));
if (dog->owner == NULL)
{
free(dog->owner);
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < sizeB; i++)
dog->owner[i] = owner[i];
return (dog);
}
