/* BASIC CALCULATOR 0.1 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
	int i, h, operacao, resultado;
    
    /* 1- solicita��o da opera��o matem�tica a ser executada */
    printf("Para soma digite: 1\n");
    printf("Para subtracao digite: 2\n");
    printf("Para multiplicao digite: 3\n");
    printf("Para divisao digite: 4\n");
    scanf("%i", &operacao);
    
    /* 2-solicita��o dos n�meros a serem calculados */
    printf("digite o primeiro numero:\n");
    scanf("%i", &i);
    
    printf("digite o segundo numero:\n");
    scanf("%i", &h);
    
    /* 3-realiza��o da opera�ao solicitada na etapa 1, utilizando os numeros
	capiturados no scanf() */
    switch(operacao){
        case 1:
        resultado = (i + h);
        printf("O resultado de %i + %i = %i\n", i, h, resultado);
        break;
        case 2:
        resultado = (i - h);
        printf("O resultado de %i - %i = %i\n", i, h, resultado);
        break;
        case 3:
        resultado = (i * h);
        printf("O resultado de %i * %i = %i\n", i, h, resultado);
        break;
        case 4:
        resultado = (i / h);
        printf("O resultado de %i / %i = %i\n", i, h, resultado);
        break;
    /* 4-Em caso de usu�rio colocar alguma informar��o indevida,
    foi adicionado o default para informar sobre o erro */
    	default:
        printf("opcao invalida\n");
        break;
    }
    
    
    return 0;
}
