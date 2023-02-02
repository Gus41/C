#include<stdio.h>
#include<stdlib.h>
//-------------------------------
int * fibon(int n){
    int i;
    int *vet;
    
    vet = (int *)malloc(n*sizeof(int));
    
    for ( i = 0; i < n; i ++){
        if ( i < 2 ){
            vet[i] = i;
        } else{
           vet[i] = vet[i-1] + vet[i-2];
        }
    }
    
    return vet;
}
//-------------------------------
int main(){
    
    int n,i;
    int *pointer = NULL;
    
    printf("Digite um Numero: ");
    scanf("%d",&n);
    
    pointer = fibon(n);
    
    for ( i = 0 ; i < n; i ++ ){
        printf("%d ",pointer[i]);
    }
    free(pointer);
}
