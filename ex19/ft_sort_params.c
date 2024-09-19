/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:42:36 by estettle          #+#    #+#             */
/*   Updated: 2024/09/19 15:19:52 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_swap(char *s1, char *s2)
{
	char	*tmp;
	tmp = s1;
	s1 = s2;
	s1 = tmp;
}

char	**ft_sort(int size, char **strings)
{
	int	i;
	int	j;

	i = 1;
	while (i < size - 1)
	{
		j = 0;
		while (strings[i][j])
		{
			if (strings[i][j] >= strings[i + 1][j])
				ft_swap(strings[i], strings[i + 1]);
			j++;
		}
		i++;
	}
	return (strings);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (0);
	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}
