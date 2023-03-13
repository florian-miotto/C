// Reprenez votre my_calc précédent et exécutez le pour a = 520000 et b =
// 100000

// Houston nous avons un problème ! the truth

// Adapter votre code pour afficher le bon résultat à chaque opération.
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