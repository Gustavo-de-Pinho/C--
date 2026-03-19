#include <iostream> //Precisamos obrigatoriamente importar essa biblioteca aqui
#include <vector>
#include <string>

int main(){
    int x; //será a variável de escolha do usário
    char yes_or_no; //reposta de sim ou não
    bool verificador = true; //condicional

    while (verificador){ //loop para verificar se é par ou impar, como verificador é true, ele continua infinito
        std::cout << "Digite o numero que deseja verificar: " << "\n";
        std::cin >> x; //usuário escolhe um valor para analise

        //condição, que está dentro do loop
        if (x%2 == 1){ //divisão por 2, pega o resto e compara a um
            std::cout << "O numero " << x << " eh impar" << "\n";
        }
        else{ //se não for 1, logo, é par
            std::cout << "O numero " << x << " eh par" << "\n";
        }
        while (verificador){ //fazemos um loopmp ara saber se quer continuar
            std::cout << "Deseja continuar? Digite (y) para SIM, ou (n) para NAO " << "\n";
            std::cin >> yes_or_no; //usuário vai digitar y ou n

            if(yes_or_no == 'n'){ //Se n, encerra o programa
                return 0;
            }
            else if (yes_or_no == 'y'){ //Se sim, saímos do loop
                break; //break só quebra um loop, não todos
            }
            else{ //qualquer coisa diferente daquilo, pede para tentar de novo
                std::cout << "\n" << "Por favor, digite um valor valido " << "\n";
            }
        }
    }
    return 0;
}