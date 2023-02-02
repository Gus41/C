#include <stdio.h>
#include <stdlib.h>
#define N 3 
/* 2)  Faça uma função que receba por parâmetro um valor inteiro n
e retorne um vetor de n inteiros alocado dinamicamente com os n primeiros 
números primos maiores que 100. */

//------------------------------------
int primo( int n ){
    
    int i;
    
    if ( n <= 1 ){
        return 0;
    }
        for ( i = 2 ; i <= n/2 ; i++ ){
            if (n % i == 0){
                return 0;
            }
        }
    
    return 1;
    
}
//------------------------------------
int * process( int n ){
    
    int i;
    int num = 101;
    int *vet = NULL;
    
    vet = (int *)malloc(n*sizeof(int));
    
    if ( vet = NULL ){
        printf("ERROR");
        exit(0);
    }
    
    
    i = 0;
    
    while( i < n ){
        if ( primo(num)){
            vet[i] = num;
            i++;
        }
        num+=2;
       
    }
    
    return vet;
}
int main(){
    
    int n,i;
    int *vet = NULL;
    
    printf("Digite um Numero :");
    scanf("%d",&n);
    vet = process(n);
    
    for ( i = 0 ; i < n ; i ++ ){
        printf("\n%d",vet[i]);
    }
    free(vet);
    
}
