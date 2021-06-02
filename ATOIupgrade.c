int ft_atoi(char *str){
        int i = 0 ;
while(str){
        if (str[i] >= 'a' || str[i] >= 'A' ){
        ft_putnbr(0);}
      if (str[0] == '-' && str[1] >= 'a'){
ft_putnbr(0);
break;}
      if (str[i] == '-'){
 ft_putchar('-');
i++;}
while(str[i] != '\0'){
if (str[i] >= 'a' || str[i] >= 'A'){
break;}
else{
ft_putnbr( 0 + str[i] - 48);
i++;}}
break;}
return 0;}
