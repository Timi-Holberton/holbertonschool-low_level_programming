#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Structure représentant un chien
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (nombre flottant)
 * @owner: Propriétaire du chien (chaîne de caractères)
 * Cette structure permet de stocker les informations
 * relatives à un chien, notamment son nom, son âge et
 * son propriétaire.
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

#endif /* DOG_H */
