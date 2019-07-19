/* BASIC CALCULATOR 0.1 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
	int i, h, operacao, resultado;
    
    /* 1- solicitação da operação matemática a ser executada */
    printf("Para soma digite: 1\n");
    printf("Para subtracao digite: 2\n");
    printf("Para multiplicao digite: 3\n");
    printf("Para divisao digite: 4\n");
    scanf("%i", &operacao);
    
    /* 2-solicitação dos números a serem calculados */
    printf("digite o primeiro numero:\n");
    scanf("%i", &i);
    
    printf("digite o segundo numero:\n");
    scanf("%i", &h);
    
    /* 3-realização da operaçao solicitada na etapa 1, utilizando os numeros
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
    /* 4-Em caso de usuário colocar alguma informarção indevida,
    foi adicionado o default para informar sobre o erro */
    	default:
        printf("opcao invalida\n");
        break;
    }
    
    
    return 0;
}
