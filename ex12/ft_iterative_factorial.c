/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:56:30 by estettle          #+#    #+#             */
/*   Updated: 2024/09/25 16:58:36 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (nb > 0)
		i *= nb--;
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_factorial(30));
	return (0);
}
*/
