/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:49:01 by abahar            #+#    #+#             */
/*   Updated: 2023/09/20 21:39:01 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char *s1,char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a , char **b)
{
	char	*c;
	
	c = *a;
	*a = *b;
	*b = c; 
}

void	ft_putstr(char **str, int ac)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (str[i][j])
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{	
	int	i;
	int	j;

	j = 1;
	while (j < argc - 1)
	{
		i = 1;
		while (i < argc - j)
		{
			if(ft_strcmp(*(argv + i), *(argv + i + 1)) > 0)
				ft_swap(argv + i, argv + (i + 1));
			i++;
		}
		j++;
	}
	if (argc > 1)
		ft_putstr(argv, argc);
	return (0);
}
