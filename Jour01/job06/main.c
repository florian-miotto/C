// On laisse personne derrière du coup il faut maintenant adapter notre
// my_calc au type float .

// Pour a = 12.14 et b = 26.76

// vous afficherez le résultat de chaque calcul avec une précision sur les
// résultat de trois chiffres après la virgule soit “11.2 + 12.3 = 23.500”

// Vous devrez avoir un binaire nommé : my_calc_float
#include <stdio.h>
#include <gmp.h>
int  main() {
    
    double a = 520000;
    double b = 100000;
    printf("a / b = %.2f ", a / b);
    printf("a + b = %.2f ", a + b);
    printf("a - b = %.2f ", a - b);
    printf("a * b = %.2f ", a * b);
    return 0;
}