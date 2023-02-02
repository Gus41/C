#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//------------------------------------------
int eh_digito(char c){
    if ( c>= '0' && c<='9'){
        return 1;
    }
    else{
        return 0;
    }
    
}
//------------------------------------------
void hora(char *str, int *h, int *m, int *s){
    
    int i;
    
    if ( strlen(str) != 8 ){
        *h = -1;
        *m = -1;
        *s = -1;
    } else if ( !eh_digito(str[0]) || !eh_digito(str[1]) || !eh_digito(str[3]) ||
                !eh_digito(str[4]) || !eh_digito(str[6]) || !eh_digito(str[7]) ||
                str[2] != ':' || str[5] !=':' ){
                    
                    *h = -1;
                    *m = -1;
                    *s = -1;
                    
                } else {
                    *h = (str[0]-'0')*10 + (str[1]-'0');
                    *m = (str[3]-'0')*10 + (str[4]-'0');
                    *s = (str[6]-'0')*10 + (str[7]-'0');
                    
                }
    if ( *h >= 24 || *m >= 60 || *s >= 60){
        *h = -1;
        *m = -1;
        *s = -1;
    }
    
    
}
//------------------------------------------
int main(){
    
    char str[8];
    int h,m,s;
    
    printf("Digite a str em horas:");
    gets(str);
    
    //printf("%s",str);
    hora(str,&h,&m,&s);
    
    printf("%d:%d:%d",h,m,s);
}
