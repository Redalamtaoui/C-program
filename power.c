int ft_iterative_power(int nb , int power){
int i = 0;
int  r = nb ;
while (i + 2 <= power){
nb = nb * r;
i++;
}
ft_putnbr(nb);
}



int main(){
ft_iterative_power(5 , 6 );


}
