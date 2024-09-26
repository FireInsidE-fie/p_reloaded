/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:59:35 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 10:59:41 by estettle         ###   ########.fr       */
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
#include <string.h>

int	main(void)
{
	char	*melody = "Can. You. Hear. Me?";
	char	*roxy = ft_strdup(melody);
	char	*alis = strdup(melody);

	printf("%s\n", melody);
	printf("%s\n", roxy);
	printf("%s\n", alis);
}
*/
