// Écrire un programme qui va utiliser les pointeurs pour lire et additionner les
// valeurs de deux variables int et stocker leur résultat
// nom de votre binaire : my_pointer_add

#include <stdio.h>

int add_pointer_values(int *ptr1, int *ptr2) {
    int sum = *ptr1 + *ptr2;
    return sum;
}

#include <stdio.h>

int add_binary_pointer_values(int *ptr1, int *ptr2) {
    int binary_sum = *ptr1 | *ptr2;
    return binary_sum;
}

int main() {
    int num1, num2;

    printf("Entrez la valeur de num1 : ");
    scanf("%d", &num1);

    printf("Entrez la valeur de num2 : ");
    scanf("%d", &num2);

    int binary_sum = add_binary_pointer_values(&num1, &num2);

    printf("La somme binaire de %d et %d est : %d\n", num1, num2, binary_sum);
printf("La somme de %d et %d est : %d\n", num1, num2, add_pointer_values(&num1, &num2));
    return 0;
}



