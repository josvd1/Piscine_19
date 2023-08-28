/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-dro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:26:29 by jvan-dro          #+#    #+#             */
/*   Updated: 2021/08/18 18:52:42 by jvan-dro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[s])
	{
		dest[i + s] = src[s];
		s++;
	}
	dest[i + s] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (size == 0)
		return ((char *) malloc(sizeof(char)));
	while (i < size)
		len = len + ft_strlen(strs[i++]);
	if (size > 0)
		len = len + (size) * ft_strlen(sep);
	dest = malloc((len) * sizeof(char));
	dest[0] = '\0';
	i = 0;
	while (i < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (i++ != size - 1)
			dest = ft_strcat(dest, sep);
	}
	return (dest);
}
