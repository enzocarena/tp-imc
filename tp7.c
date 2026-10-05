
#include <stdio.h>

#define TAM 5
#define MIN_CODIGO 1
#define MAX_CODIGO 999999999

int main()
{
	int codigos[TAM];
	float precios[TAM];
	
	int codigo;
	float precio;
	
	int i;
	int posicionMayor;
	int posicionMenor;
	
	printf("Ingrese %d productos, se solicitara el codigo y precio:\n", TAM);

	for (i = 0; i < TAM; i++)
	{
		do
		{
			printf("\nIngrese el codigo de barras (1-999999999): ");
			scanf("%d", &codigo);
			
			if (codigo < MIN_CODIGO || codigo > MAX_CODIGO)
			{
				printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
			}
			
		} while (codigo < MIN_CODIGO || codigo > MAX_CODIGO);
		
		codigos[i] = codigo;

		do
		{
			printf("Ingrese el precio: ");
			scanf("%f", &precio);
			
			if (precio < 0)
			{
				printf("Error. El precio no puede ser negativo\n");
			}
			
		} while (precio < 0);
		
		precios[i] = precio;
	}
	
	posicionMayor = 0;
	posicionMenor = 0;
	
	for (i = 1; i < TAM; i++)
	{
		if (precios[i] > precios[posicionMayor])
		{
			posicionMayor = i;
		}
		
		if (precios[i] < precios[posicionMenor])
		{
			posicionMenor = i;
		}
	}
	
	printf("\nCodigo       Precio\n");
	
	for (i = 0; i < TAM; i++)
	{
		printf("%9d %12.2f\n", codigos[i], precios[i]);
	}
	
	printf("\nMas caro: [%d] %.2f\n",
		   codigos[posicionMayor],
		   precios[posicionMayor]);
	
	printf("Mas barato: [%d] %.2f\n",
		   codigos[posicionMenor],
		   precios[posicionMenor]);
	
	return 0;
}
