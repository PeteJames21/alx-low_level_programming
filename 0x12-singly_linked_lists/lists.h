#ifndef LISTS_H
#define LISTS_H

/**
* struct list_t - a singly linked list
* @str: a string
* @len: number of elements in the string
* @next: pointer to the next node in the list
*/
typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);


#endif
