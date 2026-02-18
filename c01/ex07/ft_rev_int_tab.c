/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 12:04:54 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/05 17:49:33 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	inicio;
	int	fim;
	int	temp;

	inicio = 0;
	while (inicio < size / 2)
	{
		fim = (size - 1) - inicio;
		temp = tab[inicio];
		tab[inicio] = tab[fim];
		tab[fim] = temp;
		inicio++;
	}
}

#include <stdio.h>
int main(void)
{
	int meu_array[] = {1, 2, 3, 4, 5, 6};
	int tamanho = 6;
	int i;

	i = 0;
	printf("Meu Array original: ");
	while (i < tamanho)
	{
		printf("[%d]", meu_array[i]);
		i++;
	}

	printf("\n");
	
	ft_rev_int_tab(meu_array, tamanho);
	printf("Array Invertido: ");
	i = 0;
	while (i < tamanho)
	{
		printf("[%d]", meu_array[i]);
		i++;
	}

	printf("\n");
	return(0);
}
