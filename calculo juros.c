#include <stdio.h>

int main(){
	
	float juros, taxajuros, valorfinal, valorinicial;
	
	printf("Insira o valor da divida: ");
	scanf("%f", &valorinicial);
	printf("\nInsira o valor da taxa de juros mensal (valor decimal): ");
	scanf("%f", &taxajuros);
	
	juros = valorinicial * taxajuros;
	valorfinal = valorinicial + juros;
	
	printf("Total de juros: R$ %.2f", juros);
	printf("\nValor total a ser pago: R$ %.2f", valorfinal);

	
}
