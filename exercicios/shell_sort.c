/** Dionatan Rodrigues */
#include <stdio.h>

int main()
{
   int vet[] = {5,7,10,3,9,8,6,1,0,2,4};
   int tam = 11, aux, j, intervalo;

    for(intervalo=(tam+1)/2;intervalo>=1;intervalo/=2){
        for(int i=intervalo;i<tam;i++){
            aux = vet[i];
            j = i - intervalo;
            while((j >= 0)&&(aux < vet[j])){
               vet[j+intervalo] = vet[j];
               j-= intervalo;
            }
            vet[j+intervalo]=aux;
        }
    }

    for(int k=0;k<tam;k++){
        printf("%d\t",vet[k]);
    }
    printf("\n");

    return 0;
}
