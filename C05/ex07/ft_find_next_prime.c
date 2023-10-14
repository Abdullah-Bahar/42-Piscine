/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:02:11 by abahar            #+#    #+#             */
/*   Updated: 2023/09/19 12:42:30 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	flag;

	if (nb <= 1)
		return (0);
	while (nb <= 2147483647)
	{
		i = 2;
		flag = 1;
		while (i <= nb / i)
		{
			if (nb % i == 0)
			{
				flag = 0;
				break ;
			}
			i++;
		}
		if (flag)
			return (nb);
		nb++;
	}
	return (0);
}
