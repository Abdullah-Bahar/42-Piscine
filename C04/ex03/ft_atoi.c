/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:42:49 by abahar            #+#    #+#             */
/*   Updated: 2023/09/17 17:06:40 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char a)
{
	if (a == '\n' || a == '\t' || a == '\r' || a == 'v'
		|| a == '\fx<' || a == ' ')
		return (1);
	return (0);
}

int	convert(char *str, int i, int res)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;	// bir onceki basamaga yer acmak icin
		res = res + (str[i] - 48);	// sayiya cevirmek icin
		i++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int neg;
	int sign;
	int res; 

	sign = 1;	// isaret degeri tutuluyor
	neg = 0;	// eksi sayisi	
	i = 0;
	res = 0;
	while (ft_isspace(str[i])) // baslangictaki boslukları es gecemek icin
		i++;
	while (str[i] == '+' || str[i] == '-')	// icerideki negatifleri yazmak icin ()
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	if (neg % 2 == 1)  // tek ise -> (-1)negatif / cift ise -> pozitif
		sign = -1;
	res = convert(str, i, res);
	return (res * sign);
}
