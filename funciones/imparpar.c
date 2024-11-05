#include <stdio.h>


int parimpar (int );


int main ()
{
    int num1;

    printf(" INGRESE UN NUMERO: ");
    scanf("%d", &num1);


    if (parimpar(num1))

        printf ("ES IMPAR ");

    else
        printf ("ES PAR ");
}

int parimpar (int num1)
{
        int bandera;

        if (num1 %2)
        {

        num1 = 0;

        return 1;
        }

        else
            return 0;


}
