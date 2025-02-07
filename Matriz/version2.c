#include <stdio.h>

int main() {
    int filas = 5; // Cantidad de alumnos
    int columnas = 3; // Cantidad de parciales
    float nrc_9404[5][4]; // Matriz para las notas y el promedio final

    // Ingresar notas
    for (int i = 0; i < filas; i++) {
        printf("Ingrese notas del alumno #%d:\n", i + 1);
        for (int j = 0; j < columnas; j++) {
            do {
                printf("Ingrese la nota del parcial %d: ", j + 1);
                scanf("%f", &nrc_9404[i][j]);
                if (nrc_9404[i][j] < 0 || nrc_9404[i][j] > 20) {
                    printf("Nota invalida. Debe estar entre 0 y 20.\n");
                }
            } while (nrc_9404[i][j] < 0 || nrc_9404[i][j] > 20);
        }
    }

    int opcion = 0;

    // Ciclo para mostrar el menú y ejecutar las opciones
    while (1) {
        printf("\nMENU\n");
        printf("1. Promedios de cada parcial\n");
        printf("2. Notas minimas por parcial\n");
        printf("3. Notas maximas por parcial\n");
        printf("4. Promedio final del NRC 9404\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: { // Promedios por parcial
                float suma_parcial[3] = {0};
                for (int j = 0; j < 3; j++) {
                    for (int i = 0; i < filas; i++) {
                        suma_parcial[j] += nrc_9404[i][j];
                    }
                }
                for (int j = 0; j < 3; j++) {
                    float promedio = suma_parcial[j] / filas;
                    printf("Promedio del Parcial %d: %.2f\n", j + 1, promedio);
                }
                break;
            }
            case 2: { // Notas minimas por parcial
                float min_parcial[3] = {20, 20, 20}; // Inicializar con el valor máximo
                for (int j = 0; j < 3; j++) {
                    for (int i = 0; i < filas; i++) {
                        if (nrc_9404[i][j] < min_parcial[j]) {
                            min_parcial[j] = nrc_9404[i][j];
                        }
                    }
                }
                for (int j = 0; j < 3; j++) {
                    printf("Nota minima del Parcial %d: %.2f\n", j + 1, min_parcial[j]);
                }
                break;
            }
            case 3: { // Notas maximas por parcial
                float max_parcial[3] = {0}; // Inicializar con el valor mínimo
                for (int j = 0; j < 3; j++) {
                    for (int i = 0; i < filas; i++) {
                        if (nrc_9404[i][j] > max_parcial[j]) {
                            max_parcial[j] = nrc_9404[i][j];
                        }
                    }
                }
                for (int j = 0; j < 3; j++) {
                    printf("Nota maxima del Parcial %d: %.2f\n", j + 1, max_parcial[j]);
                }
                break;
            }
            case 4: { // Promedio final
                float promedio_final = 0;
                for (int i = 0; i < filas; i++) {
                    nrc_9404[i][3] = (nrc_9404[i][0] + nrc_9404[i][1] + nrc_9404[i][2]) / 3;
                    promedio_final += nrc_9404[i][3];
                }
                promedio_final /= filas;
                printf("Promedio final del NRC 9404: %.2f\n", promedio_final);
                break;
            }
            case 5:
                printf("Saliendo del programa.\n");
                return 0; 
            default:
                printf("Opcion invalida. Por favor, intente de nuevo.\n");
        }
    }

    return 0;
}
