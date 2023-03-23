/** Dionatan Rodrigues */
#include <stdio.h>

int main()
{
   int vet[] = {7,3,2,9,1,8,0};
   int flag_houve_troca = 0;
   int tamanho_fixo = 7;
   int tamanho_otimizado = tamanho_fixo;
   int aux = 0;
   
   for(int j=0;j<tamanho_fixo;j++){
       for(int i=0;i<tamanho_otimizado-1;i++){
           if(vet[i] > vet[i+1]){
              aux = vet[i];
              vet[i] = vet[i+1];
              vet[i+1] = aux;
              flag_houve_troca = 1;
           }
       }
       tamanho_otimizado -= 1;
       if(flag_houve_troca==0)
            break; 
   }
   
   for(int i=0;i<tamanho_fixo;i++){
       printf("%d  ",vet[i]);
   }

    return 0;
}
