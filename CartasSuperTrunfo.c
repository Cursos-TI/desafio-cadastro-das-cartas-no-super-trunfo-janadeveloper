#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


//Typedef dando o nome de "Cidade" para a nossa estrutura "Cartas Super Trunfo", no qual com o Struct podemos agrupar variáveis 
typedef struct CartasSuperTrunfo
{
    char codigo [5]; // Código da cidade (Ex: "A01", "B02"), armazenado como uma string de até 4 caracteres + 1 para o '\0' (terminador de string).
    int populacao; // Número de habitantes da cidade.
    float area; // Área da cidade em km².
    float pib; // Produto Interno Bruto (PIB) da cidade em bilhões.
    int pontos_turisticos; // Número de pontos turísticos na cidade.
} Cidade;

void exibir_dados(Cidade cidade){ //Recebe um único objeto do tipo Cidade para Exibição.

    //Declarando as variavéis densidade e PIB per capita.
    float densidade = 0;
    float pib_per_capita = 0;

    //Calculo da densidade e pib per capita
    if (cidade.area > 0) {
        densidade = cidade.populacao / cidade.area;
    }
    if (cidade.populacao > 0) {
        pib_per_capita = cidade.pib / cidade.populacao;
    }

    printf("Código: %s\n", cidade.codigo);
    printf("População: %d habitantes\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f bilhões\n", cidade.pib);
    printf("Pontos Turísticos: %d\n", cidade.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita);
    printf("------------------------------\n");
}

// Vamos criar um array cidade cidades[], onde cada elemento irá armazenar as informações de uma cidade;

void cadastrar_cidades(Cidade cidades[], int *contador) {
    char estado;
    
    for (estado = 'A'; estado <= 'H'; estado++) {  // Para cada estado de A a H (8 estados)
        for (int i = 1; i <= 4; i++) {  // Cada estado terá 4 cidades
            printf("Cadastro da cidade %d do estado %c\n", i, estado);
            
            // Solicitar que o usuário digite o código da cidade no formato "A01", "A02", etc.
            printf("Digite o código da cidade (exemplo: A01, A02): ");
            scanf("%s", cidades[*contador].codigo);  // Captura o código diretamente

            // Validar o formato do código inserido
            if (cidades[*contador].codigo[0] != estado || 
                cidades[*contador].codigo[1] != '0' + i / 10 ||  // Para o primeiro dígito (se necessário)
                cidades[*contador].codigo[2] != '0' + i % 10 ||  // Para o segundo dígito
                cidades[*contador].codigo[3] != '\0') {
                printf("Código inválido. Por favor, insira novamente.\n");
                --*contador;  // Não incrementa o contador, pois o cadastro não foi bem-sucedido
                continue;  // Volta ao início do loop para tentar novamente
            }

            printf("População: ");
            scanf("%d", &cidades[*contador].populacao);
            printf("Área (km²): ");
            scanf("%f", &cidades[*contador].area);
            printf("PIB (bilhões): ");
            scanf("%f", &cidades[*contador].pib);
            printf("Número de pontos turísticos: ");
            scanf("%d", &cidades[*contador].pontos_turisticos);

            (*contador)++;
        }
    }
}

// Precisamos saber o número de cidades cadastradas, para isso vamos usar um contador.
// Depois exibir os dados e detalhes da cidade.
void exibir_cidades(Cidade cidades[], int contador) {
    printf("\nLista de Cidades Cadastradas:\n");
    for (int i = 0; i < contador; i++) {
        exibir_dados(cidades[i]);
    }
}
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    Cidade cidades[100];
    int contador = 0;
    cadastrar_cidades(cidades, &contador);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    exibir_cidades(cidades, contador);
    return 0;
}
