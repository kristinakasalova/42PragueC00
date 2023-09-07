/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:47:43 by kkasalov          #+#    #+#             */
/*   Updated: 2022/02/16 11:53:06 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	abc;
	abc = 'z';

		while(abc >= 'a')
	        {	ft_putchar(abc);
                abc--;
            }
}

int	main(void)
	{
		ft_print_reverse_alphabet();
		return (0);
	}
