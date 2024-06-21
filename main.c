#include <stdio.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(void) {
    int valor;

    // Solicita ao usuário um valor
    printf("Digite um valor: ");
    scanf("%d", &valor);

    for(int i = 0; i < valor; i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}