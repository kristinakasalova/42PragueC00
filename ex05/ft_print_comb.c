//:header

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb(void){
    char a = '0';
    char b = '1';
    char c = '2';

    while ((a <= '7') && (b <= '8') && (c <= '9')) {
        ft_putchar(a);
        ft_putchar(b);
        ft_putchar(c);
        write(1, ", ", 2);
        if (c != '9'){
            c++;
        } else if (b != '8') {
                b++;               
                c = b + 1;
                } else {
                    a++;
                    b = a + 1;
                    c = b + 1;
                }
        }
    };


int main(void) {
    ft_print_comb();
    return 0;
}
