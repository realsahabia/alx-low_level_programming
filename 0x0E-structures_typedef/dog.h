#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new struct for dog info
 * @name: first element of struct
 * @age: second elememnt of struct
 * @owner: third element of sstruct.
 * Description: describe info for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
