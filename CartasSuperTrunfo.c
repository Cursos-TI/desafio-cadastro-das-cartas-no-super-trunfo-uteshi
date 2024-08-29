#include <stdio.h>
    char pais1[15], pais2[15];
    int populacao1, populacao2;
    int area1, area2;
    int pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    int codigo_carta1, codigo_carta2;

    int iniciar;
    int placar_1, placar_2;
    int batalha;
int main() {
    srand(time(NULL));
    printf("### COMPARE CARTAS TRUNFO! ####\n");
    printf("\nTema: Países\n");

    //CADASTRO CARTA 1
    printf("Digite abaixo os dados da PRIMEIRA carta:\n");
    printf("País:");
    scanf("%s", &pais1);
    printf("\nPopulação:");
    scanf("%d", &populacao1);
    printf("\nÁrea em KM²:");
    scanf("%d", &area1);
    printf("\nPIB:");
    scanf("%d", &pib1);
    printf("\nNúmero de pontos turísticos:");
    scanf("%d", &pontos_turisticos1);
    system("clear");

    //CONFIRMAÇÃO CADASTRO DA CARTA 1
    codigo_carta1 = rand() % 1000;
    printf("\nPrimeira carta cadastrada com sucesso!\n");

    //CADASTRO CARTA 2
    printf("\nDigite abaixo os dados da SEGUNDA carta:\n");
    printf("País:");
    scanf("%s", &pais2);
    printf("\nPopulação:");
    scanf("%d", &populacao2);
    printf("\nÁrea em KM²:");
    scanf("%d", &area2);
    printf("\nPIB:");
    scanf("%d", &pib2);
    printf("\nNúmero de pontos turísticos:");
    scanf("%d", &pontos_turisticos2);
    system("clear");

    //CONFIRMAÇÃO CADASTRO CARTA 2
    codigo_carta2 = rand() % 1000;
    printf("\nSegunda carta cadastrada com sucesso!\n");

    printf("Deseja iniciar o comparativo?\nDigite:\n1. SIM\n2. NAO\n");
    scanf("%d", &iniciar);

    switch (iniciar){
        case 1:
            placar_1 = 0;
            placar_2 = 0;
            printf("\n### A BATALHA TRUNFO SERÁ...###\n");
            batalha=(rand()%4)+1;
            switch(batalha){
                case 1: printf("\n### POPULAÇÃO ###\n");
                if(populacao1 < populacao2){
                    placar_1++;
                }else{placar_2++;}
                break;
                case 2: printf("\n### ÁREA DO TERRITÓRIO ###\n");
                if(area1 > area2){
                    placar_1++;
                }else{placar_2++;}
                break;
                case 3: printf("\n### PIB ###\n");
                if(pib1 > pib2){
                    placar_1++;
                }else{placar_2++;}
                break;
                case 4: printf("\n### PONTOS TURÍSTICOS ###\n");
                if(pontos_turisticos1 > pontos_turisticos2){
                    placar_1++;
                }else{placar_2++;}

                default: printf("\n\nParece que o sistema resultou em um erro inesperado...");
            };
            

            //MOSTRA CARTA VENCEDORA
            if(placar_1 > placar_2){
                printf("\nA carta vencedora é:\n");

                printf("Código da carta:%d\n", codigo_carta1);
                printf("País:%s\n", pais1);
                printf("População:%d\n", populacao1);
                printf("Área em KM²:%d\n", area1);
                printf("PIB:%d\n", pib1);
                printf("Número de pontos turísticos:%d\n", pontos_turisticos1);
                
            }else{
                printf("A carta vencedora é:\n");

                printf("Código da carta:%d\n", codigo_carta2);
                printf("País:%s\n", pais2);
                printf("População:%d\n", populacao2);
                printf("Área em KM²:%d\n", area2);
                printf("PIB:%d\n", pib2);
                printf("Número de pontos turísticos:%d\n", pontos_turisticos2); 
                };
        break;
        case 2:
            printf("CADASTRO DE CARTAS REALIZADO COM SUCESSO:");
            //EXIBE CARTA 1
            printf("Código da carta:%d\n", codigo_carta1);
            printf("País:%s\n", pais1);
            printf("População:%d\n", populacao1);
            printf("Área em KM²:%d\n", area1);
            printf("PIB:%d\n", pib1);
            printf("Número de pontos turísticos:%d\n", pontos_turisticos1);
            //EXIBE CARTA 2
            printf("\n\nCódigo da carta:%d\n", codigo_carta2);
            printf("País:%s\n", pais2);
            printf("População:%d\n", populacao2);
            printf("Área em KM²:%d\n", area2);
            printf("PIB:%d\n", pib2);
            printf("Número de pontos turísticos:%d\n", pontos_turisticos2); 
        break;
        default:
            printf("Ops, parece que você selecionou um número errado... Inicie novamente...");
    };
};
