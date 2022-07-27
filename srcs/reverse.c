#include "push_swap.h"

//doing.
void reverse(t_node **head)
{
    t_node  *aux;
    t_node  *head_clone;

    head_clone = *head;
    if(head_clone == NULL || head_clone->next == NULL)
        return ;
    aux = get_last_node(*head);
    if(aux->prev)
        (aux->prev)->next = NULL;
    insert_beggining(head, aux);
    ft_printf("Reverse \n");
}