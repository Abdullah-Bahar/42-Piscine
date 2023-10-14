/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:51:12 by abahar            #+#    #+#             */
/*   Updated: 2023/09/10 14:51:12 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (flag == 0 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (flag == 1 && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			flag = 1;
		}
		else
			flag = 0;
		i++;
	}
	return (str);
}
