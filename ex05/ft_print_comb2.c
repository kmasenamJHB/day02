/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmasenam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 08:32:52 by kmasenam          #+#    #+#             */
/*   Updated: 2020/06/21 16:15:33 by kmasenam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_putchar(char c);

void ft_print_comb2(void)
{
	int i;
	int j;
	
	i = 0;

	while(i < 99)
	{
		j = i + 1;
		while(j < 99)
		{
			ft_putchar(i/10 + '0');
			ft_putchar(i%10 + '0');
			ft_putchar(' ');
			ft_putchar(j/10 + '0');
			ft_putchar(j%10 + '0');
			ft_putchar(',');
			ft_putchar(' ');
			j++;
		}
		i = i + 1;
	}
}
