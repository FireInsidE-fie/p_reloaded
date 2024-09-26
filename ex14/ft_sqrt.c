/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:59:04 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 10:59:05 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (i);
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
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
