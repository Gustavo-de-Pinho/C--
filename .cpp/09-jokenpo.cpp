//Caso você esteja usando VScode, mude de utf-8 para iso 8859-1
#include <iostream>
#include <locale.h> //definir linguagem

//função de escolha do usário, por números porque é melhor de trabaqhar com eles (switch)
int escolher(){
    int escolha;
    std::cout << "Escolha entre: \n [1] Pedra \n [2] Papel \n [3] Tesoura \n";
    std::cin >> escolha;
    std::cout << "------ \n";
    return escolha;
}

//escolha da máquina vai ser por um função pseudo randomica
int escolher_maquina(){
    srand(time(NULL)); //definimos uma seed para o randomico, no caso o horario
    int escolha_maquina = (rand() % 3) + 1; //rand sempre escolhe entre 1 e 32586, mas queremos somente entre 1 e 3
    //se fazermos resto da divisÃ£o por 3, sempre vamos onter um numero entre 0 e 2, +1 = 1 a 3
    return escolha_maquina;
}

//função para definirmos o vencedor
int definindo_resultado(int escolha, int escolha_maquina){
    int resultado; 

    //switch para a escolha do jogador    
    switch(escolha){
        case 1: //Pedra
            if (escolha_maquina == 1){ //if e else para escolha da máquina, aí decidmos o vencedor
                std::cout << "Você escolheu Pedra ! \n";
                std::cout << "A má1quina escolheu Pedra ! \n";
                resultado = 2;
            }
            else if (escolha_maquina == 2){
                std::cout << "Você escolheu Pedra ! \n";
                std::cout << "A máquina escolheu Papel ! \n";
                resultado = 3;
            }
            else{
                std::cout << "Você escolheu Pedra ! \n";
                std::cout << "A máquina escolheu tesoura ! \n";
                resultado = 1;
            }
            break;
        case 2: //Papel
            if (escolha_maquina == 1){
                std::cout << "Você escolheu Papel ! \n";
                std::cout << "A máquina escolheu Pedra ! \n";
                resultado = 1;
            }
            else if (escolha_maquina == 2){
                std::cout << "Você escolheu Papel ! \n";
                std::cout << "A máquina escolheu Papel ! \n";
                resultado = 2;
            }
            else{
                std::cout << "Você escolheu Papel ! \n";
                std::cout << "A máquina escolheu tesoura ! \n";
                resultado = 3;
            }
            break;
        case 3: //Tesoura
            if (escolha_maquina == 1){
                std::cout << "Você escolheu Tesoura ! \n";
                std::cout << "A máquina escolheu Pedra ! \n";
                resultado = 3;
            }
            else if (escolha_maquina == 2){
                std::cout << "Você escolheu Tesoura ! \n";
                std::cout << "A máquina escolheu Papel ! \n";
                resultado = 1;
            }
            else{
                std::cout << "Você escolheu Tesoura ! \n";
                std::cout << "A máquina escolheu tesoura ! \n";
                resultado = 2;
            }
            break;
            default:
                std::cout << "Error";
            break;
        }
        return resultado; //precisamos retornar algo, no caso o resultado
    }


int main(){
    bool bandeira = true; //bandeira para defirnir a continuidade do while
    char resposta; //para decidir se quer continuar, sim ou não
    int escolha; //recebe resultado da função escolher
    int escolha_maquina; //recebe resultado da função escolher_maquina
    int resultado; //recebe resultado definido pela função definindo resultado
    int vitorias = 0; //contador de vitórias
    int derrotas = 0; //contador de derrotas

    setlocale(LC_ALL, "Portuguese"); //definindo o ABNT

    std::cout << "!!! Bem vindo ao simulador de jokenpo em C++ !!! \n";
    std::cout << "------------------------------------------------ \n";

    while (bandeira){
        escolha = escolher(); //primeiro o jogador escolhe
        escolha_maquina = escolher_maquina(); //a maquina recebe seu valor
        resultado = definindo_resultado(escolha, escolha_maquina); //calculamos o resultado
        std::cout << "----------- \n";
        if (resultado == 1){ //com base com o que foi recebido da função anterior, calculamos o resultado
            std::cout << "Parabéns, você ganhou !!! \n";
            vitorias++;
        }
        else if (resultado == 2){
             std::cout << "Ah, empatou. \n";
        }
        else{
            std::cout << "Vixi... você perdeu... \n";
            derrotas++;
        }

        std::cout << "----------- \n";
        std::cout << "Deseja continuar? [y]/[n] \n";
        std::cout << "N° de vitórias: " << vitorias << "\n";
        std::cout << "N° de derrotas: " << derrotas << "\n";
        while (bandeira){ //um while dentro do while para a escolha se deseja continuar
            std::cin >> resposta;
            if (resposta == 'y'){
                break; //saímos o loop desse while, poderiamos atribuir 'bandeira' como false e depois como true, mas ocuparia 2 linhas ao inves de 1
            }
            else if (resposta == 'n'){
                    std::cout << "Obrigado por jogar!";
                    return 0; //encerramos o programa aqui caso respota seja não
            }
            else{
                std::cout << "Por favor, insira um valor válido \n"; //usuario é obrigado a inserir y ou n
            }
        }
    }

    return 0;
}