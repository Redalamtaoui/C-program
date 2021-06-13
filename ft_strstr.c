char *ft_strstr(char *str, char *to_find){
int n = 0 , x = 0 ,r = 0 ,f =0 , g = 0 ;
     while(str[n] != '\0'){
           if(str[n] == to_find[x]){
           break;
           }
n++;
}
     while (to_find[f] != '\0'){
     f++;
     }
     r = n;
     while(g < f){
     if(str[n] == to_find[x]){
     n++ , x++ , g++;
}
else
{
g = f + 1;
}
}
if(g == f){
        while(str[r] != '\0'){
        ft_putchar(str[r]);
        r++;
}
}
else
{
ft_putstr("Null");
}

}
