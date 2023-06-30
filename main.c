#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fila, vuelta, columna, aux=0, filaAux, columnaAux, matriz[5][5];

    printf("*Matriz original*\n");

    //Cargar y mostrar matriz
    for (fila=0; fila<=4; fila++)
    {
        for (columna=0; columna<=4; columna++)
        {
            matriz[fila][columna] = aux;
            aux+=1;
            printf ("[ %2d ]", matriz[fila][columna]);
        }
        printf("\n");
    }


    printf("\n");
    printf("\n");

    filaAux = 4;
    for (vuelta=0; vuelta<=4; vuelta++)
    {
        /*se recorre la columna, manteniendo FIJO el valor de la misma, y avanzando con el valor de las filas hasta 4, pero
        como por cada vuelta se llegará hasta un valor menos que la vuelta anterior entonces la condición queda "hasta 4-vuelta" */
        columna = vuelta;
        for (fila=0; fila<=4-vuelta; fila++)
        {
            printf("[ %2d ] \n", matriz[fila][columna]);
        }
        printf ("\n");

        printf("      ");
        /*se recorre la fila, ahora se mantiene FIJO el valor de la fila y varía el valor de la columna desde el valor de vuelta
        que se tenga, pero teniendo en cuenta que el valor inicial ya se imprimió en el bucle anterior, entonces la condición
        queda: "desde vuelta+1" */
        for (columna=vuelta+1; columna<=4; columna++)
        {
            printf("[ %2d ]", matriz[4-vuelta][columna]);
            /*El valor para la posición fila de la matriz queda determinado por: "4-vuelta" ya que por cada iteracion del
            bucle exterior, se necesita decrementar en 1 este valor para ir a la fila superior */
        }


        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
    }

    return 0;
}
