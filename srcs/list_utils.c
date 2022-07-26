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

t_node *add_node(t_node *first, t_node *new)
{
	t_node *last;

	if(first == NULL)
	{
		first = new;
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		last = get_last_node(first);
		last->next = new; 
		new->prev = last;
		new->next = NULL;
	}
}