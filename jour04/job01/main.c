// Aujourd’hui c’est pointeur. Le but de ce premier exercice est d’afficher les
// adresses mémoires en hexadécimale des variables :

// - int a=0
// - char b=’B’
// - char c[12]= “bonjour toi\n”

// En utilisant la fonction printf est une de ses options “%”

// nom de votre binaire : my_hex_reader


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int a = 0;
    char b = 'B';
    char c[12] = "bonjour toi\n";

    printf("a = %p\n", &a);
    printf("b = %p\n", &b);
    printf("c = %p\n", &c);

    return 0;
}
