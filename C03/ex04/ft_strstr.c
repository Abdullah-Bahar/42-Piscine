/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:55:11 by abahar            #+#    #+#             */
/*   Updated: 2023/09/13 11:16:03 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	find null ise 		-> return (str)
	find bulunur ise 	-> return (bulundugu yerin indexi)
	find bulunmadi ise 	-> return (null/0)
*/


char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (str[j + i] == to_find[j] && to_find[j] != '\0')
				j++;
			if (to_find[j] == '\0')
				return (str + i);
			else
				j = 0;
		}
		i++;
	}
	return (0);
}
