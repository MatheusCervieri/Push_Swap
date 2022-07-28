#include "push_swap.h"

int get_max_node(t_node *head)
{
    if(head == NULL){
        return (0);
    }
    int max = head->value;
    while(head != NULL){
        if(head->value > max){
            max = head->value;
        }
        head = head->next;
    }
    return max;
}

int get_node_position(t_node *head, int value)
{
	int len; 

	if(head == NULL)
		return (0);
	len = 1;
	while(head->next != NULL)
	{
        if(head->value == value)
            return(len);
		head = head->next;
		len++;
	}
	return (len);
}


int get_rand_chunk_position_head(t_node *head, int value_last, int value_first)
{
	int len; 

	if(head == NULL)
		return (0);
	len = 1;
	while(head->next != NULL)
	{
        if(head->value < value_last && head->value >= value_first)
            return(len);
		head = head->next;
		len++;
	}
	return (-10);
}

int get_rand_chunk_position_top(t_node *head, int value_last, int value_first)
{
	int len; 
    t_node  *last_node;
    
    last_node = get_last_node(head);
	if(head == NULL)
		return (0);
	len = 1;
	while(last_node->prev != NULL)
	{
        if(last_node->value < value_last && last_node->value >= value_first)
            return(len);
		last_node = last_node->prev;
		len++;
	}
	return (-10);
}

