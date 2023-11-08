#ifndef dog_h
#define dog_h

/**
 * struct dog - the dog
 * @name: te name
 * @age: age
 * @owner: possession
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *ownwer);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

