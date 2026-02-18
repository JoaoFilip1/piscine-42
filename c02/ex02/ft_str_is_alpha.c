/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:03:47 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/05 15:03:16 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

// Declaração da função
int ft_str_is_alpha(char *str);

int main(void)
{
    char *test1 = "Coxinha";      // Apenas letras
    char *test2 = "C0c@-C0l4";        // Letras e números
    char *test3 = "";                // String vazia

    printf(" %s -> %d\n", test1, ft_str_is_alpha(test1));
    printf(" %s -> %d\n", test2, ft_str_is_alpha(test2));
    printf(" %s -> %d\n", test3, ft_str_is_alpha(test3));

    return 0;
}*/
