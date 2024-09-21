/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:05:58 by estettle          #+#    #+#             */
/*   Updated: 2024/09/21 14:20:57 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
#include <stdio.h>

void	ft_print_double(int number)
{
	printf("%d\n", number * 2);
}

int	main(void)
{
	int		melody[5] = {0, 1, 2, 3, 4};
	void	(*f)(int) = ft_print_double;

	ft_foreach(melody, 5, f);
}
*/
