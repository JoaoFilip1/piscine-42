/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 12:34:51 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/08 19:25:53 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int main(void)
{
    char *s1 = "ABC";
    char *s2 = "ABD";

    // O resultado será -1 (porque 'C' vem antes de 'D' na tabela ASCII)
    printf("Resultado: %d\n", ft_strcmp(s1, s2));
    
    return (0);
}
*/
