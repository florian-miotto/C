// Maintenant nous voulons qu’une variable nous permettent de savoir qu’elle
// opérations faire, nous l’appellerons “sign” elle contiendra l’opération que
// nous souhaitons effectuer.

// “sign” sera donc égale à un des signes des opérations faites
// précédemment

// Comme vous savez utiliser scanf(), vous l’utiliserez pour récupérer le signe
// de votre opération

// Faîtes en sorte que votre code exécute la fonction correspondante à
// l’opération renseigner dans “sign”

// votre binaire se nommera: my_smart_calc
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

default:
    break;
}
    
   

    return 0;
}
