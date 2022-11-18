#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int vect[10];
    int min, max;
    
    printf("Ingrese el valor minimo y maximo\n");
    scanf("%d", &min);
    scanf("%d", &max);
    
    for (int i=0; i<10; i++){
        vect[i] = rand() % (max-min+1) + min;
        printf("%d ",vect[i]);
    }
    
    return 0;
}
