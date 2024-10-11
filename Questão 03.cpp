#include <stdio.h>
int main() {
    int n, i, j;
    float key;
            printf("digite o número de produtos: ");
    scanf("%d", &n);
    float preco[n];  
            printf("digite os preços dos produtos:\n");
    for (i = 0; i < n; i++) {
            scanf("%f", &preco[i]);
    }
    for (i = 1; i < n; i++) {
        key = preco[i];  
        j = i - 1;
        while (j >= 0 && preco[j] > key) {
            preco[j + 1] = preco[j];
            j--;
        }
        preco[j + 1] = key;  
    }
             printf("preços ordenados:\n");
    for (i = 0; i < n; i++) {
             printf("%.2f ", preco[i]);
    }
             printf("\n");
    return 0;
}

