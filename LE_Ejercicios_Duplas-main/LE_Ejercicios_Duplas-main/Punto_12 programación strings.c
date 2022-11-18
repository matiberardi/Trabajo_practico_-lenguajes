#include <stdio.h>
#define CARACTERES_MAX 50

int main() {
    int i;
    char palabra[CARACTERES_MAX];
    printf("Ingrese una palabra:\n");
    scanf("%s", palabra);
    for (i = 0; i < CARACTERES_MAX; i++)
    {
        if (palabra[i] == '\0' ) break;
        
    }
    printf("La palabra tiene %d caracteres.", i);
    return 0;
}
