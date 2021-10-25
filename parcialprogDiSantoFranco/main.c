#include <stdio.h>
#include <stdlib.h>
float aplicarDescuento(float precio);
int contarCaracteres(char palabra[], char caracter);

int main()
{   float a;
    int b;

    a = aplicarDescuento(100);
    printf("el precio con 5 off es %.2f \n", a);

    b = contarCaracteres("palabra", 'a');
    printf("la letra aparece %d veces \n", b);





    return 0;
}


float aplicarDescuento(float precio)
{
    float r;
    if( precio > 0)
    {

    r = precio - (precio * 0.05);
    }else{

        r = 0;
    }


    return r;
}


int contarCaracteres(char palabra[], char caracter)
{
    int tam = strlen(palabra);
    int contador=0;
    if(palabra != NULL)
    {
        for(int i =0 ; i < tam ; i ++)
        {
            if(palabra[i] == caracter)
            {

                contador++;
            }

        }

    }
    return contador;
}
