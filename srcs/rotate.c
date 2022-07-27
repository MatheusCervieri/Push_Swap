#include "push_swap.h"

void rotate(t_node **head)
{
    t_node  *aux;
    t_node  *head_clone;

    head_clone = *head;
    if(head_clone == NULL || head_clone->next == NULL)
        return ;
    aux = head_clone;
    *head = head_clone->next;
    if(head_clone)
        head_clone->prev = NULL;
    append_node(&head_clone, aux);
    ft_printf("ROTATE \n");
}