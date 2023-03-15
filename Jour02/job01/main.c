// Créer des fonctions pour chaque types d’opération basique :

// - “*” votre fonction s’appellera my_mul
// - “+” votre fonction s’appellera my_add
// - “-” votre fonction s’appellera my_sub
// - “/” votre fonction s’appellera my_div
// - “%” votre fonction s’appellera my_mod

// Chacune des opérations affichera le résultat de son opérations

// elles seront à appelés dans votre main.c

// Votre binaire se nommera : my_first_func
#include <stdio.h>
#include <stdlib.h>




int my_mul(int a, int b) {
    printf("a * b = %d ", a * b);
    return 0;
}   
int my_add(int a, int b) {
    printf("a + b = %d ", a + b);
    return 0;
}
int my_sub(int a, int b) {
    printf("a - b = %d ", a - b);
    return 0;

}
int my_div(int a, int b) {
    printf("a / b = %d ", a / b);
    return 0;
}
int my_mod(int a, int b) {
    
    printf("a %% b = %d\n", a % b);
    return 0;
}

int main( ) {
    int a, b;
    printf("tapper un nombre a : ");
    scanf("%d", &a);
    printf("tapper un nombre b : ");
    scanf("%d", &b);
    my_mul(a, b);
    my_add(a, b);
    my_sub(a, b);
    my_div(a, b);
    my_mod(a, b);
    return 0;
}