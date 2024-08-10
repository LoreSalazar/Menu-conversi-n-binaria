/* En el proceso de codificación de una página web se emplea una estrategia de encriptado en la que se toma
 * un valor entero y se transforma en el número correspondiente de su valor binario inverso. Dado un número 
 * entero, se debe transformar a binario, invertir dicho valor binario y después regresar su correspondiente
 * número en base 10. 
 
 * Ejemplo: 97 (entrada), equivale a 1100001 en binario. Si lo invertimos obtenemos 1000011, que equivale a 67 en base 10.
*/

/*ESTO SE HA AGREGADO DESDE GITHUB*/

/*ESTO ES UNA PRUEBA PARA VERIFICAR LA VALIDEZ DE LA LLAVE CON SSH*/
/*ESTA ES UNA PRUEBA A�ADIDA PARA EL PULL REQUEST*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int option = 0, number = 0, quotient = 0, residue[32], i = 0, count = 0, flag = 0, number2 = 0;
	int convertion[15]={0, 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192};
	int binary[32], f = 0, sum = 0, j = 0;
	
	printf("\n1)Start \n2)Exit \n\nChoose an option: "); //\2)Exit
	scanf("%d", &number2);
	
	if(number2 == 1){
		
		do{
			printf("\n\nEnter a number: ");
			scanf("%d", &number);
			
			printf("\n\n1)See binary number \n2)See inverted binary \n3)See inverted decimal number \n4)Exit \n\nChoose an option: ");
			scanf("%d", &option);
			
			switch(option){
				
				case 1:
					
					if(number == 0){
						printf("Your binary number is: 0");	
					}else{
						while(number != 1){
						
							residue[count] = number%2;
							number = number/2;
							count += 1;
						}
						
						residue[count] = 1;	
						printf("Your binary number is: ");
						
						count += 1;
						
						while(count--){
							printf("%d", residue[count]);	
						}
						count = 0;
					
						break;	
						}
				
				case 2:
					
					while(number != 1){
						
						residue[count] = number%2;
						//printf("%d", residue[count]);
						number = number/2;
						count += 1;
					}
					//Impresión del número en binario
					residue[count] = 1;	
					printf("\nYour inverted binary number is: ");
					
					for(i=0; i<=count; i++){
						printf("%d", residue[i]);	
					}
					//Limpieza del arreglo para mostrar un nuevo binario
					for(i=0; i<=count; i++){
						residue[i] = 0;	
					}
					count = 0;
				
					break;
					
				case 3:
					
					while(number != 1){
						
						residue[count] = number%2;
						number = number/2;
						count += 1;
					}
					
					residue[count] = 1;	
					count += 1;
					
					while(count--){
						binary[f] = residue[count];
						j += 1;
						
						if(binary[f] == 0){
							sum = sum + 0;
							//printf("\nSuma: %d", sum);
						}else{
							sum = convertion[j] + sum;
							//printf("\nSuma: %d", sum);
						}
					}
				
					printf("\nYour decimal inverted number is: %d", sum);
					count = 0;
					f = 0;
					j = 0;
					sum = 0;
				
					break;		
				}
			}while(option != 4);	
	}

	
	return 0;
}
