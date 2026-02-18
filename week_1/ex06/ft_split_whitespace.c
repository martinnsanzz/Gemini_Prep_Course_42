/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 2002mssm02 <2002mssm02@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:11:05 by 2002mssm02        #+#    #+#             */
/*   Updated: 2026/02/18 12:09:29 by 2002mssm02       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split_whitespace(char *str);
char	*ft_strcpy(char *dest, char *src, int len);
int		is_space(char c);
int		count_words(char *str);
int		word_len(char *str);

char	**ft_split_whitespace(char *str)
{
	int		word_count;
	int		word_index;
	int		len;
	char	**arrs;

	word_count = count_words(&str[0]);
	arrs = malloc(sizeof(char *) * (word_count + 1));
	if (arrs == NULL)
		return (NULL);
	word_index = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && is_space(*str))
			str++;
		if (*str == '\0')
			break ;
		len = word_len(str);
		arrs[word_index] = malloc(sizeof(char) * (len + 1));
		if (arrs[word_index] == NULL)
		{
			while (word_index > 0)
			{
				word_index--;
				free(arrs[word_index]);
			}
			free(arrs);
			return (NULL);
		}
		ft_strcpy(arrs[word_index], str, len);
		str += len;
		word_index++;
	}
	arrs[word_index] = NULL;
	return (arrs);
}

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	num_words;
	int	in_word;

	in_word = 0;
	num_words = 0;
	while (*str != '\0')
	{
		if (is_space(*str))
		{
			in_word = 0;
			while (is_space(*str) && *str != '\0')
				str++;
		}
		else
		{
			if (in_word == 0)
			{
				in_word = 1;
				num_words++;
			}
			str++;
		}
	}
	return (num_words);
}

char	*ft_strcpy(char *dest, char *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	word_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !is_space(str[i]))
		i++;
	return (i);
}
