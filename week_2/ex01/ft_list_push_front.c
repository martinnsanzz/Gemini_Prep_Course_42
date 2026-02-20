/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 2002mssm02 <2002mssm02@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:27:40 by 2002mssm02        #+#    #+#             */
/*   Updated: 2026/02/20 15:00:08 by 2002mssm02       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);
void ft_list_push_front(t_list **begin_list, void *data);

int	main(void)
{
	t_list	*list;

	list = NULL; // Start with an empty list

	printf("Pushing: 'Third'\n");
	ft_list_push_front(&list, "Third");

	printf("Pushing: 'Second'\n");
	ft_list_push_front(&list, "Second");


	printf("Pushing: 'First'\n");
	ft_list_push_front(&list, "First");

	// 3. Iterate and print
	t_list *tmp = list;
	while (tmp)
	{
		printf("Node data: %s\n", (char *)tmp->data);
		tmp = tmp->next;
	}

	// Clean up (Simplified for test)
	while (list)
	{
		t_list *next = list->next;
		free(list);
		list = next;
	}
	return (0);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_struct;

	new_struct = ft_create_elem(data);
	if (new_struct != NULL)
	{
		new_struct->next = *begin_list;
		*begin_list = new_struct;
	}
}

t_list	*ft_create_elem(void *data)
{
	t_list *new_struct;

	new_struct = (t_list *)malloc(sizeof(t_list));
	if (new_struct == NULL)
		return (NULL);
	new_struct->data = data;
	new_struct->next = NULL;
	return (new_struct);
}
