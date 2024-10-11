#include <stdio.h>
int main() {
    int idade;
    printf("digite a idade: ");
    scanf("%d", &idade);
    switch (idade / 10) {
        case 0:         case 1: 
            printf("Menor de idade\n");
            break;
        case 2:         case 3:  
        case 4:         case 5:  
        case 6:  
            printf("Maior de idade\n");
            break;
        default: 
            printf("Idoso\n");
            break;
    }
    return 0;
}

