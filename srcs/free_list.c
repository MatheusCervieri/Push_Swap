#include "push_swap.h"

void free_list(t_node **head)
{
    t_node  *aux;
    t_node  *head_clone;

    head_clone = *head;
    if (head_clone == NULL)
        return ;
    while (head_clone->next)
    {
        aux = head_clone->next;
        free(head_clone);
        head_clone = aux;
    }
    free(head_clone);
}

void exit_program(t_node **head) 
{   
    free_list(head);
    ft_printf("Error\n");
    exit(0);
}