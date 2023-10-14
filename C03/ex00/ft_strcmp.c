/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahar <abahar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:16:01 by abahar            #+#    #+#             */
/*   Updated: 2023/09/13 10:50:32 by abahar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	* karsilastirmadaki fark = f
		f > 0	->	str1 > str2
		f = 0 	->	str1 == str2
		f < 0 	->	str1 < str2

	* kontrol str'lerden biri null'a ulasincaya kadar devam eder
*/

int	is_cmp(char *s1, char *s2, int a)
{
	int	i;

	i = 0;
	while (i < a)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	len_s1;
	int	len_s2;
	int	finish;

	len_s1 = str_len(s1);
	len_s2 = str_len(s2);
	if (len_s1 == len_s2)
		finish = is_cmp(s1, s2, len_s1);
	else if (len_s1 > len_s2)
		finish = is_cmp(s1, s2, len_s2);
	else
		finish = is_cmp(s1, s2, len_s1);
	return (finish);
}
