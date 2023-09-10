//:header

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void) {
    char abc = 'z';
    while (abc >='a'){
        ft_putchar(abc);
        abc--;
    }
}

int main(void) {
    ft_print_reverse_alphabet();
    return 0;
}