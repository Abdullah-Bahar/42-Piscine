/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:23:10 by abahar            #+#    #+#             */
/*   Updated: 2023/09/06 11:20:32 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_positive(int nb)
{
	char	x;

	if (nb / 10 > 0)
	{
		ft_positive(nb / 10);
		x = (nb % 10) + 48;
		ft_putchar(x);
	}
	else
	{
		x = nb + 48;
		ft_putchar(x);
	}
}

void	ft_putnbr(int nb)
{
	int	convert;

	convert = -1;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb >= 0)
		ft_positive(nb);
	else
	{
		write(1, "-", 1);
		nb = nb * convert;
		ft_positive(nb);
	}
}
