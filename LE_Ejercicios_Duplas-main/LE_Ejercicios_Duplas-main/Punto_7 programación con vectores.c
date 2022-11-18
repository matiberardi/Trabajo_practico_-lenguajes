#include <stdio.h>
#define MAX 10

void ordenar_numeros (int num[MAX]);

int main()
{
    int num[MAX] = {0};
    printf("Ingrese 10 valores enteros: ");
    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &num[i]);
    }
    ordenar_numeros(num);
    

    return 0;
}

void ordenar_numeros (int num[MAX])
{
    int i, j, aux;
    for (i = 0; i < MAX; i++)
    {
        for (j = i; j < MAX; j++)
        {
            if (num[i] < num[j]){
            aux = num[i];
            num[i] = num[j];
            num[j] = aux;
            }
        }
    }
    printf("Ordenado de mayor a menor: ");
    for(i = 0; i < MAX; i++)
    {
        printf("%d, ", num[i]);
    }
}