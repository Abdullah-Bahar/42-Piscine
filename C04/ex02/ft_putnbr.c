/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:39:48 by abahar            #+#    #+#             */
/*   Updated: 2023/09/17 16:59:32 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str, int *i)
{
	while (*i >= 0)
	{
		write(1, &str[*i], 1);
		*i = *i - 1;
	}
}

void	array(int nb, char *num, int *i)
{
	if (nb > 9)
	{
		num[*i] = (nb % 10) + 48;
		*i = *i + 1;
		array(nb / 10, num, i);
	}
	else if (nb <= 9)
	{
		num[*i] = (nb % 10) + 48;
		ft_putchar(num, i);
	}
}

void	ft_putnbr(int nb)
{
	char	numbers[11];
	int		i;

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		array(nb, numbers, &i);
	}
	else
		array(nb, numbers, &i);
}
