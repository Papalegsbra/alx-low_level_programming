#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Name to initialize
 * @age: Age to initialize
 * @owner: Owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to a struct dog to print
 */
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees memory allocated for a struct dog
 * @d: Pointer to struct dog to free
 */
void free_dog(dog_t *d);

#endif
