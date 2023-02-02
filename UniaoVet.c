#include <stdio.h>
#include <stdlib.h>

int * uni(int n1, int n2, int *vet1, int *vet2, int *n){
    
    int i,j;
    int *saida = NULL;
    int cont = 15;
    
    saida = (int *)malloc(cont*sizeof(int));
    
    if ( saida == NULL ){
        printf("ERRO NA ALOCAÇÃO");
        exit(0);
    }
    
    for ( i = 0 ; i < n1 ; i ++ ){
        saida[i] = vet1[i];
    }
    
    int k;
    
    for ( k = 0 ; k < n2 ; k++){
        for ( j = 0 ; j < n1; j ++) {
            if ( saida [j] != vet2[k] ){
                saida[i] = vet2[k];
                i++;
            }
        }
    }
    *n = cont;
    return saida;
}

int main(){
    
    int i;
    int n1 = 5;
    int n2 = 5;
    int vet1[] = { 1, 3, 5, 6, 7, };
    int vet2[] = { 1, 3, 4, 6, 8, };
    int n = n1+n2; //tamanho da saida 
    
    int *saida = NULL;
    
    saida = uni(n1,n2,vet1,vet2,&n);
    
    for ( i = 0 ; i < n ; i ++ ){
        printf("%d\t",saida[i]);
    }
    
    free(saida);
}
