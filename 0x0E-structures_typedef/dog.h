#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs info
 * @name: name
 * @age: Age
 * @owner: owner
 *
 * Description: long desription
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
