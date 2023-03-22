// Faites une fonction qui prend en paramètres un tableau d’entier, et 2
// pointeurs vers des entiers min et max. La fonction doit définir quels sont les
// min et max et les renvoyer dans leurs pointeurs respectifs.
// pour un tableau comprenant {10, 22 ,1 ,25 ,85 ,12 ,35 ,264 ,145}
// afficher les deux résultat à la fin

// nom de votre binaire : my_pointer_min_max

#include <stdio.h>

void my_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Entrez la valeur de num1 : ");
    scanf("%d", &num1);

    printf("Entrez la valeur de num2 : ");
    scanf("%d", &num2);

    printf("Avant l'échange : num1 = %d, num2 = %d\n", num1, num2);
    printf("Adresse de num1 : %p, Adresse de num2 : %p\n", (void *)&num1, (void *)&num2);

    my_swap(&num1, &num2);

    printf("Après l'échange : num1 = %d, num2 = %d\n", num1, num2);
    printf("Adresse de num1 : %p, Adresse de num2 : %p\n", (void *)&num1, (void *)&num2);

    return 0;
}


