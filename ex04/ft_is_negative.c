/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkasalov <kkasalov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:52:38 by kkasalov          #+#    #+#             */
/*   Updated: 2022/02/16 16:52:38 by kkasalov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n){

	if (n>=0){
		write(1,"P",1);
	} else {
		write(1,"N",1);
	}
}
int	main(void){
	ft_is_negative(0);
	return(0);
}