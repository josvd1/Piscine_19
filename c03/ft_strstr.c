/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-dro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:03:46 by jvan-dro          #+#    #+#             */
/*   Updated: 2021/08/11 18:14:31 by jvan-dro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (! *to_find)
	{
		return (str);
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			while (to_find[i] && str[i] == to_find[i])
			{
				i++;
			}
			if (!to_find[i])
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}
