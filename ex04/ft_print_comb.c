/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmasenam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 08:03:39 by kmasenam          #+#    #+#             */
/*   Updated: 2020/06/21 16:10:11 by kmasenam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = -1;

	while(i <= 7)
	{
		i = i + 1;
		j = i;
		while(j <= 8)
		{
			j = j + 1;
			k = j;
			while(k < 9)
			{
				k = k + 1;
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(k + '0');
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
