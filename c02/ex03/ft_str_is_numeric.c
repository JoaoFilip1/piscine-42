/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:08:11 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/05 18:44:25 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("Apenas números (123): %d\n", ft_str_is_numeric("123")); // Retorna 1
	printf("Com letras (12a3): %d\n", ft_str_is_numeric("12a3"));  // Retorna 0
	printf("String vazia: %d\n", ft_str_is_numeric(""));//Retorna 1 (Regra da 42)
	return (0);
}
*/
