#ifndef STRUCT_FILE
#define STRUCT_FILE

/**
 * struct dog - Structure for dog
 * @name: Name of dog
 * @age: Dog's age
 * @owner: Owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
