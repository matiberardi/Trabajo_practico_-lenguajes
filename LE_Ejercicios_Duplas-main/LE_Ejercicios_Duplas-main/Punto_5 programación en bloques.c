#include <stdio.h>
#include <stdio_ext.h>
#include <math.h>

float calModulo (float, float, float);

int main()
{
    float x, y, z;

    printf("Bienvenido al calculador del modulo de un vector\n");
    printf("Escriba sus valores en orden x, y, z\n");
    scanf("%f", &x);
    __fpurge(stdin);
    scanf("%f", &y);
    __fpurge(stdin);
    scanf("%f", &z);
    printf("El modulo de su vector es = %f", calModulo(x,y,z) );
    return 0;
}

float calModulo (float x, float y, float z){
    float modulo = sqrt(x*x + y*y + z*z);
    return modulo;
}
