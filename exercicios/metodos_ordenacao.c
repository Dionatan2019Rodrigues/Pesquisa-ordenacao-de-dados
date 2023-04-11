/** Dionatan Rodrigues */
#include <stdio.h>
#include <stdbool.h>

void imprime_vet(int *v, int tam){
    for(int i=0;i<tam;i++){
        printf("%d\t",v[i]);
    }
    printf("\n");
}

void bubble_sort(int *v, int tam){
    bool flag_houve_troca = false;
    int tam_otimizado = tam;
    int aux = 0;

    for(int j=0;j<tam;j++){
       for(int i=0;i<tam_otimizado-1;i++){
           if(v[i] > v[i+1]){
              aux = v[i];
              v[i] = v[i+1];
              v[i+1] = aux;
              flag_houve_troca = true;
           }
       }
       tam_otimizado -= 1;
       if(!flag_houve_troca)
            break; 
   }
}

void insercao_direta(int *v, int tam){
    int j=0, aux = 0;

    for (int i=1; i<tam; i++) {
        aux = v[i];
        j = i-1;
        while(j>=0 && aux<v[j]){
            v[j+1] = v[j];
            j--;
        }
        v[j+1]=aux;
    }
}

void selecao_direta(int *v, int tam){
    int pos_menor, aux=0;

    for(int i=0;i<tam-1;i++){
        pos_menor = i;
        for(int j=i+1;j<tam;j++){
            if(v[j]<v[pos_menor])
                pos_menor = j; 
        }
        aux = v[i];
        v[i] = v[pos_menor];
        v[pos_menor] = aux;
    }
}

void shell_sort(int *v, int tam){
    int aux, j, intervalo;

    for(intervalo=(tam+1)/2;intervalo>=1;intervalo/=2){
        for(int i=intervalo;i<tam;i++){
            aux = v[i];
            j = i - intervalo;
            while((j >= 0)&&(aux < v[j])){
               v[j+intervalo] = v[j];
               j-= intervalo;
            }
            v[j+intervalo]=aux;
        }
    }
}

void quick_sort(int *v, int tam){
    int i, j;

    do{

    }while(i<j);
}

int main()
{
    int v[] = {5,7,10,3,9,8,6,1,0,2,4};
    int tam = 11;  
    
    imprime_vet(v,tam);
    //bubble_sort(v,tam);
    //insercao_direta(v,tam);
    //selecao_direta(v,tam);
    //shell_sort(v,tam);
    quick_sort(v,tam);
    imprime_vet(v,tam);

    return 0;
}
