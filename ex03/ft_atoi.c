/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:23:14 by mbuchet           #+#    #+#             */
/*   Updated: 2021/09/14 22:23:14 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		signe;
	int		res;

	i = 0;
	signe = 0;
	res = 0;
	while (str[i] == 32)
		i++;
	while ((str[i] != '\0') && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			signe++;
		i++;
	}
		if (signe % 2 != 0 )
			signe = -1;
		else
			signe = +1 ;
	while ((str[i] != '\0') && (str[i] >= 48 && str[i] <= 57))
	{
		res =	res * 10 + str[i] - '0';
		i++;
	}
	return (res * signe);
}
