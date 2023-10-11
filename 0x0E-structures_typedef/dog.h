#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: string
 * @age: integer
 * @owner: string
 *
 * Description: alone Dog struc in a big kitty world
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
