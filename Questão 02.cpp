#include <stdio.h>
int main() {
    int num, i;
        printf("digite um número inteiro positivo: ");
    scanf("%d", &num);
                if (num > 0) {
        printf("Números pares entre 1 e %d:\n", num);
        for (i = 1; i <= num; i++) {
                if (i % 2 == 0) {
        printf("%d ", i);
            }
        }
        printf("\n");
    } else {
          printf("Por favor, insira um número positivo.\n");
    }
    return 0;
}

