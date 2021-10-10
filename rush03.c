/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heeskim <heeskim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:12:05 by heeskim           #+#    #+#             */
/*   Updated: 2021/10/10 20:47:52 by heeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 0;
	while (row++ < y)
	{
		column = 0;
		while (column++ < x)
		{
			if ((row == 1 || row == y) && column == 1)
				ft_putchar('A');
			else if ((row == 1 || row == y) && column == x)
				ft_putchar('C');
			else if (row == 1 || row == y || column == 1 || column == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
