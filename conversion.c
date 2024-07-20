/* En el proceso de codificación de una página web se emplea una estrategia de encriptado en la que se toma
 * un valor entero y se transforma en el número correspondiente de su valor binario inverso. Dado un número 
 * entero, se debe transformar a binario, invertir dicho valor binario y después regresar su correspondiente
 * número en base 10. 
 
 * Ejemplo: 97 (entrada), equivale a 1100001 en binario. Si lo invertimos obtenemos 1000011, que equivale a 67 en base 10.
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int option = 0, number = 0, quotient = 0, residue[32], i = 0, count = 0, flag = 0;
	
	do{
		printf("\n\nEnter a number: ");
		scanf("%d", &number);
		
		printf("\n\n1)See binary number \n2)See inverted binary \n3)See inverted decimal number \n4)Exit \n\nChoose an option: ");
		scanf("%d", &option);
		
		switch(option){
			
			case 1:
				
			
			case 2:
				
				while(number != 1){
					
					residue[count] = number%2;
					//printf("%d", residue[count]);
					number = number/2;
					count += 1;
				}
	
				residue[count] = 1;	
				printf("\nTu numero binario es: ");
				
				for(i=0; i<=count; i++){
					printf("%d", residue[i]);	
				}
				
				for(i=0; i<=count; i++){
					residue[i] = 0;	
				}
				count = 0;
			
				break;
		}
	}while(option != 4);
	
	return 0;
}
