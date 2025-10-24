#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int toapanta[MAX_SIZE];
    int n, i;
    int num;

    
    printf("Ingrese la cantidad de numeros enteros a almacenar (maximo %d): ", MAX_SIZE);
    scanf("%d", &n);

   
    if (n > MAX_SIZE || n <= 0) {
        printf("Cantidad invalida. Debe ser entre 1 y %d.\n", MAX_SIZE);
        return 1;
    }

    
    printf("Ingrese %d numeros enteros entre 0 y 100:\n", n);
    for (i = 0; i < n; i++) {
        do {
            printf("Numero %d: ", i + 1);
            scanf("%d", &num);

            if (num < 0 || num > 100) {
                printf("Error: el numero debe estar entre 0 y 100. Intente de nuevo.\n");
            }

        } while (num < 0 || num > 100);  

        toapanta[i] = num; 
    }

    
    printf("\nLos numeros almacenados son:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", toapanta[i]);
    }
    printf("\n");

    return 0;
}
