/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:08:31 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/05 11:02:16 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	posicao;

	posicao = 0;
	while (str[posicao] != '\0')
	{
		write(1, &str[posicao], 1);
		posicao++;
	}
}
/*
int main(void)
{
    ft_putstr("Teste 1: BOM DIA!\n");
    ft_putstr("Teste 2: BOA NOITE\n");
    ft_putstr("Teste 3: \n");
    ft_putstr("Teste 4: *#$%^&*()\n");

    return (0);
}*/
