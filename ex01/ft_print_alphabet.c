/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:54:22 by kkasalov          #+#    #+#             */
/*   Updated: 2022/02/15 21:36:47 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	abc;
	abc = 'a';

		while	(abc	<= 'z')
	        {	ft_putchar(abc);
                abc++;
            }
}

int	main(void)
	{
		ft_print_alphabet();
		return (0);
	}
