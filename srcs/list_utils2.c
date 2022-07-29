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
int get_min_node(t_node *head)
{
    if(head == NULL){
        return (0);
    }
    int min = head->value;
    while(head != NULL){
        if(head->value < min){
            min = head->value;
        }
        head = head->next;
    }
    return min;
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
	while(head != NULL)
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
	while(last_node != NULL)
	{
        if(last_node->value < value_last && last_node->value >= value_first)
            return(len);
		len++;
		last_node = last_node->prev;
	}
	return (-10);
}

int is_there_chunk(t_node *head, int value_last, int value_first)
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
            return(1);
		last_node = last_node->prev;
		len++;
	}
	return (0);
}


t_node *clone_list(t_node *head)
{
	t_node *cloned = malloc(list_size(head) * sizeof(t_node*));
	t_node *cloned_head = cloned;
	cloned->value = head->value;
	head = head->next;
	while(head != NULL)
	{
		append_node(&cloned, new_node(head->value));
		head = head->next;
	}
	return (cloned_head);
}