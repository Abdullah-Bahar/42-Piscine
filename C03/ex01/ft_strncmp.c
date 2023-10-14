/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:18:03 by abahar            #+#    #+#             */
/*   Updated: 2023/09/17 11:27:36 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strcmp ile aynı degerleri dondurur ancak
		* n == 0 ise	->	return (NULL)
		* n != 0 ise	-> karsilastirma n kadar veya str'lerden biri null'a
							ulasincaya kadar devam eder 
							return (aralarindaki fark)
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
