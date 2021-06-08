int ft_is_prime(int nb){
int g = 1, e = 1 , n = 0;
        while( g <= nb){
e = nb % g;
if (e == 0){
n++;}
g++;}
if (n == 2){
return 1;
}else{
return 0;}
}
