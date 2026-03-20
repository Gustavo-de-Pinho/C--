#include <iostream> //Precisamos obrigatoriamente importar essa biblioteca aqui
#include <vector>
#include <string>

int main() {
    int x; //definimos uma variavel que recebera entrada do usuario

    srand(time(NULL)); //definimos uma seed para o randomico, no caso o horario
    int y = (rand() % 10) + 1; //rand sempre escolhe entre 1 e 32586, mas queremos somente entre 1 e 10
    //se fazermos resto da divisão por 10, sempre vamos onter um numero entre 0 e 9, +1 = 1 a 10

    for (int i=0; i < 5; i++){
        std::cout << "voce consegue advinhar o numero que estou pensando? (valor entre 1 e 10)" << "\n";
        std::cin >> x; //entrada do usário para a variável

        if (x == y){
            std::cout << "Parabens voce ganhou!!! A respotas era " << y;
            return 0; //Se x for a escolha da maquina, parabéns
        }
        else if (x == y + 1 || x == y-1){// || siginifica ou, e && and
            std::cout << "Quase, voce esta proximo..." << "\n";
        } //se estiver próximo por uma casa avisamos
        else{
            std::cout << "Nao... Tente mais uma vez" << "\n";
        }
    }

    std::cout << "Que pena... chegamos ao limite de 5 tentativas, voce PERDEU...";

    return 0;
}