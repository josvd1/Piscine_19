/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-dro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:28:09 by jvan-dro          #+#    #+#             */
/*   Updated: 2021/08/10 13:38:49 by jvan-dro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	a;
	int	i;

	i = 0;
	a = 1;
	while ((str[i]) && (a == 1))
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
		{
			a = 0;
		}
		i++;
	}
	return (a);
}