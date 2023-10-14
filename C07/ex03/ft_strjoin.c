/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:21:26 by abahar            #+#    #+#             */
/*   Updated: 2023/09/21 17:21:35 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	def(int	*a, int *b)
{
	*a = 0;
	*b = 0;
}

char	*insert(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	k;

	def(&i, &k);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] && i < size -1)
		{
			str[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		res;
	char	*str;

	i = 0;
	res = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	res = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		res += ft_strlen(*(strs + i));
		i++;
	}
	str = (char *)malloc(sizeof(char) * (res + 1));
	str = insert(size, strs, sep, str);
	return (str);
}
