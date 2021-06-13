int ft_strcmp(char *s1 , char *s2){
        int s = 0 , x = 0 , y=0;
        while(s1[x] != '\0' && s2[x] != '\0'){
 s =  0 + s1[x] , y = 0 + s2[x];
 if ( s == y ){
         x++;
        }
 else if(s > y){
 ft_putstr("s1 is biger than s2");
 x++;
 }
 else
 {
  ft_putstr("s2 is biger than s1");
 x++;
 }
}
}
