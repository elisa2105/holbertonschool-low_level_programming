#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - initialize a variable of type struct dog
 * @d: a struct dog
*/

void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
