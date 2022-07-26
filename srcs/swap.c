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

void double_swap(t_node **head_a, t_node **head_b)
{
    swap(head_a);
    swap(head_b);
    ft_printf("ss\n");
}

