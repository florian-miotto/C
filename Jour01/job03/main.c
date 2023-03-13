// Les maths c’est important c’est pourquoi vous devez faire dans votre
// fonction main deux variables , une nommé a de type int et une b de type
// int.

// assigner une chiffre à chacune des variables pour a = 10 et b = 2 et faites :

// - une division de a par b et afficher le résultat
// - une addition de a et b et afficher le résultat
// - une soustraction de a par b afficher le résultat
// - une multiplication de a par b afficher le résultat
// Vous devrez avoir un binaire nommé : my_calc
#include <stdio.h>
int main() {
    
    int a = 10;
    int b = 2;
    printf("a / b = %d", a / b);
    printf("a + b = %d", a + b);
    printf("a - b = %d", a - b);
    printf("a * b = %d", a * b);
    return 0;
}