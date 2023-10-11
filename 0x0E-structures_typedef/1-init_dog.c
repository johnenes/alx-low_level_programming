/**
 * init_dog - initializing a dog
 * @d:  pointer to dog
 * @name: name of dog
 * @owner: name of owner
 * @age: age of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d !=  NULL)
{
d->name =  name;
d->age  =  age;
d->owner = owner;

}





}
