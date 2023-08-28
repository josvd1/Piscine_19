/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-dro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 13:07:23 by jvan-dro          #+#    #+#             */
/*   Updated: 2021/08/08 15:16:52 by jvan-dro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *x, int *y)
{
	int	t;

	t = *x;
	*x = *y;
	*y = t;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	min;

	i = 0;
	a = i + 1;
	while (i < size)
	{
		min = i;
		while (a < size)
		{
			if (tab[a] < tab[min])
			{
				min = a;
			}
			swap(&tab[min], &tab[i]);
			a++;
		}
		i++;
	}
}
