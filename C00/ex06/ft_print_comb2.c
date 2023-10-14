/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:45:10 by abahar            #+#    #+#             */
/*   Updated: 2023/09/04 16:57:31 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}

void	half_comb2(char zero, char one)
{
	char	three;
	char	four;

	three = zero;
	four = one + 1;
	if (one == '9')
	{
		three = zero + 1;
		four = '0';
	}
	while (three <= '9')
	{
		while (four <= '9')
		{
			ft_putchar(zero, one, three, four);
			four++;
		}
		three++;
		four = '0';
	}
}

void	ft_print_comb2(void)
{
	char	zero;
	char	one;

	zero = 48;
	while ((zero <= '9') && (zero != '9' || one != '9'))
	{
		one = 48;
		while (one <= '9')
		{
			half_comb2(zero, one);
			one++;
		}
		zero++;
	}
}
