#ifndef CHIEN_H
#define CHIEN_H

/**
 * struct chien - Dog's info
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: Longer description
 */

struct chien
{
	char *name;
	float age;
	char *owner;
};

/**
 * chien_t - typedef for struct chien
 */
typedef struct chien chien_t;

void init_chien(struct chien *a, char *name, float age, char *owner);
void print_chien(struct chien *a);
chien_t *new_chien(char *name, float age, char *owner);
void free_chien(chien_t *a);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
