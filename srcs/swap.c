#include "push_swap.h"

void    swap(t_node *head)
{
    int aux;
    
    aux = head->value; 
    head->value = head->next->value;
    head->next->value = aux;
}
