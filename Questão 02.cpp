#include <stdio.h>
int main() {
    int num, i;
        printf("digite um n�mero inteiro positivo: ");
    scanf("%d", &num);
                if (num > 0) {
        printf("N�meros pares entre 1 e %d:\n", num);
        for (i = 1; i <= num; i++) {
                if (i % 2 == 0) {
        printf("%d ", i);
            }
        }
        printf("\n");
    } else {
          printf("Por favor, insira um n�mero positivo.\n");
    }
    return 0;
}

