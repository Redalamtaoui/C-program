#include <unistd.h>
void ft_putchar(char c){
        write(1,&c,1);
}
void ft_putnbr(int nbr)
{
        if (nbr >= 0 && nbr < 10 )
                ft_putchar(nbr + '0');
        else if( nbr < 0){

                ft_putchar('-');
                ft_putchar( nbr /10 * (-1)+'0' );
                ft_putchar( nbr %10 * (-1)+'0' );
        }
        else{
                ft_putchar( nbr/10 + '0');
                ft_putchar( nbr%10 + '0');
        }
}
int main(){
         ft_putnbr(-45);
         return 0;
}

