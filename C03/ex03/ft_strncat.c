/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:29:28 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/15 17:21:34 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
int	main(void)
{

	char dest[50] = "Hello";
	char src[] = " World, Python is cool!";
	unsigned int n = 6;

	printf("Antes: %s\n", dest);
	
	ft_strncat(dest, src, n);

	printf("Depois (concatenando %u caracteres): %s\n", n, dest);

	return (0);
}
*/
