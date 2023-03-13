// Et si nos paramètres étaient renseignés par l’utilisateur !?

// Utiliser la fonction scanf() pour permettre la récupération des paramètres
// via le terminal.

// Adapter votre code pour accueillir ma fonction scanf() (notamment vos
// variable)

// et afficher le résultat des opérations comme précédemment

// Vous devrez avoir un binaire nommé : my_calc_params

#include <stdio.h>
#include <gmp.h>
int  main() {
    
    double a,b ;
    printf("tapper un nombre a : ");
    scanf("%lf", &a);
    printf("tapper un nombre b : ");
    scanf("%lf", &b);
    printf("a / b = %.3f ", a / b);
    printf("a + b = %.3f ", a + b);
    printf("a - b = %.3f ", a - b);
    printf("a * b = %.3f ", a * b);
    return 0;
}