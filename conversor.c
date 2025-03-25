#include <stdio.h>

// Definir las tasas de conversión aproximadas (estas pueden cambiar)
#define USD_TO_GTQ 7.7
#define EUR_TO_GTQ 8.5
#define GTQ_TO_USD 0.13
#define EUR_TO_USD 1.1
#define GTQ_TO_EUR 0.12
#define USD_TO_EUR 0.9

void convertir(int opcion) {
    float cantidad, resultado;

    // Pide al usuario que ingrese la cantidad a convertir
    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:  // Convertir de Quetzales a Dólares
            resultado = cantidad * GTQ_TO_USD;
            printf("%.2f Quetzales equivalen a %.2f Dólares.\n", cantidad, resultado);
            break;

        case 2:  // Convertir de Quetzales a Euros
            resultado = cantidad * GTQ_TO_EUR;
            printf("%.2f Quetzales equivalen a %.2f Euros.\n", cantidad, resultado);
            break;

        case 3:  // Convertir de Dólares a Quetzales
            resultado = cantidad * USD_TO_GTQ;
            printf("%.2f Dólares equivalen a %.2f Quetzales.\n", cantidad, resultado);
            break;

        case 4:  // Convertir de Dólares a Euros
            resultado = cantidad * USD_TO_EUR;
            printf("%.2f Dólares equivalen a %.2f Euros.\n", cantidad, resultado);
            break;

        case 5:  // Convertir de Euros a Quetzales
            resultado = cantidad * EUR_TO_GTQ;
            printf("%.2f Euros equivalen a %.2f Quetzales.\n", cantidad, resultado);
            break;

        case 6:  // Convertir de Euros a Dólares
            resultado = cantidad * EUR_TO_USD;
            printf("%.2f Euros equivalen a %.2f Dólares.\n", cantidad, resultado);
            break;

        default:
            printf("Opción no válida.\n");
    }
}

int main() {
    int opcion;

    do {
        // Menú de opciones
        printf("\nConversor de Monedas:\n");
        printf("1. Convertir de Quetzales a Dólares\n");
        printf("2. Convertir de Quetzales a Euros\n");
        printf("3. Convertir de Dólares a Quetzales\n");
        printf("4. Convertir de Dólares a Euros\n");
        printf("5. Convertir de Euros a Quetzales\n");
        printf("6. Convertir de Euros a Dólares\n");
        printf("7. Salir\n");

        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion != 7) {
            convertir(opcion);
        }

    } while (opcion != 7);

    printf("Gracias por usar el conversor de monedas.\n");

    return 0;
}
