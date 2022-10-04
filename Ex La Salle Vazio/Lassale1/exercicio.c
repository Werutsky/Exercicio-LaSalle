// Usuário github: Werutsky. Disponível em: https://github.com/Werutsky

//Utilizados como referência a parte 3 da apostila (pgs 184 a 194) e vídeo sobre a biblioteca math disponível em (https://www.youtube.com/watch?v=Lnf_WfPVb4k)

#include<stdio.h> // inclusão de biblioteca padrão de entrada e saída
#include<math.h> // inclusão de bibliotecas math para usar funções de potenciação e raiz quadrada
#include<locale.h> // inclusão da biblioteca locale para permitir uso de caracteres especiais da língua portuguesa como acentuação.

int main()
{ 
    setlocale(LC_ALL,"Portuguese_Brazil"); //definição da língua portuguesa para permitir uso dos caracteres especiais

    float n1, n2; // variávies utilizadas para números que farão as operações matemáticas. Números reais.
    int escolha, opcao; // variáveis utilizadas para escolhas do usuário. Números inteiros.

    printf("\n Autor: André Gustavo Rolim Werutsky \n Curso: Análise e Desenvolvimento de Sistemas \n Universidade: Unilasalle \n Matrícula: 202210963\n \n");

//Inclusão desse trecho apenas como cabeçalho da calculadora
    printf("*************************************************************************\n");
    printf("****************************** CALCULADORA ******************************\n");
    printf("*************************************************************************\n \n");

//Como a operação de raiz quadrada usa apenas um número e as demais 2 números, dividi essas escolhas que seão armazenadas na variável "escolha" para depois entrar na estrutura condicional SWITCH
    printf(" Você precisa escolher uma operação: \n Digite 1 para Raiz quadrada de um número \n Digite 2 para soma, subtração, multiplicação, divisão ou potenciação \n Escolha:");
    scanf("%d",&escolha);
    printf("\n");

//Conforme a escolha do usuário entra na estrutura condicional Switch. Caso escolha 1, entra no case 1 de raiz quadrada. Caso escolha 2, entra no case 2 de demais operações. Caso digite qualquer outra opção, entra no default ao final do código informando que não escolheu uma opção válida.
    switch (escolha)
    {
    case 1:
        printf("Digite o número do qual você deseja saber a raiz quadrada:");
        scanf("%f",&n1);
        printf("A raiz quadrada é %f.", sqrt(n1)); // utilizada a função sqrt da biblioteca math para fazer o cálculo de raiz quadrada
        break;
    
    case 2:
        printf("Digite uma das opções abaixo para a operação que deseja fazer:\n 1 para soma \n 2 para subtração \n 3 para multiplicação \n 4 para divisão \n 5 para potenciação\n Opção:");
        scanf("%d",&opcao);
        printf("\n");
    
    // No case 2, é aberta uma nova escolha para o usuário de que operação deseja fazer que é armazenada na variável "opcao". Conforme a opção, entra na estrutura SWITCH abaixo. Caso digite uma opção inválida, entrará na estrutura default ao final da estrutura switch abaixo. Em todos os cases abaixo, são solicitados dois números para fazer a operação que são armazenados nas variáveis n1 e n2. O resultado é apresentado na tela do usuário logo após.

        switch (opcao)
        {
            case 1:
            printf("Digite um número:");
            scanf("%f", &n1);
            printf("Digite outro número:");
            scanf("%f", &n2);
            printf("\n");
            printf("O resultado da soma é %f.", n1+n2);
            break;

            case 2:
            printf("Digite um número:");
            scanf("%f", &n1);
            printf("Digite outro número:");
            scanf("%f", &n2);
            printf("\n");
            printf("O resultado da subtração é %f.", n1-n2);
            break;

            case 3:
            printf("Digite um número:");
            scanf("%f", &n1);
            printf("Digite outro número:");
            scanf("%f", &n2);
            printf("\n");
            printf("O resultado da multiplicação é %f.", n1*n2);
            break;

            case 4:
            printf("Digite o numerador:");
            scanf("%f", &n1);
            printf("Digite o denominador:");
            scanf("%f", &n2);
            printf("\n");

            // No caso da divisão, para evitar erro gerado pela escolha de denominador 0, foi colocada uma estrutura if else. Assim, caso a variável n2 do denominador for igual a 0, o usuário será alertado e terá que refazer a operação. Caso contrário a operação de divisão ocorrerá normalmente.
            if (n2 == 0){
                printf("O denominador não pode ser 0. Refaça a operação.");
            }
            else{
                printf("O resultado da divisão é %f.", n1/n2);
            }
            break;
            
            case 5:
            printf("Digite o número da base:");
            scanf("%f", &n1);
            printf("Digite o número do expoente:");
            scanf("%f", &n2);
            printf("\n");
            printf("O resultado da potenciação é %f.", pow(n1, n2)); //utilizada a função pow da biblioteca math para fazer a potenciação.
            break;
                
            default:
            printf("Você não digitou uma escolha válida! Tente Novamente!");
        }
    
    break;
            
    default:
        printf("Você não digitou uma escolha válida! Tente Novamente!");
    }

return 0;
}
