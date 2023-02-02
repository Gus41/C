#include <stdio.h>
#include <stdlib.h>
//--------------------------------------
char * geraStr(int n, char c){
    
    int i;
    
    char *pointer = NULL;
    
    pointer = (char*)malloc((n+1)*sizeof(char));
    
    if ( pointer == NULL){
        printf("ERROR");
        exit(0);
    }
    
    for ( i = 0 ; i < n; i ++){
        pointer[i] = c;
    }
    
    pointer[i] = '\0';
    
    return pointer;
}
//--------------------------------------
int main(){
    
    char c;
    int n;
    
    printf("Digite um Numero: ");
    scanf("%d",&n);
    getchar();
    printf("Digite um Caractere: ");
    scanf("%c",&c);
    
    char *str = NULL;
    
    str = geraStr(n,c);
    
    printf("%s",str);
    
    free(str);
}
