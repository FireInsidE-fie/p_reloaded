/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:01:12 by estettle          #+#    #+#             */
/*   Updated: 2024/09/23 10:44:26 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*	ft_err()
 *	error handling is done here, displaying a different message depending
 *	on the integer the function receives as an error number
*/
void	ft_err(int err_nb)
{
	// TODO : Change this function so that it puts a string to the error output
	if (err_nb == 1)
		ft_putstr("File name missing.");
	else if (err_nb == 2)
		ft_putstr("Too many arguments.");
	else if (err_nb == 3)
		ft_putstr("Cannot read file.");
}

int	main(int argc, char **argv)
{
	int	file_desc;
	char	c[1];

	if (argc == 1)
	{
		ft_err(1);
		return (1);
	}
	else if (argc > 2)
	{
		ft_err(2);
		return (2);
	}
	file_desc = open(argv[1], O_RDONLY);
	if (!file_desc)
	{
		ft_err(3);
		return(3);
	}
	read(file_desc, c, 1);
	while (*c >= 0)
	{
		write(1, &c, 1);
		read(file_desc, c, 1);
	}
	close(file_desc);
	return (0);
}
