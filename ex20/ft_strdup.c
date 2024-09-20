/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:09:43 by estettle          #+#    #+#             */
/*   Updated: 2024/09/20 14:22:09 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		length;
	int		i;

	length = ft_strlen(src);
	copy = malloc(sizeof(char) * length + 1);
	if (!copy)
		return (NULL);
	i = -1;
	while (++i <= length)
		copy[i] = src[i];
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*melody = "Can. You. Hear. Me?";
	char	*roxy = ft_strdup(melody);

	printf("%s\n", melody);
	printf("%s\n", roxy);
}
*/
