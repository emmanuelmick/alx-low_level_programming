#ifndef DOG
#define DOG
/**
 * struct dog -  A template for creating dog objects
 * @name: First member
 * @age: second member
 * @owner: third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * init_dog - A function that initializes a variable of type struct
 * @struct dog: A pointer that points to the struct variable
 * @name: second parameter
 * @age: third parameter
 * @owner: fourth parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;
	struct dog *d = &my_dog;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}


