#include <stdio.h>
#include <stdlib.h>
#define N 3
//-----------------------------
int pri( int n ){
    int i;
    
    if ( n < 2 ){
        return 0;
    }
    
    for ( i = 2 ; i <= n/2 ; i ++ ){
        if ( n % i == 0 ){
            return 0;
        }
    }
    
    return 1;
}
//-----------------------------
void process (int mat[N][N] , int *abaixo, int *acima){
    
    int i,j;
    *acima = 0;
    *abaixo = 0;
    for ( i = 0 ; i < N ; i ++ ){
        for ( j = 0 ; j < N ; j ++ ){
            if (i > j && pri(mat[i][j])){
                *acima++;
            }
            if (i < j && pri(mat[i][j])){
                *abaixo++;
            }
        }
    }
    
}
void escreve(int mat[N][N]){
    int i,j;
    
    for ( i = 0 ; i < N ; i ++ ){
        for ( j = 0 ; j < N ; j ++ ){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
//-----------------------------
int main(){
    
    int i,j;
    int mat[N][N];
    int abaixo, acima;
    
    
    for ( i = 0 ; i < N ; i ++ ){
        for ( j = 0 ; j < N ; j ++ ){
            //printf("Valores para a Matriz: ");
            //scanf("%d",&mat[i][j]);
            mat[i][j] = rand() %1000;
        }
    }
    
    escreve(mat);
    process(mat,&abaixo,&acima);
    
    printf("Acima : %d\nAbaixo : %d",acima,abaixo);
    
    
    
}
