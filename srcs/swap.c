#include "push_swap.h"

void    swap(t_node **head)
{
    int aux;
    t_node *aux_node; 
    
    aux_node = *head;
    aux = aux_node->value; 
    aux_node->value = aux_node->next->value;
    aux_node->next->value = aux;
}

