#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char str[15] = "Teste Ne";
	int vet[5] = { 1,2,3,4,5};
	
	FILE *pont;
	
	pont = fopen("Binario.bin","wb");
	
	if ( pont == NULL){
		printf("EROOR");
	} else {
		printf("Arquivo criado com sucesso");
		
	}
	
	fwrite(str,sizeof(char),15,pont);
	fwrite(vet,sizeof(int),5,pont);
	fclose(pont);
}
