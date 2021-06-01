int ft_atoi(char *str){
        int i = 0;
        int h = 0;
        int res = 0;
        int f = 1;
        int s = 1;
while(f != 0){
        if (str[i] >= 'a' && str[i] <= 'z' ){
        ft_putnbr(0);
        }
      if (str[0] == '-' && str[1] >= 'a'){
 ft_putnbr(0);
break;
        }
      if (str[i] == '-'){
 ft_putchar('-');
i++;
        }

while(str[i] != '\0'){
if (str[i] >= 'a' && str[i] <= 'z' ){
break;
}
else{
ft_putnbr( res * 10 + str[i] - '0');
i++;
}
}
f = 0;
}
ft_putchar('\n');
return 0;
}
int main(){
ft_atoi("5676G8");
}
