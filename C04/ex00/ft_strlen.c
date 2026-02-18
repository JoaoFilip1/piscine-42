/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:24:02 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/16 08:04:34 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char *str1 = "Ola Mundo!";
	char *str2 = "";

	printf("Teste 1 (\"%s\"): %d\n", str1, ft_strlen(str1));
	printf("Teste 2 (vazia): %d\n", ft_strlen(str2));
	return (0);
} */
