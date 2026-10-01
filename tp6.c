#include <stdio.h>

#define PI 3.1416

float calcularAreaRectangulo(float longitud, float altura)
{
	return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura)
{
	return 2 * (longitud + altura);
}

float calcularAreaCirculo(float radio)
{
	return PI * radio * radio;
}

float calcularPerimetroCirculo(float radio)
{
	return 2 * PI * radio;
}

void imprimirResultados(float area, float perimetro)
{
	printf("El area es: %.2f\n", area);
	printf("El perimetro es: %.2f\n", perimetro);
}

int main()
{
	int figura;
	float longitud, altura, radio;
	float area, perimetro;
	
	printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo): ");
	scanf("%d", &figura);
	
	while (figura != 1 && figura != 2)
	{
		printf("Opcion incorrecta. Ingrese 1 para rectangulo o 2 para circulo: ");
		scanf("%d", &figura);
	}
	
	if (figura == 1)
	{
		printf("\nOpcion de rectangulo seleccionada\n");
		
		printf("\nIngrese la longitud del rectangulo: ");
		scanf("%f", &longitud);
		
		printf("Ingrese la altura del rectangulo: ");
		scanf("%f", &altura);
		
		area = calcularAreaRectangulo(longitud, altura);
		perimetro = calcularPerimetroRectangulo(longitud, altura);
		
		imprimirResultados(area, perimetro);
	}
	else
	{
		printf("\nOpcion de circulo seleccionada\n");
		
		printf("\nIngrese el radio del circulo: ");
		scanf("%f", &radio);
		
		area = calcularAreaCirculo(radio);
		perimetro = calcularPerimetroCirculo(radio);
		
		imprimirResultados(area, perimetro);
	}
	
	return 0;
}
