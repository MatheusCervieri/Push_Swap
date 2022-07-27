#include "push_swap.h"

void rotate(t_node **head, char c)
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
    if(c != 0)
        ft_printf("r%c\n", c);
}

void double_rotate(t_node **head_a, t_node **head_b)
{
    rotate(head_a, 0);
    rotate(head_b, 0);
    ft_printf("rr\n");
}