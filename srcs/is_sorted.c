#include "push_swap.h"

int is_sorted(t_node **head)
{
    t_node  *aux;
    t_node  *head_clone;

    head_clone = *head;
    if(!head_clone)
        return (0);
    aux = head_clone;
    while(aux->next != NULL)
    {
        if(aux->value > aux->next->value)
            return (0);
        aux = aux->next;
    }
    return (1);
}
