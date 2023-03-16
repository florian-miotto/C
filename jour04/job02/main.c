// Écrire un programme qui va utiliser les pointeurs pour lire et additionner les
// valeurs de deux variables int et stocker leur résultat
// nom de votre binaire : my_pointer_add

#include <stdio.h>
#include <stdbool.h>
#include <string.h>


void pointer_add(int a, int b, int *result) {
    *result = a + b;
}

int main() {
    int num1, num2, sum;

    printf("Entrez la valeur de num1 : ");
    scanf("%d", &num1);

    printf("Entrez la valeur de num2 : ");
    scanf("%d", &num2);

    pointer_add(num1, num2, &sum);

    printf("La somme de %d et %d est : %d\n", num1, num2, sum);

    return 0;
}

