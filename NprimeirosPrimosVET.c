#include<stdio.h>
#include<stdlib.h>
//-------------------------------------
int * geravet(int n){
    
    int *pointer = NULL;
    int i,j,aux;
    
    pointer = (int *)malloc(n*sizeof(int));
    
    if ( pointer == NULL ){
        printf("ERROR");
        exit(0);
    }
    int num = 5;
    i = 0;
    while(i<n){
        if( i < 2 ){
            pointer[i] = i + 2;
            i++;
        } else{
            aux = 1;
            for ( j = 0 ; j < i-1; j ++){
                if ( num % pointer[j] == 0){
                    aux = 0;
                }
            }
            if ( aux == 1){
                pointer[i] = num;
                i++;
            }
            num += 2;
        }
    }
    
    return pointer;
}
//-------------------------------------
int main(){
    
    int i,n;
    int *vet = NULL;
    
    printf("Digite um Numero: ");
    scanf("%d",&n);
    
    vet = geravet(n);
    
    for ( i = 0 ; i < n ; i ++ ){
        printf("%d ",vet[i]);
    }
    
    free(vet);
}
