/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:41:44 by estettle          #+#    #+#             */
/*   Updated: 2024/09/21 14:54:31 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i++]) == 1)
			count++;
	}
	return (count);
}

int	is_even_length(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	if (i % 2 == 0)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*melody[5] = {"Can.", "You.", "Hear.", "Me?", 0};
	int	(*f)(char *) = is_even_length;

	printf("%d\n", ft_count_if(melody, f));
}
*/
