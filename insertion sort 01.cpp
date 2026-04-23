#include<stdio.h>

int main(){

    int busca[10] = {20,99,70,44,2,119,80,15,1,3};
    int item ;

    for(int i = 1; i < 10; i++){
        
        item = busca[i];

        for(int j = i - 1; j >= 0 && busca[j] > item; j--){
            busca[j+1] = busca[j];   
            busca[j] = item;        
    }

  	printf("A seguir o Vetor ordenado de forma crescente: \n");

    for(int i = 0; i < 10; i++){
        printf("%d ", busca[i]);
    }

    printf("\n");

    return 0;
	}
}
