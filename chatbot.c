#include <stdio.h>

int main() {
    int opcao;
    char nome[100];
    char cpf[20];
    int Financeiro = 0;
    int Suporte = 0;
    int Comercial = 0;

    printf("Olá! Seja bem vind(e) a nossa central de atendimento\n");
    printf("1 - Já sou cliente\n");
    printf("2 - Sou novo por aqui\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    getchar();

    if (opcao == 1) {
        printf("Digite seu cpf: ");
        scanf("%s", cpf);

        printf("Digite seu nome: ");
        scanf("%s", nome);

        printf("\nBem-vindo %s!\n", nome);
        printf("1 - Financeiro\n");
        printf("2 - Suporte\n");
        printf("3 - Comercial\n");
        printf("4 - Sair\n");
        printf("Opção desejada: ");
        scanf("%d", &opcao);

   
        do {
            switch (opcao) {
                case 1:
                    printf("Você escolheu setor Financeiro! Aguarde, um atendente entrará em contato.\n");
                    Financeiro++;
                    break;

                case 2:
                    printf("Você escolheu o setor de Suporte técnico. Aguarde! Um atendente estará lhe atendendo em alguns minutos.\n");
                    Suporte++;
                    break;

                case 3:
                    printf("Você escolheu Comercial. Entraremos em contato assim que pudermos.\n");
                    Comercial++;
                    break;

                case 4:
                    printf("Obrigado por usar nosso sistema! Até mais tarde! Tenha um excelente dia!\n");
                    break;

                default:
                    printf("Opção inválida, tente novamente.\n");
            }

            if (opcao != 4) {
                printf("\nOpção desejada: ");
                scanf("%d", &opcao);
            }

        } while (opcao != 4);

    } else {
        printf("Seja bem-vindo ao atendimento!\n");
        printf("Logo nossos agentes entrarão em contato!\n");
    }

    return 0;
}