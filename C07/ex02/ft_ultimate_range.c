/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:08:13 by abahar            #+#    #+#             */
/*   Updated: 2023/09/21 16:21:23 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*nbr;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	nbr = (int *)malloc(sizeof(int) * size);
	if (nbr == NULL)
		return (-1);
	while (i < size)
	{
		nbr[i] = min;
		min++;
		i++;
	}
	*range = nbr;
	return (size);
}
