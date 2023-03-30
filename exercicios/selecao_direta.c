/** Dionatan Rodrigues */
#include <stdio.h>
#include <stdbool.h>

int main()
{   
    int vet[] = {9,4,6,8,1,5}, tam = 6, pos_menor, aux = 0;

    for(int i=0;i<tam-1;i++){
        pos_menor = i;
        for(int j=i+1;j<tam;j++){
            if(vet[j]<vet[pos_menor]){
                pos_menor = j; 
            }
        }
        aux = vet[i];
        vet[i] = vet[pos_menor];
        vet[pos_menor] = aux;
        
    }

    for(int i=0;i<tam;i++){
        printf("%d\t",vet[i]);
    }
    printf("\n");

    return 0;
}
