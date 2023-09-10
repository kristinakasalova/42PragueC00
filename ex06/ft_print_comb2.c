//:header

#include <unistd.h>

void ft_putchar(int a) {
    write(1, &a, 2);
}

void ft_print_comb(void){
    int a = 00;
    int b = 01;

    while ((a < 99) && (b < 100)) {
        ft_putchar(a);
        write(1, " ", 1);
        ft_putchar(b);
        write(1, ", ", 2);
         if (a != 98){
            a++;
        } else if (b != 99){
            b++;
        }                     
    }
    };


int main(void) {
    ft_print_comb();
    return 0;
}
