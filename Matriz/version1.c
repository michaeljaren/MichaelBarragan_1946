#include <stdio.h>

int main() {
    int filas = 5;
    int columnas = 4;
    float nrc_9404[5][4];

    // Encerar matriz
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            nrc_9404[i][j] = 0;

    // Leer datos con restricción de notas
    for (int i = 0; i < filas; i++) {
        printf("Ingrese notas del alumno #%d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            do {
                printf("Ingrese la nota del parcial %d : ", j + 1);
                scanf("%f", &nrc_9404[i][j]);
                if (nrc_9404[i][j] < 0 || nrc_9404[i][j] > 20) {
                    printf("Nota inválida. Debe estar entre 0 y 20.\n");
                }
            } while (nrc_9404[i][j] < 0 || nrc_9404[i][j] > 20);
        }
    }

    // Inicializar min y max con el primer elemento de cada parcial
    float suma_parcial[3] = {0};
    float min_parcial[3], max_parcial[3];
    
    for (int j = 0; j < 3; j++) {
        min_parcial[j] = nrc_9404[0][j];
        max_parcial[j] = nrc_9404[0][j];
    }
    
    // Calcular estadísticas
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < filas; i++) {
            suma_parcial[j] += nrc_9404[i][j];
            if (nrc_9404[i][j] < min_parcial[j]) min_parcial[j] = nrc_9404[i][j];
            if (nrc_9404[i][j] > max_parcial[j]) max_parcial[j] = nrc_9404[i][j];
        }
    }
    
    // Calcular promedio final por estudiante
    for (int i = 0; i < filas; i++) {
        nrc_9404[i][3] = (nrc_9404[i][0] + nrc_9404[i][1] + nrc_9404[i][2]) / 3;
    }
    
    float promedio_final = 0;
    for (int j = 0; j < 3; j++) {
        float promedio = suma_parcial[j] / filas;
        promedio_final += promedio;
        printf("Parcial %d - Promedio: %.2f, Minimo: %.2f, Maximo: %.2f\n", j + 1, promedio, min_parcial[j], max_parcial[j]);
    }
    
    promedio_final /= 3;
    printf("\nPromedio final del NRC 9404: %.2f\n", promedio_final);

    return 0;
}
