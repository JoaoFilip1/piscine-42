/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:59:26 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/05 11:34:09 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	s;
	int	temp;

	i = 0;
	while (i < size)
	{
		s = i + 1;
		while (s < size)
		{
			if (tab[i] > tab[s])
			{
				temp = tab[i];
				tab[i] = tab[s];
				tab[s] = temp;
			}
			s++;
		}
		i++;
	}
}
/*
#include <unistd.h>

void    ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int tab[3] = {3, 1, 2};

    ft_sort_int_tab(tab, 3);

    write(1, &"0123456789"[tab[0]], 1);
    write(1, &"0123456789"[tab[1]], 1);
    write(1, &"0123456789"[tab[2]], 1);
    write(1, "\n", 1);

    return (0);
}*/
