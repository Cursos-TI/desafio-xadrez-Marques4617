#include <stdio.h>

int main() {

    // Variáveis
    int menu, peca, direcao;
    const int casasTorre = 5;
    const int casasBispo = 4;
    const int casasRainha = 6;
    const int movimentosCavalo = 2;

    // Corpo do código
    printf("MENU PRINCIPAL\n");
    printf("1. Jogar\n");
    printf("2. Sair\n");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("\nCom qual peca voce quer jogar?\n");
            printf("1. Rainha\n");
            printf("2. Torre\n");
            printf("3. Bispo\n");
            printf("4. Cavalo\n");
            scanf("%d", &peca);

            switch (peca) {
                case 1:
                    printf("\nQual movimento voce quer fazer?\n");
                    printf("1. Cima\n");
                    printf("2. Baixo\n");
                    printf("3. Esquerda\n");
                    printf("4. Direita\n");
                    printf("5. Diagonal Superior Esquerda\n");
                    printf("6. Diagonal Superior Direita\n");
                    printf("7. Diagonal Inferior Esquerda\n");
                    printf("8. Diagonal Inferior Direita\n");
                    scanf("%d", &direcao);

                    // Exibição dos movimentos
                    printf("\nMovimentando Rainha:\n");
                    for (int passo = 1; passo <= casasRainha; passo++) {
                        printf("Passo %d: ", passo);
                        switch (direcao) {
                            case 1: printf("Cima\n"); break;
                            case 2: printf("Baixo\n"); break;
                            case 3: printf("Esquerda\n"); break;
                            case 4: printf("Direita\n"); break;
                            case 5: printf("Diagonal Superior Esquerda\n"); break;
                            case 6: printf("Diagonal Superior Direita\n"); break;
                            case 7: printf("Diagonal Inferior Esquerda\n"); break;
                            case 8: printf("Diagonal Inferior Direita\n"); break;
                            default: printf("Direcao invalida\n"); passo = casasRainha; break;
                        }
                    }
                    break;

                case 2:
                    printf("\nQual movimento voce quer fazer?\n");
                    printf("1. Cima\n");
                    printf("2. Baixo\n");
                    printf("3. Esquerda\n");
                    printf("4. Direita\n");
                    scanf("%d", &direcao);

                    // Exibição dos movimentos
                    printf("\nMovimentando Torre:\n");
                    for (int passo = 1; passo <= casasTorre; passo++) {
                        printf("Passo %d: ", passo);
                        switch (direcao) {
                            case 1: printf("Cima\n"); break;
                            case 2: printf("Baixo\n"); break;
                            case 3: printf("Esquerda\n"); break;
                            case 4: printf("Direita\n"); break;
                            default: printf("Direcao invalida\n"); passo = casasTorre; break;
                        }
                    }
                    break;

                case 3:
                    printf("\nQual movimento voce quer fazer?\n");
                    printf("1. Diagonal Superior Esquerda\n");
                    printf("2. Diagonal Superior Direita\n");
                    printf("3. Diagonal Inferior Esquerda\n");
                    printf("4. Diagonal Inferior Direita\n");
                    scanf("%d", &direcao);

                    // Exibição dos movimentos
                    printf("\nMovimentando Bispo com loop simples:\n");
                    for (int passo = 1; passo <= casasBispo; passo++) {
                        printf("Passo %d: ", passo);
                        switch (direcao) {
                            case 1: printf("Diagonal Superior Esquerda\n"); break;
                            case 2: printf("Diagonal Superior Direita\n"); break;
                            case 3: printf("Diagonal Inferior Esquerda\n"); break;
                            case 4: printf("Diagonal Inferior Direita\n"); break;
                            default: printf("Direcao invalida\n"); passo = casasBispo; break;
                        }
                    }

                    // Exibição dos movimentos
                    printf("\nMovimentando Bispo com loops aninhados:\n");
                    for (int i = 1; i <= casasBispo; i++) {
                        for (int j = 1; j <= casasBispo; j++) {
                            printf("Movimento Vertical %d, Horizontal %d: Diagonal\n", i, j);
                        }
                    }
                    break;

                case 4:
                    // Exibição dos movimentos
                    printf("\nMovimentando Cavalo com loops aninhados:\n");
                    for (int i = 1; i <= movimentosCavalo; i++) {
                        for (int j = 1; j <= movimentosCavalo; j++) {
                            if (i == 2 && j == 1) {
                                printf("Movimento: Duas casas para cima e uma para direita\n");
                                break;
                            } else {
                                continue;
                            }
                        }
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


}
