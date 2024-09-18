/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@email.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:23:31 by estettle          #+#    #+#             */
/*   Updated: 2024/09/18 22:27:34 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <stdio.h>

int	main(void)
{
	int	melody = 24;
	int	roxy = 42;
	int	*alis = &melody;
	int	*ash = &roxy;

	ft_swap(alis, ash);
	printf("%d\t%d\n", melody, roxy);
	return (0);
}
*/
