#ifndef LIST_H
#define LIST_H

#include <stldlib.h>
#include <stdio.h>
#include <string.h>

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

size_t print_list(const list_t *h);

#endif