//:header

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_alphabet(void) {
    char abc = 'a';
    while (abc <='z'){
        ft_putchar(abc);
        abc++;
    }
}

int main(void) {
    ft_print_alphabet();
    return 0;
}
