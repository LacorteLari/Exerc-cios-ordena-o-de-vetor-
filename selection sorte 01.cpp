#include<stdio.h>

int main(){
    
    int busca[10] = {20,99,70,44,2,119,80,15,1,3};
    int auxiliar;
    int menor;

    for(int i = 0; i < 10; i++){
        
        menor = i; 
        
        for(int j = i + 1; j < 10; j++){
            
            if(busca[j] < busca[menor]){
                menor = j; 
            }
        }

    
        auxiliar = busca[i];
        busca[i] = busca[menor];
        busca[menor] = auxiliar;
    }

   	printf("A seguir o Vetor ordenado de forma crescente: \n");

    for(int i = 0; i < 10; i++){
        printf("%d ", busca[i]);
    }

   

    return 0;
}
