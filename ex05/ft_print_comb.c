/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:25:18 by kkasalov          #+#    #+#             */
/*   Updated: 2022/02/24 13:47:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void ft_print_comb(void){
    char a;
    char b;
    char c;
    a = '0';
    b = a + 1;
    c = b + 1;
while(a <= '7'&& a<b){
    while (b <= '8'&& b<c){
        while(c <= '9'){
            if(a!=b && b!=c && c!=a)
            write(1,&a,1);
            write(1,&b,1);
            write(1,&c,1); 
            write(1,", ",2);  
            c++;
        }
        b++;
    }
    a++;
}    
*/

#include <unistd.h>


void ft_print_comb(void){
  char a, b, c;
  a='0';
  while(a<='8'){
  b=a+1;
    while(b<='8'){
      c=b+1;
      while(c<='9'){
        if(a != '7' || b != '8' || c != '9'){
        write(1,&a,1);
        write(1,&b,1);
        write(1,&c,1);
        write(1,", ",2);
		}
		if(a=7)
		write(1,&a,1);
        write(1,&b,1);
        write(1,&c,1);
        c++;
      }
      b++;
    }
      a++;
    }
  }
    
int main(void){

    ft_print_comb();
    return(0);
}

/*
void ft_print_comb(void)
{    
    int a;
    int b;
    int c;

    a = 0;
    b = 1;
    c = 2;

    solver(a, b, c);
}
void print( char f, char se, char thi)
{
    ft_putchar(f);
    ft_putchar(se);
    ft_putchar(thi);
    ft_putchar(',');
}

void ft_putchar(char c)
{
write(1, &c, 1);
}

void solver(int x, int y, int z)
{
    while (x < 9){    
        while (y<8){    
            while (z<7){    
                if (x < y && y < z ){
                    print(x, y, z);
                }
                z++;
            }
            y++;
        }
        x++;
    }
}

int main(void){
  ft_print_comb();
  return(0);
  }
  */