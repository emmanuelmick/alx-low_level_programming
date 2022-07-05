#ifndef DOG
#define DOG
/**
 * init_dog - A function that initializes a variable of type struct
 * @struct dog: A pointer that points to the struct variable
 * @name: second parameter
 * @age: third parameter
 * @owner: fourth parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}


