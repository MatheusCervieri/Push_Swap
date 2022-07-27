#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node *new;
	new = malloc(sizeof(t_node));
	new->value = value;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_node *get_last_node(t_node *first)
{
	t_node	*temp;

	if(first == NULL)
		return (NULL);
	temp = first; 
	while(temp->next != NULL)
		temp = temp->next;
	return (temp);
}

void append_node(t_node **first, t_node *new)
{
	t_node *last;

	if(*first == NULL)
	{
		*first = new;
		new->prev = NULL;
		new->next = NULL;
		return ;
	}
	else
	{
		last = get_last_node(*first);
		last->next = new; 
		new->prev = last;
		new->next = NULL;
	}
	
}

t_node	*get_first_node(t_node *head)
{
	t_node	*temp;

	if(head == NULL)
		return (NULL);
	temp = head; 
	while(temp->prev != NULL)
		temp = temp->prev;
	return (temp);
}

void	insert_beggining(t_node **head, t_node *new)
{
	t_node *first;

	if(*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		return ;
	}
	else
	{
		first = get_first_node(*head);
		first->prev = new; 
		new->prev = NULL;
		new->next = first;
		*head = new;
	}
}

int list_size(t_node *head)
{
	int len; 

	if(head == NULL)
		return (0);
	len = 1;
	while(head->next != NULL)
	{
		head = head->next;
		len++;
	}
	return (len);
}

void printn(t_node *first)
{
	t_node *temp = first;

	while(temp != NULL)
	{
		ft_printf("%i ,", temp->value);
		temp = temp->next;
	}
	ft_printf("\n");
}