/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:22:32 by estettle          #+#    #+#             */
/*   Updated: 2024/09/25 18:00:43 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*units;
	int	i;

	if (min >= max)
		return (NULL);
	units = malloc(sizeof(int) * (max - min - 1));
	if (!units)
		return (NULL);
	i = 0;
	while (min < max)
		units[i++] = min++;
	return (units);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*units = ft_range(-10, 10);
	int	i = 0;

	if (units)
	{
		while (i < 10 - -10)
			printf("%d\n", units[i++]);
	}
}
*/
