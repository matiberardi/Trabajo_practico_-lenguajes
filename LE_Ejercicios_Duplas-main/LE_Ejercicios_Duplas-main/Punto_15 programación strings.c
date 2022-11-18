#include <stdio.h>
#define CHAR_MAX 20
#define FGETS_MAX 21

void contador_vocales (char caracteres[CHAR_MAX]);

int main()
{
    char caracteres[CHAR_MAX];
    printf("Ingrese un texto de max 20 caracteres\n");
    fgets(caracteres, FGETS_MAX, stdin);
    contador_vocales (caracteres);
    
    return 0;
}

void contador_vocales (char caracteres[CHAR_MAX])
{
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    for (int j = 0; j < CHAR_MAX; j++)
    {
        if (caracteres[j] == 'a') a++;
        if (caracteres[j] == 'e') e++;
        if (caracteres[j] == 'i') i++;
        if (caracteres[j] == 'o') o++;
        if (caracteres[j] == 'u') u++;
    }
    printf("El texto ingresado contiene %d a, %d e, %d i, %d o y %d u", a, e, i, o, u);
}