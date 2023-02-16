/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:44:41 by cvidot            #+#    #+#             */
/*   Updated: 2023/02/13 11:03:11 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_str_count(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
		else
			str++;
	}
	return (count);
}

static void	ft_copy_strings(char const *s, char **res, char c, int str_nbr)
{
	int	i;
	int	current_str;
	int	start;
	int	length;

	i = 0;
	current_str = 0;
	while (current_str < str_nbr)
	{
		while (s[i] == c)
			i++;
		start = i;
		length = 0;
		while (s[i] && s[i] != c)
		{
			length++;
			i++;
		}
		res[current_str] = (char *)malloc(sizeof(char) * length + 1);
		ft_strlcpy(res[current_str], &s[start], length + 1);
		res[current_str][length] = '\0';
		current_str++;
	}
	res[current_str] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		str_nbr;
	char	**res;

	str_nbr = ft_str_count(s, c);
	res = (char **)malloc(sizeof(char *) * (str_nbr + 1));
	if (!res)
		return (NULL);
	ft_copy_strings(s, res, c, str_nbr);
	return (res);
}

/*Function name ft_split
Prototype char **ft_split(char const *s, char c);

Parameters s: The string to be split.
            c: The delimiter character.

Return value The array of new strings resulting from the split.
NULL if the allocation fails.

External functs. malloc, free

Description Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.*/