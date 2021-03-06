/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heeskim <heeskim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:51:31 by heeskim           #+#    #+#             */
/*   Updated: 2021/10/10 20:48:06 by heeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	while (row++ < y)
	{
		col = 0;
		while (col++ < x)
		{
			if ((row == 1 && col == 1) || (row == y && col == x))
				ft_putchar('A');
			else if ((row == 1 && col == x) || (row == y && col == 1))
				ft_putchar('C');
			else if (row == 1 || row == y || col == 1 || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
