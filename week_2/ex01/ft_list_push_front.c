/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 2002mssm02 <2002mssm02@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:27:40 by 2002mssm02        #+#    #+#             */
/*   Updated: 2026/02/21 11:14:04 by 2002mssm02       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_struct;

	new_struct = ft_create_elem(data);
	if (new_struct != NULL)
	{
		new_struct->next = *begin_list;
		*begin_list = new_struct;
	}
}
