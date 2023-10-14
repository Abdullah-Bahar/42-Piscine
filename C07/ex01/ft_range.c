/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:08:18 by abahar            #+#    #+#             */
/*   Updated: 2023/09/21 10:17:28 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*nums;
	int	i;

	size = max - min;
	if (min >= max)
		return (0);
	nums = (int *)malloc(sizeof(int) * size);
	if (nums == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		nums[i] = min;
		i++;
		min++;
	}
	return (nums);
}
