#include <stdio.h>
#include <stdlib.h>
#define N 5
//--------------------------------------
char *func(char *str){
    
    int i,k,esp;
    int cont = 0;
    
    for ( i = 0 ; str[i] != '\0' ; i ++ ){
        if(str[i] == ' '){
            esp = i; // pega a posição do ultimo espaço;
        }
        cont++;
    }
    printf("Tamanho : %d\n",cont-esp);
    char *retorna = NULL;
    retorna = (char *)malloc( (cont-esp) * sizeof(char));
    
    for( k=0, i=esp+1; i<cont; k++, i++){
        retorna[k] = str[i];
    }
    retorna[k] = '\0';
    return retorna;
}
//--------------------------------------
int main(){
    
    int i;
    char str[50];
    
    for ( i = 0 ; i < N ; i ++ ){
        printf("Digite seu nome: ");
        gets(str);
        char *ult = func(str);
        printf("Ultimo Nome: %s\n",ult);
        free(ult);
    }
    
}
