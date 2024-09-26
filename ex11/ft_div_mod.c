/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:58:49 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 10:58:51 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	melody = 8;
	int	roxy = 3;
	int	*alis = &melody;
	int	*ash = &roxy;

	ft_div_mod(melody, roxy, alis, ash);
	printf("%d\t%d\n", *alis, *ash);
}
*/
