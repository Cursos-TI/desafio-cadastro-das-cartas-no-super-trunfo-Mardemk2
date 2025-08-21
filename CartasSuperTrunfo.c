#include <stdio.h>#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Alex

int main() {
        //Declaração de variaveis
    char estado1, estado2 = 'a';
    char codigo1[5], codigo2[5] = "021";
    char cidade1[20], cidade2[20] = "cidade";
    int populacao1, turistico1, populacao2, turistico2 = 1;
    float area1, pib1, area2, pib2 = 1.10;

    printf ("Bem Vindo Ao jogo Super Trunfo!\n");
    //Inicio da solicitação de dados do usuario para a 1º carta do jogo
    printf ("Digite a letra representante do estado da carta 1:(A a H): \n");
    scanf (" %c", &estado1); //Recebe os dados do estado da carta 1
      
    printf ("Digite o código da carta 1: \n");
    scanf (" %s", &codigo1);//Recebe o codigo da carta 1

    printf ("Digite o nome da cidade da Carta 1: \n");
    scanf (" %s", &cidade1); //Recebe a cidade da carta 1

    printf ("Digite o número da população da Carta 1: \n");
    scanf (" %d", &populacao1); //Recebe o numero da populacao da carta 1

    printf ("Digite a área da cidade em quilômetros quadrados da Carta 1: \n");
    scanf (" %f", &area1);//Recebe a area da carta 1

    printf ("Digite o PIB(Produto Interno Bruto) da Carta 1: \n");
    scanf (" %f", &pib1); //Recebe o PIB da carta 1

    printf ("Digite a quantidade de pontos turísticos da Carta 1: \n\n");
    scanf (" %d", &turistico1); //Recebe o NUMERO de pontos turisticos da carta 1
    //Fim da solicitação de dados do usuario para a 1º carta do jogo

    //Inicio da solicitação de dados do usuario para a 2º carta do jogo
    printf ("Digite a letra representante do estado da carta 2:(A a H): \n");
    scanf (" %c", &estado2); //Recebe os dados do estado da carta 2
      
    printf ("Digite o código da carta 2: \n");
    scanf (" %s", &codigo2); //Recebe o codigo da carta 1

    printf ("Digite o nome da cidade da Carta 2: \n");
    scanf (" %s", &cidade2); //Recebe a cidade da carta 2

    printf ("Digite o número da população da Carta 2: \n");
    scanf (" %d", &populacao2); //Recebe o numero da populacao da carta 2

    printf ("Digite a área da cidade em quilômetros quadrados da Carta 2: \n");
    scanf (" %f", &area2); //Recebe a area da carta 2

    printf ("Digite o PIB(Produto Interno Bruto) da Carta 2: \n");
    scanf (" %f", &pib2); //Recebe o PIB da carta 2

    printf ("Digite a quantidade de pontos turísticos da Carta 2: \n\n");
    scanf (" %d", &turistico2);//Recebe o NUMERO de pontos turisticos da carta 2

    //Fim da coleta de dados da segunda carta

    //Exibição das cartas com os dados fornecidos pelo usuario
    printf ("CARTA 1: \n");
    printf ("Estado: %c\n", estado1);
    printf ("Codigo: %c%s\n", estado1, codigo1);
    printf ("Nome da cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %f\n", area1);
    printf ("PIB: %f\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n\n", turistico1);

    printf ("CARTA 2: \n");
    printf ("Estado: %c\n", estado2);
    printf ("Codigo: %c%s\n", estado2, codigo2);
    printf ("Nome da cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %f\n", area2);
    printf ("PIB: %f\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", turistico2);
    

    return 0; //fim do programa

  }

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
