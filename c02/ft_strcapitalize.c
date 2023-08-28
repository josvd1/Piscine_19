/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-dro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:29:09 by jvan-dro          #+#    #+#             */
/*   Updated: 2021/08/10 14:26:09 by jvan-dro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
	{
		str[0] = str[0] - 32;
	}
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			if (str[i - 1] <= '/')
				str[i] = str[i] - 32;
			if (str[i - 1] >= ':' && str[i - 1] <= '@')
				str[i] = str[i] - 32;
			if (str[i - 1] >= '{' && str[i - 1] <= 127)
				str[i] = str[i] - 32;
			if (str[i - 1] >= '[' && str[i - 1] <= '`')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
