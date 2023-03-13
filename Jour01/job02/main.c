// Dans votre fonction main créez une variable msg de type char et
// assignez lui un caractère.
// - Essayez maintenant de trouver la fonction putchar pour l’afficher en
// résultat lorsqu’on aura exécuté votre code
// le but est de générer à
// partir du fichier source (.c) main.c un fichier object (.o) main.o et avec ceux
// ci de générer un exécutable avec le nom suivant : myfirstexe
// gcc -c main.c -o main.o -o myfirstexe
#include <stdio.h>
int main() {
    char msg = 'a';
    putchar(msg);
    return 0;
}