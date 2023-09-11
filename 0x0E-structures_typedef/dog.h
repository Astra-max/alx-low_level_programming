#ifndef DOG_H
#define DOG_H
/* Define the struct dog */
/**
 * struct dog - describes dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner
 */

struct dog
{
char *name;
float age;
char *owner;
};

/* Define the typedef dog_t as a new name for struct dog */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
