/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:01:35 by abahar            #+#    #+#             */
/*   Updated: 2023/09/17 12:03:21 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	size < dest_len	-> return (src_len + size) 
	size = 0		-> return (src_len)
	size > dest_len -> return (src_len + dest_len) -> burada cat islemi yapilir
	
	* size > desr_len ise islem gerceklesmeye baslar ancak size, dest'in tamponunu gozetemyen
	bir deger oldugunda buffer overflow gerceklesir.
	
	* dest'te ne ekleniyor :
		(size - dest_len - 1) kadar cat islemi yapilir
		(size - 1). index' de null atamasi yapilir  
*/


unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = ft_strlcat(dest);
	src_len = ft_strlcat(src);
	if (size == 0 || size < dest_len)
		return (src_len + size);
	while (src[i] && dest_len + i < size - desr_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
