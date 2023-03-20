#ifndef _DOG_H
#define _DOG_H
/**
 * dog_t - typedef for structure dog
 */
typedef struct dog dog_t;
/**
 * struct dog - structure to define dog and its attributes
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct 'dog' that contains its name, owner and age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
