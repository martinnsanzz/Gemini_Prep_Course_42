/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 2002mssm02 <2002mssm02@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:06:14 by 2002mssm02        #+#    #+#             */
/*   Updated: 2026/02/21 10:56:45 by 2002mssm02       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}	t_list;

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
#endif
