#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 256

typedef int (* pat_handler)(const char *buf, int len);

struct _PAT_NODE
{
	char name[NAME_LEN];
	int id;
	pat_handler input;
	pat_handler *output_list;

}pat_node, *ppat_node;