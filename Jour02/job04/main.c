// Maintenant que nous avons les principales opérations qu’en est il des
// puissance ?

// Vous devez faire une fonction qui s’occupera de prendre en paramètres
// vos 2 arguments récupérer par scanf (vos deux nombres) et de faire le
// premier puissance le deuxième

// le signe pour effectuer votre puissance sera “ˆ”

// Votre méthode doit utiliser seulement les variables pour générer vos
// fichiers et non des noms rentrer en dur dans votre méthode.

// Le nom de l'exécutable doit être : my_power_loop.
#include <stdio.h>
#include <stdlib.h>




int my_mul(int a, int b) {
     printf("a * b = %d\n", a * b);
    return a * b;

}

int my_add(int a, int b) {
    return a + b;
}

int my_sub(int a, int b) {
    return a - b;
}

int my_div(int a, int b) {
    if (b == 0) {
        return -1; // error
    } else {
        return a / b;
    }
}

int my_mod(int a, int b) {
    return a % b;
}
int my_pui(int a, int b) {
    int i = 0;
    int result = 1;
    while (i < b) {
        result = result * a;
        i++;
    }
    return result;
}


int main() {
    int a, b;
    char sign;
    
    printf("tapper un nombre a : ");
    scanf("%d", &a);
    printf("tapper un nombre b : ");
    scanf("%d", &b);
    printf("tapper un signe : ");
    scanf(" %c", &sign);

   switch (sign)

{
case '*':
    my_mul(a, b);
    break;
case '+':
    printf("a + b = %d\n", my_add(a, b));
    break;
case '-':
    printf("a - b = %d\n", my_sub(a, b));
    break;
case '/':
    printf("a / b = %d\n", my_div(a, b));
    break;
case '%':
     printf("a %% b = %d\n", my_mod(a, b));
    break;
case '^':
    printf("a ^ b = %d\n", my_pui(a, b));
    break;

default:
    break;
}
    
   

    return 0;
}
