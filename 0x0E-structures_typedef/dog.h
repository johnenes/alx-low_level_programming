#ifndef _DOG_H
#define _DOG_H


/**
 * struct dog -  -do structure
 * @name: name of the dog
 * @age: dog age
 * @owner: name of the dog owner
 */
struct dog
{
char *name;
float age;
char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
