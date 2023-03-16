#include <stdio.h>
#include <stdlib.h>

void programa(){
    int matriz_quadrada_tam;
    scanf("%d", &matriz_quadrada_tam);
    
    int **matriz, tam = 2*matriz_quadrada_tam -1;
    
    matriz = (int**) malloc(tam*sizeof(int*)); //malloc aloca espaço na memoria  
    for (int i = 0; i < tam; i++) {
        matriz[i] = (int *) malloc(tam*sizeof(int));
    }

    int init = 0, fim = tam-1;

    while (matriz_quadrada_tam != 0) {
        for (int i = init; i <= fim; i++) {
            for (int j = init; j <= fim; j++) {
                if (i == init || i == fim || j == init || j == fim) {
                    matriz[i][j] = matriz_quadrada_tam;
                }
            }
        }
        init++;
        fim--;
        matriz_quadrada_tam--;
    }

    for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
               printf("%d ", matriz[i][j]);
            }
        printf("\n");
    }

    free(matriz);
   
}

int main(){
    programa();
    
    return 0;
}