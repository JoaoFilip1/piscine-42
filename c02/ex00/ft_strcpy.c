/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:13:31 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/05 18:35:04 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

 protótipo da função */
/*
char    *ft_strcpy(char *dest, char *src);

int main(void)
{
    char src[] = "Hello, mundo!";
    char dest[50];

    ft_strcpy(dest, src);

    printf("src : %s\n", src);
    printf("dest: %s\n", dest);

     comparação com a strcpy original 
    if (strcmp(dest, src) == 0)
        printf(" Teste passou!\n");
    else
        printf(" Teste falhou!\n");

    return (0);
}
*/
