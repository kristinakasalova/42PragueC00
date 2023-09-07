/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:47:48 by coder             #+#    #+#             */
/*   Updated: 2022/02/24 13:47:48 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_print(int a, int b){
  write(1,&a,2);
  write(1," ",1);
  write(1,&b,2);
  return(0);
  }

void ft_print_comb(void){
  int a, b;
  a=0;
  b=0;
  while(a<99){
          while(b<100){
            ft_print(a,b);
            write(1,", ",2);       
            b++;
            }
        ft_print(a,b);
         write(1,", ",2);                         
         a++;
        }
      ft_print(a,b);  
      }

int main(void){

    ft_print_comb();
    return(0);
}

