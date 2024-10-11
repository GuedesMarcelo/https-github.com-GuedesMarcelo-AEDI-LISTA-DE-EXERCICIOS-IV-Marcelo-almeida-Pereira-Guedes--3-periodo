#include <stdio.h>
int main() {
    int n, i, j, maxIndex;
    float temp;
          printf("digite o número de alunos: ");
    scanf("%d", &n);
    float notas[n];  
          printf("digite as notas dos alunos:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
    }
    for (i = 0; i < n - 1; i++) {
        maxIndex = i;  
        for (j = i + 1; j < n; j++) {
            if (notas[j] > notas[maxIndex]) {
                maxIndex = j;  
            }
        }
        if (maxIndex != i) {
            temp = notas[i];
            notas[i] = notas[maxIndex];
            notas[maxIndex] = temp;
        }
    }
    printf("notas em ordem decrescente:\n");
    for (i = 0; i < n; i++) {
           printf("%.2f ", notas[i]);
    }
            printf("\n");
    return 0;
}

