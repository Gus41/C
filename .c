#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i;
    char str[50];
    int cont = 0;
    
    gets(str);
    for ( i = 0 ; str[i] != '\0' ; i ++ ){
        cont++;
    }
    
    printf("%d",cont);
    char ult[10];
    int k=0;
    for ( i = cont ; str[i] != ' '; i-- ){
        ult[k++] = str[i];
    }
    ult[k] = '\0';
	printf("%s",ult);
}
