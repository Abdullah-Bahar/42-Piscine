/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:53:26 by abahar            #+#    #+#             */
/*   Updated: 2023/09/13 10:52:07 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	* src'yi dest'e eklemek icin kullanilir.
	
	* dest veya src'den biri null ise 		-> 	return (dest)
	* dest veya src'den biri null degilse	->	src null olana kadar dest'e ekleme yapilir.
											src eklemesi bittikten sonra dest'in sonuna null atamasi yapilir 
											return (dest)
	
	* dest'tamponunda src'yi ekleyecek kadar yer yoksa -> buffer owerflov gerceklesir
*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (dest);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
