/** Dionatan Rodrigues */
#include <stdio.h>
#include <stdbool.h>

int main()
{
   int vet[] = {7,4,2,9,5,3};
   int j = 0, aux=0, it;
   bool flag = false;

   while(!flag){
        for(it=0;it<6;it++){
            if(it!=0){
                if(vet[it]<vet[j]){
                    aux = vet[it];
                    vet[it] = vet[j];
                    vet[j] = aux;
                }else{
                    
                }
            }
            j = it-1;
        }
        if(it ==6)
            flag = true;
    }

    for(int i=0;i<6;i++){
        printf("%d\t",vet[i]);
    }
    printf("\n");

   

    return 0;
}
