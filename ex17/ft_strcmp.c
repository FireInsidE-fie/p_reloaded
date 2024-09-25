/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:50:42 by estettle          #+#    #+#             */
/*   Updated: 2024/09/25 17:35:01 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (!s1[i] && !s2[i])
			return (0);
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*melody = "Can!";
	char	*roxy = "Can.";

	printf("%d\n", strcmp(melody, roxy));
	printf("%d\n", ft_strcmp(melody, roxy));
}
