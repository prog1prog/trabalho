#include <stdio.h>
#include <stdlib.h>

/*Nome: Igor Luciano de Paula | Turma: LABCOMP1 SELE.1 - G1
 *Prof.: Geraldo Pereira de Souza | 1/2016
 *
 *Mod00_Introdução - Roteiro: Exercício Proposto N. 2:
 *Apresente um código completo escrito em linguagem C que solicite ao usuário uma 
 *temperatura em graus Celsius. Logo em seguida o programa deve informar a temperatura 
 *equivalente em Fahrenheit.
 */

int main ()
{
    float c, f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    //Equação para fazer a conversão de unidade
    f = c * 1.8 + 32;

    printf("\nEsta temperatura em Fahrenheit é: %f\n", f);
    
    system ("pause");
return (0);
}
