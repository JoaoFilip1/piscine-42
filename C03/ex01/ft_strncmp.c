/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 13:21:57 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/08 17:06:01 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char *str1 = "Bolo";
	char *str2 = "Bola";

	// Teste 1: Comparando apenas os 3 primeiros caracteres ("Bol" vs "Bol")
	printf("Teste n=3 (Iguais): %d\n", ft_strncmp(str1, str2, 3));

	// Teste 2: Comparando os 4 caracteres ("Bolo" vs "Bola")
	printf("Teste n=4 (Diferentes): %d\n", ft_strncmp(str1, str2, 4));

	return (0);
}*/
