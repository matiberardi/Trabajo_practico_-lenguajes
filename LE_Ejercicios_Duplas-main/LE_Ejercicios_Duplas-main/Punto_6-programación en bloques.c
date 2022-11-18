#include <stdio.h>
#include <stdio_ext.h>
int main()
{
    float num_1;
    float num_2;
    float resultado;
    char seleccion;
    char loop = 1;
    printf("Bienvenido a nuestra calculadora\n");
    printf("Por favor ingrese dos valores\n");
    while(loop == 1){
        scanf("%f", &num_1);
        scanf("%f", &num_2);
        printf("Si queres que los valores se sumen presione +\n");
        printf("Si queres que los valores se sumen presione -\n");
        printf("Si queres que los valores se sumen presione *\n");
        printf("Si queres que los valores se sumen presione /\n");
        __fpurge(stdin);

        scanf("%c", &seleccion);
    
        if (seleccion == '+'){
            resultado = num_1 + num_2;
            printf("El resultado de la suma es = %f \n", resultado);
        }
        else if(seleccion=='-'){
            resultado = num_1 - num_2;
            printf("El resultado de la resta es = %f \n", resultado);
        }
        else if(seleccion == '*'){
            resultado = num_1 * num_2;
            printf("El resultado de la multiplicacion es =%f \n",resultado);
        }
        else if(seleccion == '/'){
            resultado = num_1 / num_2;
            printf("El resultado de la division es =%f \n", resultado);
        }
        printf("Si queres seguir usando la calculadora pulse 1, de otra manera, se terminara el programa \n");
        __fpurge(stdin);
        scanf("%c", &loop);
        if (loop != 1){
            break;
        }
    }
    return 0;
}