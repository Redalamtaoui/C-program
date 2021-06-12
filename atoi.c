int ft_atoi(char *str){
        int i = 0 , nbr = 1 , result = 0;
while(str){
        if (str[i] >= 'a' || str[i] >= 'A' ){
        ft_putnbr(0);
        break;
        }
      if (str[0] == '-' && str[1] >= 'a' ||  str[1] >= 'A' ){
ft_putnbr(0);
break;
      }
      if (str[i] == '-'){
 ft_putchar('-');
i++;
      }
    if (str[0] == '0'){
        i = 1;
                }
    if (str[0] == '-' && str[1] == '0'){
            i = 2;
    }
while(str[i] != '\0'){
if (str[i] >= 'a' || str[i] >= 'A'){
break;
}
        else {
ft_putnbr( 0 + str[i] - '0');
i++;
        }
}
break;
}        
return 0;
}

