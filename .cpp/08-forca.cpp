#include <iostream> 
#include <vector>
#include <string>
#include <cstring>

//criamos uma função para ler a letra
void LerLetra(char &letra){
    std::cout << "escolha uma letra de A-Z: ";
    std::cin >> letra;
}

//criamos uma função para comparar os dois arrays e verificar se há a letra escolhida
//na resposta. Se houver, inserimos a letra em um array de ______ e vamos revelando ao poucos
//Impotante, note que diferentemente de variaveis normais, os arrays em funções são diferentes
//Note que precisamos declarar eles com [] na  frente, e também não precisamos do & para vinc.
//Já é enviado o endereço, difernetemente de variaveis normais que é o valor
void CompararArray(char letra, char vetorcomparado[], char vetordesaida[], int tamanho){
    for (int i=0; i<tamanho; i++){ //infelizmente temos que informar o tamanho
        if (letra == vetorcomparado[i]){ //já que o size of não funciona
            vetordesaida[i] = letra;
        }
    }
}

int main(){
    bool variavel = true;
    char letra;
    int tamanho = 11;
    char resposta[11] = "HIPOPOTAMO";
    char comparacao[11] = "__________";
    char comparacaovidas[11] = "__________";
    int vidas = 5;
    //declarando todas as variaveis que vamos usar

    std::cout << "!!! Bem vindo ao jogo da forca !!! \n";

    while(vidas != 0){ //se errar 5 vezes, você perde.
        std::cout << "---------------------------------- \n";
        LerLetra(letra);

        strcpy(comparacaovidas, comparacao); //Opa, função da biblioteca csstring, para não
        //termos que copiar char por char no outro array. Difernetemente do python arrays
        //aqui sá imutaveis (tipo as tuplas, mas aqui é ordenado)

        CompararArray(letra, resposta, comparacao, tamanho);
 
        std::cout << "Chegamos em: " << comparacao << "\n"; //Perceba que não precisei salvar
        //a comparação em nenhum lugar, porque ela já foi alterada na própria função

        if (strcmp(comparacao, comparacaovidas) == 0) { //Função para comparar dois arrays,
        // Fazer na unha ocupa muitas linhas. Cuidado, essa biblioteca foi pensado em C, a logica
        //dela é de subtração de caracter por caracter e se for 0 significa que são iguais
            vidas--;
            std::cout << "Errou! Vidas restantes: " << vidas << "\n";
        }

        if (strcmp(comparacao, resposta) == 0) {
            std::cout << "!! PARABENS !! VOCE GANHOU !!\n";
            return 0;
        }
        }

    std::cout << "Quen pena... voce perdeu!";
    return 0;
}