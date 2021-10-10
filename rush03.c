/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heeskim <heeskim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:12:05 by heeskim           #+#    #+#             */
/*   Updated: 2021/10/10 10:12:07 by heeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int rush(int x, int y){
  int i;
  int j;
  for(i=0;i<y;i++){
    for(j=0;j<x;j++){
      if (i==0 || i==y-1){
        if(j==0){
          ft_putchar('A');
        }
        else if(j==x-1){
          ft_putchar('C');
        }
        else{
          ft_putchar('B');
        }
      }
      else {
        if(j==0 || j==x-1){
          ft_putchar('B');          
        }
        else {
          ft_putchar(' ');
        }
      }
    }
    ft_putchar('\n');
  }
}
