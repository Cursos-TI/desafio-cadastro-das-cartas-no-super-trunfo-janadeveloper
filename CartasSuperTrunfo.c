 #include <stdio.h>

// Desafio Super Trunfo - Países
// // Tema 1 - Cadastro das Cartas
// // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// // Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1;          // Variável para armazenar o estado da cidade (A-H)
    char codigo1[4];       // Variável para armazenar o código da carta (ex: A01)
    char nomeCidade1[50];  // Variável para armazenar o nome da cidade
    unsigned long int populacao1; // Mudança para unsigned long int
    float area1;           // Variável para armazenar a área da cidade em km²
    float pib1;            // Variável para armazenar o PIB da cidade em bilhões de reais
    int pontosTuristicos1; // Variável para armazenar o número de pontos turísticos
    float densidadePopulacional1; // Variável para armazenar a densidade populacional (hab/km²)
    float pibPerCapita1;   // Variável para armazenar o PIB per capita (reais)
    float superPoder1;

    // Declaração de variáveis para a segunda carta
    char estado2;          // Variável para armazenar o estado da cidade (A-H)
    char codigo2[4];       // Variável para armazenar o código da carta (ex: B02)
    char nomeCidade2[50];  // Variável para armazenar o nome da cidade
    unsigned long int populacao2; // Mudança para unsigned long int
    float area2;           // Variável para armazenar a área da cidade em km²
    float pib2;            // Variável para armazenar o PIB da cidade em bilhões de reais
    int pontosTuristicos2; // Variável para armazenar o número de pontos turísticos
    float densidadePopulacional2; // Variável para armazenar a densidade populacional (hab/km²)
    float pibPerCapita2;   // Variável para armazenar o PIB per capita (reais)
    float superPoder2;

    // Variáveis para contar as vitórias
    int vitoriasCarta1 = 0;
    int vitoriasCarta2 = 0;

    // Entrada de dados para a primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1); //lendo até um espaço ou fim de linha, armazenando em nomeCidade1
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área (em km²): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Cálculos para a primeira carta
    densidadePopulacional1 = populacao1 / area1;   // Calcula a densidade populacional (hab/km²)
    // Aqui, multiplicamos o PIB por 1.000.000.000 (para converter de bilhões para reais), já que a entrada é dada em bilhões de reais.
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Calcula o PIB per capita (em reais)
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);


    // Entrada de dados para a segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (em km²): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculos para a segunda carta
    densidadePopulacional2 = populacao2 / area2;   // Calcula a densidade populacional (hab/km²)
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Calcula o PIB per capita (em reais)
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

   // Exibição dos dados cadastrados para a primeira carta
   printf("\nCarta 1:\n");
   printf("Estado: %c\n", estado1);                // Exibe o estado da cidade
   printf("Código: %s\n", codigo1);               // Exibe o código da carta
   printf("Nome da Cidade: %s\n", nomeCidade1);   // Exibe o nome da cidade
   printf("População: %d\n", populacao1);         // Exibe a população da cidade
   printf("Área: %.2f km²\n", area1);             // Exibe a área da cidade
   printf("PIB: %.2f bilhões de reais\n", pib1);  // Exibe o PIB da cidade
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);  // Exibe o número de pontos turísticos
   printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1); // Exibe a densidade populacional
   printf("PIB per Capita: %.2f reais\n", pibPerCapita1);  // Exibe o PIB per capita

   // Exibição dos dados cadastrados para a segunda carta
   printf("\nCarta 2:\n");
   printf("Estado: %c\n", estado2);                // Exibe o estado da cidade
   printf("Código: %s\n", codigo2);               // Exibe o código da carta
   printf("Nome da Cidade: %s\n", nomeCidade2);   // Exibe o nome da cidade
   printf("População: %d\n", populacao2);         // Exibe a população da cidade
   printf("Área: %.2f km²\n", area2);             // Exibe a área da cidade
   printf("PIB: %.2f bilhões de reais\n", pib2);  // Exibe o PIB da cidade
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);  // Exibe o número de pontos turísticos
   printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2); // Exibe a densidade populacional
   printf("PIB per Capita: %.2f reais\n", pibPerCapita2);  // Exibe o PIB per capita

    // Comparação dos atributos e contagem das vitórias usando operador ternário
    printf("\nComparação de Cartas:\n");
    printf("\nlembrando que: a carta 1 imprimi = 1 (vitória) e a carta 2 imprimi = 0 (vitória)\n");

    // Comparando População
    printf("População: ");
    vitoriasCarta1 += (populacao1 > populacao2) ? 1 : 0;
    vitoriasCarta2 += (populacao2 > populacao1) ? 1 : 0;
    printf("%d\n", populacao1 > populacao2 ? 1 : 0); // Carta 1 vence se População maior, senão Carta 2

    // Comparando Área
    printf("Área: ");
    vitoriasCarta1 += (area1 > area2) ? 1 : 0;
    vitoriasCarta2 += (area2 > area1) ? 1 : 0;
    printf("%d\n", area1 > area2 ? 1 : 0); // Carta 1 vence se Área maior, senão Carta 2

    // Comparando PIB
    printf("PIB: ");
    vitoriasCarta1 += (pib1 > pib2) ? 1 : 0;
    vitoriasCarta2 += (pib2 > pib1) ? 1 : 0;
    printf("%d\n", pib1 > pib2 ? 1 : 0); // Carta 1 vence se PIB maior, senão Carta 2

    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: ");
    vitoriasCarta1 += (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
    vitoriasCarta2 += (pontosTuristicos2 > pontosTuristicos1) ? 1 : 0;
    printf("%d\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0); // Carta 1 vence se Pontos Turísticos maior, senão Carta 2

    // Comparando Densidade Populacional (menor densidade vence)
    printf("Densidade Populacional: ");
    vitoriasCarta1 += (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0;
    vitoriasCarta2 += (densidadePopulacional2 < densidadePopulacional1) ? 1 : 0;
    printf("%d\n", densidadePopulacional1 < densidadePopulacional2 ? 1 : 0); // Carta 1 vence se Densidade menor

    // Comparando PIB per Capita
    printf("PIB per Capita: ");
    vitoriasCarta1 += (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
    vitoriasCarta2 += (pibPerCapita2 > pibPerCapita1) ? 1 : 0;
    printf("%d\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0); // Carta 1 vence se PIB per Capita maior, senão Carta 2

    // Comparando Super Poder
    printf("Super Poder: ");
    vitoriasCarta1 += (superPoder1 > superPoder2) ? 1 : 0;
    vitoriasCarta2 += (superPoder2 > superPoder1) ? 1 : 0;
    printf("%d\n", superPoder1 > superPoder2 ? 1 : 0); // Carta 1 vence se Super Poder maior, senão Carta 2

        // Resultado Final 
        printf("\nResultado Final:\n");
        // Exibe o vencedor ou Empate 
        printf("%s\n", vitoriasCarta1 > vitoriasCarta2 ? "Carta 1 é a vencedora!" : (vitoriasCarta1 < vitoriasCarta2 ? "Carta 2 é a vencedora!" : "Empate!"));
    
   return 0;  // Fim do programa
}








//%%%%%%%%%%%%%%%%%%%%%%%%%% CÓDIGO 2 DE TESTE %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // Desafio Super Trunfo - Países
// // Tema 1 - Cadastro das Cartas
// // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// // Siga os comentários para implementar cada parte do desafio.


// //Typedef dando o nome de "Cidade" para a nossa estrutura "Cartas Super Trunfo", no qual com o Struct podemos agrupar variáveis 
// typedef struct CartasSuperTrunfo
// {
//     char codigo [5]; // Código da cidade (Ex: "A01", "B02"), armazenado como uma string de até 4 caracteres + 1 para o '\0' (terminador de string).
//     int populacao; // Número de habitantes da cidade.
//     float area; // Área da cidade em km².
//     float pib; // Produto Interno Bruto (PIB) da cidade em bilhões.
//     int pontos_turisticos; // Número de pontos turísticos na cidade.
// } Cidade;

// //Função para calcular "Super Poder"
// float calcular_super_poder(Cidade cidade) {
//     return cidade.populacao + cidade.area + cidade.pib + cidade.pontos_turisticos;
// }

// // Função para exibir os dados de uma cidade
// void exibir_dados(Cidade cidade){ //Recebe um único objeto do tipo Cidade para Exibição.

//     //Declarando as variavéis densidade e PIB per capita.
//     float densidade = 0;
//     float pib_per_capita = 0;

//     //Calculo da densidade e pib per capita
//     if (cidade.area > 0) {
//         densidade = cidade.populacao / cidade.area;
//     }
//     if (cidade.populacao > 0) {
//         pib_per_capita = cidade.pib / cidade.populacao;
//     }

//     printf("------------------------------\n");
//     printf("Código: %s\n", cidade.codigo);
//     printf("População: %d habitantes\n", cidade.populacao);
//     printf("Área: %.2f km²\n", cidade.area);
//     printf("PIB: %.2f bilhões\n", cidade.pib);
//     printf("Pontos Turísticos: %d\n", cidade.pontos_turisticos);
//     printf("Densidade Populacional: %.2f hab/km²\n", densidade);
//     printf("PIB per Capita: R$ %.2f\n", pib_per_capita);
//     printf("------------------------------\n");
// }

// // Vamos criar um array cidade cidades[], onde cada elemento irá armazenar as informações de uma cidade;

// void cadastrar_cidades(Cidade cidades[], int *contador) {
//     char estado;
    
//     for (estado = 'A'; estado <= 'H'; estado++) {  // Para cada estado de A a H (8 estados)
//         for (int i = 1; i <= 4; i++) {  // Cada estado terá 4 cidades
//             printf("Cadastro da cidade %d do estado %c\n", i, estado);
            
//             // Solicitar que o usuário digite o código da cidade no formato "A01", "A02", etc.
//             printf("Digite o código da cidade (exemplo: A01, A02): ");
//             scanf("%s", cidades[*contador].codigo);  // Captura o código diretamente

//             // Validar o formato do código inserido
//             if (cidades[*contador].codigo[0] != estado || 
//                 cidades[*contador].codigo[1] != '0' + i / 10 ||  // Para o primeiro dígito (se necessário)
//                 cidades[*contador].codigo[2] != '0' + i % 10 ||  // Para o segundo dígito
//                 cidades[*contador].codigo[3] != '\0') {
//                 printf("Código inválido. Por favor, insira novamente.\n");
//                 --*contador;  // Não incrementa o contador, pois o cadastro não foi bem-sucedido
//                 continue;  // Volta ao início do loop para tentar novamente
//             }

//             printf("População: ");
//             scanf("%d", &cidades[*contador].populacao);
//             printf("Área (km²): ");
//             scanf("%f", &cidades[*contador].area);
//             printf("PIB (bilhões): ");
//             scanf("%f", &cidades[*contador].pib);
//             printf("Número de pontos turísticos: ");
//             scanf("%d", &cidades[*contador].pontos_turisticos);

//             (*contador)++;
//         }
//     }
// }

// // Precisamos saber o número de cidades cadastradas, para isso vamos usar um contador.
// // Depois exibir os dados e detalhes da cidade.
// void exibir_cidades(Cidade cidades[], int contador) {
//     printf("\nLista de Cidades Cadastradas:\n");
//     for (int i = 0; i < contador; i++) {
//         exibir_dados(cidades[i]);
//     }
// }

// //Função para comparar duas cartas
// void comparar_cartas(Cidade c1, Cidade c2) {
//     printf("\nComparação entre %s e %s\n", c1.codigo, c2.codigo);

//     printf("Densidade Populacional: %s vence\n", 
//         (c1.populacao / c1.area) < (c2.populacao / c2.area) ? c1.codigo : c2.codigo);

//     printf("PIB per Capita: %s vence\n", 
//         (c1.pib / c1.populacao) > (c2.pib / c2.populacao) ? c1.codigo : c2.codigo);

//     printf("População: %s vence\n", 
//         c1.populacao > c2.populacao ? c1.codigo : c2.codigo);
    
//     printf("Área: %s vence\n", 
//         c1.area > c2.area ? c1.codigo : c2.codigo);

//     printf("PIB: %s vence\n", 
//         c1.pib > c2.pib ? c1.codigo : c2.codigo);
    
//     printf("Pontos Turísticos: %s vence\n", 
//         c1.pontos_turisticos > c2.pontos_turisticos ? c1.codigo : c2.codigo);

//     // Comparação do Super Poder
//     float super1 = calcular_super_poder(c1);
//     float super2 = calcular_super_poder(c2);

//     printf("\nSuper Poder: %s vence\n", 
//         super1 > super2 ? c1.codigo : c2.codigo);
// }


// int main() {
//     // Sugestão: Defina variáveis separadas para cada atributo da cidade.
//     // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
//     // Cadastro das Cartas:
//     // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
//     // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
//     Cidade cidades[100];
//     int contador = 0;
//     cadastrar_cidades(cidades, &contador);

//     // Exibição dos Dados das Cartas:
//     // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
//     // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//     exibir_cidades(cidades, contador);

//     // Escolha de cartas para comparação
//     int idx1, idx2;
//     printf("\nDigite o índice da primeira cidade para comparação: ");
//     scanf("%d", &idx1);
//     printf("Digite o índice da segunda cidade para comparação: ");
//     scanf("%d", &idx2);

//     if (idx1 >= 0 && idx1 < contador && idx2 >= 0 && idx2 < contador) {
//         comparar_cartas(cidades[idx1], cidades[idx2]);
//     } else {
//         printf("Índices inválidos!\n");
//     }
//     return 0;
// }
