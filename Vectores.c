#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100

int main() {
    int toapanta[MAX_SIZE];
    int n, i;

    printf("Ingrese la cantidad de numeros enteros a almacenar (maximo %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE || n <= 0) {
        printf("Cantidad invalida. Debe ser entre 1 y %d.\n", MAX_SIZE);
        return 1;
    }

   
    srand(time(NULL));

    printf("\nLlenando el arreglo automaticamente con numeros aleatorios entre 0 y 100...\n");

    
    for (i = 0; i < n; i++) {
        toapanta[i] = rand() % 101; 
    }

    
    printf("\nLos numeros almacenados son:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", toapanta[i]);
    }
    printf("\n");

    return 0;

}
