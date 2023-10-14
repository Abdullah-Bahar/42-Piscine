/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:47:33 by abahar            #+#    #+#             */
/*   Updated: 2023/09/13 10:52:18 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	* src'yi dest'e n kadar eklemek icin kullanilir.
	
	* n == null -> return (dest)
	* dest_len > nb		->	return (dest) / bisey eklenmez 
	* dest_len == nb	->	return (dest) / bisey eklenmez 
	* dest_len < nb 	->	return (dest) / dest_len - nb kadar src'den eleman eklenir
	
	* nb dest_size'dan buyukse ->	buffer owevflow gerceklesir. (bunu denetlemiyoruz)
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (dest);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
