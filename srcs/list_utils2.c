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


int get_rand_chank_position_head(t_node *head, int value)
{
	int len; 

	if(head == NULL)
		return (0);
	len = 1;
	while(head->next != NULL)
	{
        if(head->value < value)
            return(len);
		head = head->next;
		len++;
	}
	return (len);
}

int get_rand_chank_position_top(t_node *last_node, int value)
{
	int len; 

	if(last_node) == NULL)
		return (0);
	len = 1;
	while(last_node->prev != NULL)
	{
        if(last_node->value < value)
            return(len);
		last_node = last_node->prev;
		len++;
	}
	return (len);
}
