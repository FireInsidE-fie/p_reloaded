/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:00:12 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 11:00:12 by estettle         ###   ########.fr       */
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
/*
#include <stdio.h>

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

int	main(void)
{
	char	*melody[5] = {"Can.", "You.", "Hear.", "Me?", 0};
	int	(*f)(char *) = is_even_length;

	printf("%d\n", ft_count_if(melody, f));
}
*/
