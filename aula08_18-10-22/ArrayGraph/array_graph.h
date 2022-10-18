#ifndef _ARRAY_GRAPH_H
#define _ARRAY_GRAPH_H

#include <stdlib.h>

typedef struct {
    int **adjacencies;
    int number_of_vertexes;
} Array_Graph;

Array_Graph *new_graph(int number_of_vertixes);

void *delete_graph(Array_Graph *deleting_graph);

#endif
