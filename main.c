#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma = 0;
    int num;
    int prom = 0;
    int cont = 0;
    int menor;
    int mayor;

    do      ///Hago un do while que mientras no se ingrese un -1 en num va a seguir pidiendo numeros
    {
        printf("Ingresar numero: ");
        scanf("%i", &num);
        cont++;
        if(num != -1)
        {
            suma = suma + num;
            if(cont == 1)   //Si el cont es igual a 1 entonces esto significa que es numero que se ingrese va a ser el primero entonces lo guardo en mayor y menor
            {
                menor = num;
                mayor = num;
            }
            else if(num < menor)  // Si el nuevo numero ingresado es menor que el que el menor existente entonces guardo el num en menor
            {
                menor = num;
            }
            if(num > mayor)     // Si el nuevo numero ingresado es mayor que el que el mayor existente entonces guardo el num en mayor
            {
                mayor = num;
            }
        }
    }
    while(num != -1);

    printf("El numero mas alto es: %i \n", mayor);
    printf("El numero mas bajo es: %i \n", menor);
    printf("La sumatoria de los valores ingresados es: %i", suma);

    return 0;
}

