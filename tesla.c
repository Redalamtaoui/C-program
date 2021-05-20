#include <unistd.h>


void my_putchar(char c){
	write(1,&c,1);
}

void my_print_int (int nb, int neg) {
        int a = nb/10;
        int b = nb%10;
        if(neg && !a) {
                my_putchar('-');
        }

        if(a) {
                my_print_int(a, neg);
        }

        if(neg) {
                my_putchar('0' + -b);
        }
        else {
                my_putchar('0' + b);
        }
}

void my_put_nbr (int nb) {
        int neg = nb < 0;
        my_print_int(nb, neg);
        my_putchar('\n');
}

void main () {
	my_put_nbr(57444);
}
