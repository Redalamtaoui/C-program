int ft_is_prime(int nb){
int g = 1, e = 1 , n = 0;
        while( g <= nb){
if (g == 1){
nb++;
}                       
e = nb   % g;
g++;
if (e == 0){
n++;
}
if (n == 3){
g = 1;
n = 0;}
}
return nb;
}
