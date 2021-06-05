int ft_iterative_power(int nb , int power){
int i;
i = 2;
int j = 0 , r = nb ;
while (i <= power){
nb = nb * r;
i++;
}
ft_putnbr(nb);
}



int main(){
ft_iterative_power(5 , 6 );


}
