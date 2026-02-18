/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 02:12:06 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/16 07:51:29 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 
//#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
int	main(void)
{
	char *test1 = "   ---1234ab56";
	char *test2 = " \n \t 42";
	char *test3 = " --++--42";
	char *test4 = " +-+2147483647";
	char *test5 = " -2147483648";

	printf("Teste 1 (\"%s\"): %d\n", test1, ft_atoi(test1));
	printf("Teste 2 (\"%s\"): %d\n", test2, ft_atoi(test2));
	printf("Teste 3 (\"%s\"): %d\n", test3, ft_atoi(test3));
	printf("Teste 4 (\"%s\"): %d\n", test4, ft_atoi(test4));
	printf("Teste 5 (\"%s\"): %d\n", test5, ft_atoi(test5));

	return (0);
}*/
