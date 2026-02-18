/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:52:28 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/08 14:30:31 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char src[] = "Hello";
    char dest[0];

    ft_strncpy(dest, src, 1);
    printf("Resultado: \"%s\"\n", dest);

    return 0;
}
	
