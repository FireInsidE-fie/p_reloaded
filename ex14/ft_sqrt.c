/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:30:18 by estettle          #+#    #+#             */
/*   Updated: 2024/09/19 13:37:22 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	float	i;

	i = 0;
	if (nb <= 0)
		return (i);
	while (i * i != nb && i < nb / 2)
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(-4));
	printf("%d\n", ft_sqrt(64));
	printf("%d\n", ft_sqrt(2));
}
*/
