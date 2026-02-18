/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:20:50 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/05 19:00:48 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	// Teste com uma string que tem um caractere não imprimível (\n)
	char test[] = "Oi\n42";

	if (ft_str_is_printable(test) == 1)
		printf("Resultado: 1 (Tudo imprimivel)\n");
	else
		printf("Resultado: 0 (Tem caracteres invisiveis/invalidos)\n");
	return (0);
}
*/
