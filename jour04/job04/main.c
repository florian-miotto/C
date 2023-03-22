// Maintenant que les pointeurs deviennent une seconde nature, réalisez une
// fonction my_swap qui a comme paramètres deux pointeurs vers des
// entiers et qui échange le contenu des deux entiers pointés.

// les entiers seront donnés par un scanf , ils seront ensuite transmis à votre
// fonction my_swap()

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

    my_swap(&num1, &num2);

    printf("Après l'échange : num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}



