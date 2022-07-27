#include "push_swap.h"

void push(t_node **receiver, t_node **giver, char c)
{
    t_node  *aux_node_r;
    t_node  *aux_node_g;
    t_node  *aux_insert; 

    aux_node_r = *receiver;
    aux_node_g = *giver;  
    if(!aux_node_g)
        return ;
    aux_insert = aux_node_g;
    aux_node_g = aux_node_g->next;
    if(aux_node_g)
        aux_node_g->prev = NULL;
    insert_beggining(&aux_node_r, aux_insert);
    ft_printf("p%c", c);
}
