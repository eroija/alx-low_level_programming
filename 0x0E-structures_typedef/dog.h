#ifndef STRTYP
#define STRTYP

/**
 * struct dog - information about the dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_1;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_1 *live_dog(char *name, float age, char *owner);
void free_dog(dog_1 *d);

#endif /*STRTYP*/
