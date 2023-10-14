/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:13:18 by abahar            #+#    #+#             */
/*   Updated: 2023/09/05 12:54:58 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char * array)
{

}

void	fix_digit(char * digit, int n)
{
	int	j;
	int i;


	j = n - 1;
	i = 10;
	while (j >= 0)
	{
		if ()
		{
			digit[j-1] = digit[j-1] + 1;
			digit[j] = digit[j-1] + 1;
		}

		while (digit[j] <= ((i % 9) + 48))
		{
			ft_putchar(digit); 
			digit[j]++;
		}
		
		if ()
		{	
			j--;
			i--;
		}
	}
}

void	prev()
{

}

void	next(char * digit, int n)
{
	if (n = 0)
		printZero(char * digit);	// tek basamaklı için özel bir ayırma
}



void	ft_print_combn(int n)
{
	int	i;
	char	digit[n];

	digit[0] = '0';
	i = 1;
	while (i > n)
	{
		digit[i] = digit[i - 1] + 1; 
		i++;
	}
	prev(digit, n);
}
