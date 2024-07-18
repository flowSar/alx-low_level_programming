#ifndef ALGO_TEST
#define ALGO_TEST
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_handler(int *array, int value,  int f, int l);
void searching_in_array(int *array, int f, int l);

int jump_search(int *array, size_t size, int value);
int compare(int *array, int index, int end, int value);

int interpolation_search(int *array, size_t size, int value);

listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *get_node_index(listint_t *list, size_t index);

skiplist_t *linear_skip(skiplist_t *list, int value);
skiplist_t *start_comparing(skiplist_t *start, skiplist_t *jump_pointer, int value);

#endif
