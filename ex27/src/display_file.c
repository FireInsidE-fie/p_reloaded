/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:01:12 by estettle          #+#    #+#             */
/*   Updated: 2024/09/23 10:48:22 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*	ft_err()
 *	error handling is done here, displaying a different message depending
 *	on the integer the function receives as an error number
*/
void	ft_err(int err_nb)
{
	if (err_nb == 1)
		ft_puterr("File name missing.\n");
	else if (err_nb == 2)
		ft_puterr("Too many arguments.\n");
	else if (err_nb == 3)
		ft_puterr("Cannot read file.\n");
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
	while (read(file_desc, c, 1) > 0)
		write(1, &c, 1);
	close(file_desc);
	return (0);
}
