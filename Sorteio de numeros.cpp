#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int quantidade_numeros;

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));
    
    printf("Quantos números você deseja sortear? ");
    scanf("%d", &quantidade_numeros);
    
    printf("Números sorteados:\n");
    
    // Gera e imprime os números aleatórios
    for (int i = 0; i < quantidade_numeros; i++) {
        printf("%d\n", rand());
    }
    
    return 0;
}

