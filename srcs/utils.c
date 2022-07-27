#include "push_swap.h"

int just_numbers(char *str)
{
	if(*str == '-')
		str++;
	while(*str)
	{
		if(!ft_isdigit(*str))
			return(0);
		str++;
	}
	return(1);
}