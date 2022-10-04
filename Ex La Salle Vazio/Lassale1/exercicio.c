// Usu�rio github: Werutsky. Dispon�vel em: https://github.com/Werutsky

//Utilizados como refer�ncia a parte 3 da apostila (pgs 184 a 194) e v�deo sobre a biblioteca math dispon�vel em (https://www.youtube.com/watch?v=Lnf_WfPVb4k)

#include<stdio.h> // inclus�o de biblioteca padr�o de entrada e sa�da
#include<math.h> // inclus�o de bibliotecas math para usar fun��es de potencia��o e raiz quadrada
#include<locale.h> // inclus�o da biblioteca locale para permitir uso de caracteres especiais da l�ngua portuguesa como acentua��o.

int main()
{ 
    setlocale(LC_ALL,"Portuguese_Brazil"); //defini��o da l�ngua portuguesa para permitir uso dos caracteres especiais

    float n1, n2; // vari�vies utilizadas para n�meros que far�o as opera��es matem�ticas. N�meros reais.
    int escolha, opcao; // vari�veis utilizadas para escolhas do usu�rio. N�meros inteiros.

    printf("\n Autor: Andr� Gustavo Rolim Werutsky \n Curso: An�lise e Desenvolvimento de Sistemas \n Universidade: Unilasalle \n Matr�cula: 202210963\n \n");

//Inclus�o desse trecho apenas como cabe�alho da calculadora
    printf("*************************************************************************\n");
    printf("****************************** CALCULADORA ******************************\n");
    printf("*************************************************************************\n \n");

//Como a opera��o de raiz quadrada usa apenas um n�mero e as demais 2 n�meros, dividi essas escolhas que se�o armazenadas na vari�vel "escolha" para depois entrar na estrutura condicional SWITCH
    printf(" Voc� precisa escolher uma opera��o: \n Digite 1 para Raiz quadrada de um n�mero \n Digite 2 para soma, subtra��o, multiplica��o, divis�o ou potencia��o \n Escolha:");
    scanf("%d",&escolha);
    printf("\n");

//Conforme a escolha do usu�rio entra na estrutura condicional Switch. Caso escolha 1, entra no case 1 de raiz quadrada. Caso escolha 2, entra no case 2 de demais opera��es. Caso digite qualquer outra op��o, entra no default ao final do c�digo informando que n�o escolheu uma op��o v�lida.
    switch (escolha)
    {
    case 1:
        printf("Digite o n�mero do qual voc� deseja saber a raiz quadrada:");
        scanf("%f",&n1);
        printf("A raiz quadrada � %f.", sqrt(n1)); // utilizada a fun��o sqrt da biblioteca math para fazer o c�lculo de raiz quadrada
        break;
    
    case 2:
        printf("Digite uma das op��es abaixo para a opera��o que deseja fazer:\n 1 para soma \n 2 para subtra��o \n 3 para multiplica��o \n 4 para divis�o \n 5 para potencia��o\n Op��o:");
        scanf("%d",&opcao);
        printf("\n");
    
    // No case 2, � aberta uma nova escolha para o usu�rio de que opera��o deseja fazer que � armazenada na vari�vel "opcao". Conforme a op��o, entra na estrutura SWITCH abaixo. Caso digite uma op��o inv�lida, entrar� na estrutura default ao final da estrutura switch abaixo. Em todos os cases abaixo, s�o solicitados dois n�meros para fazer a opera��o que s�o armazenados nas vari�veis n1 e n2. O resultado � apresentado na tela do usu�rio logo ap�s.

        switch (opcao)
        {
            case 1:
            printf("Digite um n�mero:");
            scanf("%f", &n1);
            printf("Digite outro n�mero:");
            scanf("%f", &n2);
            printf("\n");
            printf("O resultado da soma � %f.", n1+n2);
            break;

            case 2:
            printf("Digite um n�mero:");
            scanf("%f", &n1);
            printf("Digite outro n�mero:");
            scanf("%f", &n2);
            printf("\n");
            printf("O resultado da subtra��o � %f.", n1-n2);
            break;

            case 3:
            printf("Digite um n�mero:");
            scanf("%f", &n1);
            printf("Digite outro n�mero:");
            scanf("%f", &n2);
            printf("\n");
            printf("O resultado da multiplica��o � %f.", n1*n2);
            break;

            case 4:
            printf("Digite o numerador:");
            scanf("%f", &n1);
            printf("Digite o denominador:");
            scanf("%f", &n2);
            printf("\n");

            // No caso da divis�o, para evitar erro gerado pela escolha de denominador 0, foi colocada uma estrutura if else. Assim, caso a vari�vel n2 do denominador for igual a 0, o usu�rio ser� alertado e ter� que refazer a opera��o. Caso contr�rio a opera��o de divis�o ocorrer� normalmente.
            if (n2 == 0){
                printf("O denominador n�o pode ser 0. Refa�a a opera��o.");
            }
            else{
                printf("O resultado da divis�o � %f.", n1/n2);
            }
            break;
            
            case 5:
            printf("Digite o n�mero da base:");
            scanf("%f", &n1);
            printf("Digite o n�mero do expoente:");
            scanf("%f", &n2);
            printf("\n");
            printf("O resultado da potencia��o � %f.", pow(n1, n2)); //utilizada a fun��o pow da biblioteca math para fazer a potencia��o.
            break;
                
            default:
            printf("Voc� n�o digitou uma escolha v�lida! Tente Novamente!");
        }
    
    break;
            
    default:
        printf("Voc� n�o digitou uma escolha v�lida! Tente Novamente!");
    }

return 0;
}
