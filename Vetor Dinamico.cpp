#include <iostream>
#include <new>

int main()
{
    //Definimos uma variavel com um número inteiro
    int N = 5;

    //definimos para a variavel N inteiro, o * cria um ponteiro
    //Dessa forma será armazenado o endereço, não o valor
    //operador de alocação dinâmica. Ele pede ao sistema operacional um espaço de memória livre no Heap
    //int é o tipo de dados que serão alocados e [N] o número de espaços
    int* v = new int[N];

    //para i = 0 ponto de PARTIDA; enquanto i for menor que N CONDIçÃO; ++i i ganha +1 próximo passo
    for (auto i = 0; i < N; ++i) {
        //O endereço do pontei em relação a i, recebe i *2
        v[i] = i*2;
    }

    //Imprimindo aqueles valores
    for (auto i = 0; i < N; ++i) {
        std::cout << v[i] << ' ';
    }

    std::cout << '\n';

    //memória alocada com new não é liberada automaticamente quando a função acaba; ela "vive" até 
    //você deletá-la manualmente.

    delete[] v;
    return 0;
}