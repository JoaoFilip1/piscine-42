/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:24:39 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/05 11:07:37 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	tamanho;

	tamanho = 0;
	while (str[tamanho] != '\0')
	{
		tamanho++;
	}
	return (tamanho);
}

/* #include <stdio.h>
int main(void)
{

	int	quantidade;

	quantidade = ft_strlen("Acaicomgranola");
	printf("O tamanho e: %i\n", quantidade);
	
	return(0);
}*/
