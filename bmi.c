#include <stdio.h>

int main() {
    float peso, altura, bmi;

    // Solicitar al usuario el ingreso de peso y altura
    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    // Calcular el índice de masa corporal (BMI)
    // La fórmula es peso / (altura * altura) [1, 2]
    bmi = peso / (altura * altura);

    // Mostrar el resultado del índice
    printf("\nSu índice de masa corporal es: %.2f\n", bmi);

    // Mostrar la tabla de referencia solicitada en tu trabajo práctico [2, 3]
    printf("\n    Índice    |  Condición\n");
    printf("-----------------------------\n");
    printf("    <18.5     |  Bajo peso\n");
    printf(" 18.5 a 24.9  |  Normal\n");
    printf(" 25.0 a 29.9  |  Sobrepeso\n");
    printf("     >=30     |  Obesidad\n");

    return 0;
}