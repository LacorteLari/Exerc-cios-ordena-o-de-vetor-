	#include<stdio.h>

	int main(){
	
	int busca[10] = {20,99,70,44,2,119,80,15,1,3} ;
	int auxiliar ;
	
	for( int i=0; i<10; i++){
		for(int j=0 ; j < 9; j++){
			
			if(busca[j] > busca[j+1]){
			
		       	auxiliar = busca[j];
                busca[j] = busca[j+1];
                busca[j+1] = auxiliar;
            }
		}
	}
	
	// saída vetor ordenado
	
		printf("A seguir o Vetor ordenado de forma crescente: \n");
		 
		for( int i=0; i<10; i++){
		printf("%d", busca[i]);
		
         	printf("\n");
		
 	}
        return 0;
	}
 
