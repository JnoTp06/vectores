#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100


void toapanta(int arr[], int n);

int main() {
    int toapanta_arr[MAX_SIZE];
    int n;

    printf("Ingrese la cantidad de numeros enteros a almacenar (maximo %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE || n <= 0) {
        printf("Cantidad invalida. Debe ser entre 1 y %d.\n", MAX_SIZE);
        return 1;
    }

    
    toapanta(toapanta_arr, n);

    
    printf("\nLos numeros almacenados son:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", toapanta_arr[i]);
    }
    printf("\n");

    return 0;
}


void toapanta(int arr[], int n) {
    srand(time(NULL));
    printf("\nLlenando el arreglo automaticamente con numeros aleatorios entre 0 y 100...\n");

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 101; 
    }
}

