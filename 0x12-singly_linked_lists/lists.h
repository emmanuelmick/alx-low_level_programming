#ifndef LIST_H
#define LIST_H
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
int _putchar(char c);
size_t print_list(const list_t *h);

