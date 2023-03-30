/** Dionatan Rodrigues */
#include <stdio.h>
#include <stdbool.h>

int main()
{
   int vet[] = {7,4,2,9,5,3};
   int j = 0, aux=0, it, n=6;
   bool flag = false;

    for (it=1; it<n; it++) {
        aux = vet[it];
        j = it-1;
        while(j>=0 && aux<vet[j]){
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1]=aux;
  }

    for(int i=0;i<n;i++){
        printf("%d\t",vet[i]);
    }
    printf("\n");

   

    return 0;
}
