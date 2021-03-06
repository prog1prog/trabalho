#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod03_loop_while - Roteiro: Prática N. 3:
 *Crie o pseudocódigo, fluxograma e programa em C de um programa chamado
 *NumerosParesIntervalo. O programa deve solicitar 2 números inteiros positivos para o usuário
 *sendo que o primeiro número informado deve ser menor que o primeiro. Logo em seguida o
 *programa deve informar todos os números ímpares entre os números informados.
 */

int main ()
{
    int x, y;

    printf ("Digite dois números inteiros positivos(o segundo número deve ser maior que o primeiro): ");
    scanf("%d %d", &x, &y);

    if ( x > y )
    {
        printf("\n\tErro! Você digitou o primeiro número maior que o segundo!\n\n");
        system("pause");
        return (0);
    }

    if( ( x % 2 ) == 0 )
    {
        printf("\n%d\n", x);

        while ( x < y )
        {
            printf("%d\n", ( x = x + 2 ) );
        }
    }
    else
    {
        x++; printf("\n%d\n", x); //acresenta o 'x' em uma unidade antes de continuar o programa

        while ( x < y )
        {
            printf("%d\n", ( x = x + 2 ) );
        }
    }

    system("pause");
    return (0);
}
