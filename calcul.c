#include <stdio.h>

int main() {
    int nombre = 5;
    int carre = nombre * nombre;
    int cube = nombre * nombre * nombre; // Nouvelle ligne !
    
    printf("Le carre de %d est %d\n", nombre, carre);
    printf("Le cube de %d est %d\n", nombre, cube); // Nouvelle ligne !
    return 0;
}
