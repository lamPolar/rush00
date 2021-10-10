/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heeskim <heeskim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:12:05 by heeskim           #+#    #+#             */
/*   Updated: 2021/10/10 14:23:37 by heeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush( int x, int y )
{
	int	row;
	int	col;

	row = 0;
	while (row++ < y)
	{
		col = 0;
		while (col++ < x)
		{
			if (row == 1 || row == y)
			{
				if (col == 1)
				{
					ft_putchar('A');
				}
				else if (col == x)
				{
					ft_putchar('C');
				}
				else
				{
					ft_putchar('B');
				}
			}
			else
			{
				if (col == 1 || col == x)
				{
					ft_putchar('B');
				}
				else
				{
					ft_putchar(' ');
				}
			}
		}
		ft_putchar('\n');
	}
}
