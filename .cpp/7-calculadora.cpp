#include <iostream> 
#include <vector>
#include <string>

void LerNumeros(double &a, double &b){ //Criamos uma função, precisamos colocar o & na frente, para que
    std::cout << "Digite o primeiro numero "; //salvemos o valor na referencia
    std::cin >> a;
    std::cout << "Digite o segundo numero ";
    std::cin >> b;
}

double CalcSoma(double n1, double n2){
    double resultado = n1 + n2;
    std::cout << "A soma resultou em: " << resultado << "\n";
    return resultado; //Esse resultado aqui é meio inútil, MASSS caso querermos aprimorar a calculadora
    //poder ser útil
}

double CalcSub(double n1, double n2){
    double resultado = n1 - n2;
    std::cout << "A subtracao resultou em: " << resultado << "\n";
    return resultado;
}

double CalcMult(double n1, double n2){
    double resultado = n1 * n2;
    std::cout << "A multiplicacao resultou em: " << resultado << "\n";
    return resultado;
}

double CalcDiv(double n1, double n2){
    double resultado = n1 / n2;
    std::cout << "A divisao resultou em: " << resultado << "\n";
    return resultado;
}

int main(){
    int val;
    char YesOrNO;
    bool verificador = true;
    double n1, n2;
    double resultado;

    std::cout << "!!! Bem vindo a calculadora de C++ !!!" << "\n";
    while (verificador) { //um while para repetir o processo enquanto o usuário não sair.
        std::cout << "--------------------------------------" << "\n";
        std::cout << "Qual conta vamos realizar agora? \n" << "[1] - Para somar \n";
        std::cout << "[2] - Para Subtrair \n" << "[3] - Para multiplicar \n" << "[4] - Para dividir \n";
       
        std::cin >> val;

        switch(val){ //Switch case, só funciona com números inteiros. Agora tem no python também, tem no PHP também
            case 1:
                LerNumeros(n1, n2);
                resultado = CalcSoma(n1, n2); // Aramazenando o valor para caso querer trabalhar com histórico e melhorar o programa, mas não é o caso agora
                break;
            case 2:
                LerNumeros(n1, n2);
                resultado = CalcSub(n1, n2);   
                break;
            case 3:
                LerNumeros(n1, n2);
                resultado = CalcMult(n1, n2);
                break;
            case 4:
                LerNumeros(n1, n2);
                resultado = CalcDiv(n1, n2);
                break;
            default:
                std::cout << "Entrada inválida";
        }
        
        std::cout << "Deseja continuar? [y] para SIM, [n] para Nao \n";
        std::cin >> YesOrNO;

        while (verificador){
            if (YesOrNO == 'y'){
                break; //quebra só esse loop menor
            }
            else if (YesOrNO == 'n'){
                return 0; //acaba o programa
            }
            else{
                std::cout << "Por favor, digite um valor válido"; //Vai rodar até você colocar um valor válido
            }
        }
    }

    return 0;
}