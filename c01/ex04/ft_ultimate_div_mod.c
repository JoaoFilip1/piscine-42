/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-sa <jcruz-sa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:28:41 by jcruz-sa          #+#    #+#             */
/*   Updated: 2026/02/02 19:14:21 by jcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res_div;
	int	res_mod;

	res_div = *a / *b;
	res_mod = *a % *b;
	*a = res_div;
	*b = res_mod;
}
