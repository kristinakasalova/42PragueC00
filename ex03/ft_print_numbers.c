/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:03:33 by coder             #+#    #+#             */
/*   Updated: 2022/02/16 12:03:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_print_numbers(void)
{
	int	num;
	num = '0';

	while(num <= '9')
	{	write(1,&num,1);
        num++;
    		}
}

int	main(void)
	{
		ft_print_numbers();
		return (0);
	}
