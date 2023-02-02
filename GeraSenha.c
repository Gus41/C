#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//--------------------------------------
char * geraSenha(int n){
    
    int i;
    char *pointer = NULL;
    
    pointer = (char *)malloc(n*sizeof(char));
    
    if ( pointer == NULL ){
        printf("ERRO");
        exit(0);
    }
    srand(time(NULL));
    int aux;
    
    for ( i = 0 ; i < n; i ++){
        aux = rand() % 3;
        switch(aux){
            case 0:
                pointer[i] = 'a' + rand() % 26;
                break;
            case 1:
                pointer[i] = 'A' + rand() % 26;
                break;
            case 2:
                pointer[i] = '0' + rand() % 26;
                break;
        }
    }
    pointer[i] = '\0';
    
    return pointer;
}
//--------------------------------------
int main(){
    
    int n;
    char *pass = NULL;
    
    printf("Quantos caracteres a Senha terá: ");
    scanf("%d",&n);
    
    pass = geraSenha(n);
    
    printf("Sua senha: %s",pass);
    
    free(pass);
     
}
