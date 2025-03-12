#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Entry point
 *@name : nom
 *@age : age
 *@owner : propriétaire
 * Return: Always 0 (Success)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

struct dog_t
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
