#include <stdio.h>
#include <stdlib.h>
//------------------------------- struct canditado
struct cand {
    char nome[50];
    float score;
};
typedef struct cand CAND;
//------------------------------- leitura
void leitura(CAND *f, int m){
    
    int i;
    getchar();
    for ( i = 0 ; i < m ; i ++ ){
        printf("Digite o nome: ");
        gets(f[i].nome);
        f[i].score = rand() % 100;
        //printf("Digite o score: ");
        //scanf("%f",&f[i].score);
        //getchar();
    }
}
//------------------------------- escreve 

void escreve( CAND *f, int m ){
    
    int i;
    
    for ( i = 0 ; i < m ; i ++ ){
        
        printf("\nCANDIDATO : %d\n",i+1);
        printf("%s\t",f[i].nome);
        printf("pontuação : %f\n",f[i].score);
    }
}
//-------------------------------vetor melhores
CAND *melhoresc(CAND *f, int n, int m){
    
    int i,j;
    CAND *retorna;
    CAND aux;
    
    retorna = (CAND *)malloc(n*sizeof(CAND));
    for ( i = 0 ; i < m ; i ++ ){
        for ( j = 0 ; j < m-1-i ; j ++ ){
            if (f[j].score < f[j+1].score){
                aux = f[j];
                f[j] = f[j+1];
                f[j+1] = aux;
            }
        }
    }
    
    for ( i = 0 ; i < n ; i ++ ){
        retorna[i] = f[i];
    }
    
    return retorna;
}
//-------------------------------main
int main(){
    
    int n,m,i;
    CAND *melhores;
    
    printf("Quantidade de canditados: ");
    scanf("%d",&m);
    printf("Quantos canditados serão mostrados: ");
    scanf("%d",&n);
    
    CAND f[m];
    
    leitura(f,m);
    escreve(f,m);
    
    melhores = melhoresc(f,n,m);
    
    printf("MELHORES canditados :\n");
    for ( i = 0 ; i < n ; i ++ ){
        printf("Nome : %s \n",f[i].nome);
        printf("Pont : %f \n",f[i].score);
    }
    
    free(melhores);
    
}
