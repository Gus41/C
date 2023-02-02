#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3 

//------------------------------------
int primo( int n ){
    
    int i;
    
    if ( n < 2 ){
        return 0;
    }
        for ( i = 2 ; i < n/2 ; i++ ){
            if (n % i == 0){
                return 0;
            }
        }
    
    return 1;
    
}

//------------------------------------
void leitura(int mat[N][N]){
    
    int i,j;
    srand(time(NULL));
    for ( i = 0 ; i < N ; i ++ ){
        for ( j = 0 ; j < N ; j ++ ){
            //printf("Valores para a Matriz: ");
            //scanf("%d",&mat[i][j]);
            mat[i][j] = rand() % 100;
        }
    }
}
//------------------------------------
void escreve(int mat[N][N]){
    
    int i,j;
    
    for ( i = 0 ; i < N ; i ++ ){
        printf("\n");
        for ( j = 0 ; j < N ; j ++ ){
            printf("%d ",mat[i][j]);
        }
    }
    
}
//------------------------------------
void process(int mat[N][N], int *linha, int *coluna, int *menor){
    
    int i,j;
    
    *menor = -1;
    *linha = -1;
    *coluna =-1;
    
    for ( i = 0 ; i < N ; i ++ ){
        for ( j = 0 ; j < N ; j ++){
            if ( primo(mat[i][j]) && mat[i][j] < *menor || *menor == -1 ){
                *menor = mat[i][j];
                *linha = i;
                *coluna = j;
            }
        }
    }
    
}
//------------------------------------
int main(){
    
    int *linha, *coluna, *menor;
    int mat[N][N];
    leitura(mat);
    escreve(mat);
    process(mat,&linha,&coluna,&menor);
    
    printf("\nMenor valor da matriz : %d\nLinha: %d\nColuna: %d",menor,linha,coluna);
}
