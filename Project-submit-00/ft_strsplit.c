/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 01:43:07 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/28 02:07:34 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3))
and returns an array of “fresh” strings (all ending with ’\0’,
including the array itself) obained by spliting s using the
character c as a delimiter.
If the allocation fails the function returns NULL.
Example : ft_strsplit("*hello*fellow***students*", ’*’)
returns the array ["hello", "fellow", "students"].
*/

static int	ft_wordcount(char const *s, char c)
{
	int		word_count;
	int		i;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			word_count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (word_count);
}

static void	*ft_taballoc(char const *s, char **str_tab, char c)
{
	int		i;
	int		wl;

	i = 0;
	while (s[i])
	{
		wl = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			wl++;
			i++;
		}
		if (wl != 0)
			*str_tab++ = (char *)malloc((wl + 1) * sizeof(char));
		if (!(str_tab - 1))
			return (NULL);
	}
	return (*str_tab);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str_tab;
	int		i;
	int		i2;
	int		i3;
	int		wc;

	i = 0;
	i3 = 0;
	wc = ft_wordcount(s, c);
	str_tab = (char **)malloc((wc + 1) * sizeof(char *));
	if (!str_tab)
		return (NULL);
	ft_taballoc(s, str_tab, c);
	while (i != wc)
	{
		i2 = 0;
		while (s[i3] == c && s[i3])
			i3++;
		while (s[i3] != c && s[i3])
			str_tab[i][i2++] = s[i3++];
		str_tab[i][i2] = '\0';
		i++;
	}
	str_tab[i] = NULL;
	return (str_tab);
}
