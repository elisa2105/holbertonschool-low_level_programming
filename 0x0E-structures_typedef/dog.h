#ifndef HOLB
#define HOLB
/**
 * struct dog - prints buffer in hexa
 * @name: dog's name
 * @age: age of the dog
 * @owner: dog's owner
 * Description define a dog
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
