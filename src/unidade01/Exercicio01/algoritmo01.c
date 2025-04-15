#include <stdio.h>
#include <stdbool.h>

bool elementosSaoUnicos(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[i] == vetor[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5}; // teste com elementos únicos e inventados, já que a questão não deu
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    if (elementosSaoUnicos(vetor, tamanho)) {
        printf("Todos os elementos são únicos.\n");
    } else {
        printf("Existem elementos repetidos.\n");
    }
    return 0;
}