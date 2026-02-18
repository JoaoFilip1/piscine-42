/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:42:31 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/17 11:21:20 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int	main(void)
{
	ft_putstr("Ola, Piscine 42!\n");

	ft_putstr("Testando 1, 2, 3... @#$%\n");

	ft_putstr("");

	return (0);
}
