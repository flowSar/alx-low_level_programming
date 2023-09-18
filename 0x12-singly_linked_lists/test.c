#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

typedef struct node
{
    char *data;
    struct node *next;
}Node;

void print(Node **head)
{
    Node *tmp, *tmp_head;
    if ((*head) == NULL)
        printf("%s\n", "lis is empty");
    else if ((*head))
    {
        tmp_head = (*head);
        while (tmp_head)
        {
            printf("%s\n", tmp_head->data);
            tmp = tmp_head;
            tmp_head = tmp->next;
        }
    }

} 
Node *add_node_e(Node **head, char *str)
{
    Node *tmp, *tmp_head;
    if ((*head) == NULL)
    {
        (*head) = malloc(sizeof(Node));
        (*head)->data = str;
        (*head)->next = NULL;
    }
    else if ((*head))
    {
        tmp_head = (*head);
        tmp = tmp_head->next;
        while(tmp)
        {
            tmp_head = tmp;
            tmp = tmp_head->next;
        }
        Node *new = malloc(sizeof(Node));
        new->data = str;
        new->next = NULL;
        tmp_head->next = new;
    }
}
void add_node_s(Node **head, char *str)
{
    Node *tmp, *tmp_head;
    if ((*head) == NULL)
    {
        (*head) = malloc(sizeof(Node));
        (*head)->data = str;
        (*head)->next = NULL;
    }
    else if ((*head))
    {
        tmp_head = (*head);
        (*head) = malloc(sizeof(Node));
        (*head)->data = str;
        (*head)->next = tmp_head;
    }

}
void add(Node **head, char *position, char *str)
{
    if (position == "start")
        {
            add_node_s(head, str);
        }else if (position = "end")
        {
            add_node_e(head, str);
        }
}
int main(void)
{
    Node *nodes;
    nodes = NULL;

    print(&nodes);
    add(&nodes, "end", "brahim");
    add(&nodes, "end", "khalid");
    add(&nodes, "end", "yassine");
    add(&nodes, "end", "mohammed");
    add(&nodes, "start", "aliali");
    add(&nodes, "start", "start");
    add(&nodes, "end", "end of the ending");
    add(&nodes, "start", "start of the staring");
    print(&nodes);

    return (0);
}