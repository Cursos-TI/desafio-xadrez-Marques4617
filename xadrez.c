#include <stdio.h>

int main() {
    // variáveis
    int menu, peca, casas, direcao;
    int casastorre = 10;
    int casasbispo = 10;
    int casasrainha = 10;

    // MENU PRINCIPAL
    printf("MENU PRINCIPAL\n");
    printf("1. Jogar\n");
    printf("2. Sair\n");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("Com qual peca voce quer jogar?\n");
            printf("1. Rainha\n");
            printf("2. Torre\n");
            printf("3. Bispo\n");
            scanf("%d", &peca);

            switch (peca) {
                case 1: // Rainha
                    printf("Quantas casas voce quer andar?\n");
                    scanf("%d", &casas);
                    if (casas <= casasrainha && casas > 0) {
                        printf("Qual movimento voce quer fazer?\n");
                        printf("1. Cima\n");
                        printf("2. Baixo\n");
                        printf("3. Esquerda\n");
                        printf("4. Direita\n");
                        printf("5. Diagonal Superior Esquerda\n");
                        printf("6. Diagonal Superior Direita\n");
                        printf("7. Diagonal Inferior Esquerda\n");
                        printf("8. Diagonal Inferior Direita\n");
                        scanf("%d", &direcao);

                        for (int i = 1; i <= casas; i++) {
                            printf("Passo %d: ", i);
                            switch (direcao) {
                                case 1: printf("Cima\n"); break;
                                case 2: printf("Baixo\n"); break;
                                case 3: printf("Esquerda\n"); break;
                                case 4: printf("Direita\n"); break;
                                case 5: printf("Diagonal Superior Esquerda\n"); break;
                                case 6: printf("Diagonal Superior Direita\n"); break;
                                case 7: printf("Diagonal Inferior Esquerda\n"); break;
                                case 8: printf("Diagonal Inferior Direita\n"); break;
                                default: printf("Direcao invalida\n"); break;
                            }
                        }
                    } else {
                        printf("Numero de casas invalido para a Rainha.\n");
                    }
                    break;

                case 2: // Torre
                    printf("Quantas casas voce quer andar?\n");
                    scanf("%d", &casas);
                    if (casas <= casastorre && casas > 0) {
                        printf("Qual movimento voce quer fazer?\n");
                        printf("1. Cima\n");
                        printf("2. Baixo\n");
                        printf("3. Esquerda\n");
                        printf("4. Direita\n");
                        scanf("%d", &direcao);

                        for (int i = 1; i <= casas; i++) {
                            printf("Passo %d: ", i);
                            switch (direcao) {
                                case 1: printf("Cima\n"); break;
                                case 2: printf("Baixo\n"); break;
                                case 3: printf("Esquerda\n"); break;
                                case 4: printf("Direita\n"); break;
                                default: printf("Direcao invalida\n"); break;
                            }
                        }
                    } else {
                        printf("Numero de casas invalido para a Torre.\n");
                    }
                    break;

                case 3: // Bispo
                    printf("Quantas casas voce quer andar?\n");
                    scanf("%d", &casas);
                    if (casas <= casasbispo && casas > 0) {
                        printf("Qual movimento voce quer fazer?\n");
                        printf("1. Diagonal Superior Esquerda\n");
                        printf("2. Diagonal Superior Direita\n");
                        printf("3. Diagonal Inferior Esquerda\n");
                        printf("4. Diagonal Inferior Direita\n");
                        scanf("%d", &direcao);

                        for (int i = 1; i <= casas; i++) {
                            printf("Passo %d: ", i);
                            switch (direcao) {
                                case 1: printf("Diagonal Superior Esquerda\n"); break;
                                case 2: printf("Diagonal Superior Direita\n"); break;
                                case 3: printf("Diagonal Inferior Esquerda\n"); break;
                                case 4: printf("Diagonal Inferior Direita\n"); break;
                                default: printf("Direcao invalida\n"); break;
                            }
                        }
                    } else {
                        printf("Numero de casas invalido para o Bispo.\n");
                    }
                    break;

                default:
                    printf("Opcao de peca invalida.\n");
                    break;
            }
            break;

        case 2:
            printf("Saindo do Jogo...\n");
            break;

        default:
            printf("Opcao invalida do menu.\n");
            break;
    }


