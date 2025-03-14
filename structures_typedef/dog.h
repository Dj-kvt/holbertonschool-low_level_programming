#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure représentan
 * @name: Nom du chien (chaîne de caractres)
 * @age: Âge du chien (nombre flottant)
 * @owner: Nom du propriétaire (chaîne de caractèr
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif

