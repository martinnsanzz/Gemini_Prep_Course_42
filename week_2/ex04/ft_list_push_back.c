/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 2002mssm02 <2002mssm02@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:53:39 by 2002mssm02        #+#    #+#             */
/*   Updated: 2026/02/21 13:29:06 by 2002mssm02       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last_node;
	t_list	*tmp;

	if (begin_list == NULL)
		return ;
	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	tmp = *begin_list;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = ft_create_elem(data);
}

t_list	*ft_create_elem(void *data)
{
	t_list	*new_struct;

	new_struct = (t_list *)malloc(sizeof(t_list));
	if (new_struct == NULL)
		return (NULL);
	new_struct->data = data;
	new_struct->next = NULL;
	return (new_struct);
}
