# Estudos em C++

Este espaço foi criado para facilitar a revisão de conceitos, documentar o que estou aprendendo e armazenar programas práticos para entender o funcionamento da linguagem C++.

---

## Introdução
O objetivo principal deste repositório é consolidar o conhecimento teórico através da prática. Sinta-se à vontade para:
*  Contribuir com melhorias.
*  Testar e replicar os códigos.
*  Usar como base para seus próprios estudos.

### Contato
Dúvidas ou sugestões? Entre em contato:
* **E-mail:** [tavinhopinho@gmail.com](mailto:tavinhopinho@gmail.com)
* **Instagram:** [@bananada_store](https://instagram.com/bananada_store) (Conheça minha lojinha!)

---

## Glossário de Base

Aqui estão os comandos essenciais da biblioteca padrão (`std`):

| Recurso | Descrição |
| :--- | :--- |
| `std::cout` | **Saída de dados.** Exibe informações no terminal para o usuário. |
| `std::cin` | **Entrada de dados.** Recebe informações digitadas pelo usuário. |
| `std::string` | Representa **textos e frases**. Diferente do `char`, é dinâmico e flexível. |
| `std::vector` | Uma **lista dinâmica** de elementos do mesmo tipo que pode crescer conforme necessário. |

---

## Tipos de Dados Primitivos

Os tipos definem quanta memória o computador reserva para guardar uma informação e o que pode ser armazenado.

| TIPO | Armazenamento | P/ que serve? |
| :---: | :---: | :--- |
| **`bool`** | 1 byte | Valores lógicos: verdadeiro (`true`) ou falso (`false`). |
| **`char`** | 1 byte | Um único caractere (padrão ASCII). |
| **`int`** | 4 bytes | Números inteiros (ex: 1, 10, -500). |
| **`float`** | 4 bytes | Números decimais (32 bits - precisão simples). |
| **`double`** | 8 bytes | Números decimais (64 bits - alta precisão). |
| **`void`** | 0 bytes | Representa a ausência de tipo ou valor vazio. |

---

## Operadores

### 1. Operadores Aritméticos
| Operador | Nome | Exemplo (x=10, y=3) | Resultado |
| :---: | :--- | :---: | :---: |
| `+` | Adição | `x + y` | 13 |
| `-` | Subtração | `x - y` | 7 |
| `*` | Multiplicação | `x * y` | 30 |
| `/` | Divisão | `x / y` | 3 (se for int) |
| `%` | Módulo | `x % y` | 1 (resto) |
| `++` | Incremento | `x++` | 11 |
| `--` | Decremento | `x--` | 9 |

### 2. Operadores Relacionais (Comparação)
| Operador | Nome | Exemplo | Retorno |
| :---: | :--- | :---: | :---: |
| `==` | Igual a | `10 == 10` | true |
| `!=` | Diferente de | `10 != 5` | true |
| `>` | Maior que | `10 > 5` | true |
| `<` | Menor que | `10 < 5` | false |
| `>=` | Maior ou igual | `10 >= 10` | true |
| `<=` | Menor ou igual | `5 <= 10` | true |

### 3. Operadores Lógicos
| Operador | Nome | Descrição | Exemplo |
| :---: | :--- | :--- | :--- |
| `&&` | **AND (E)** | Verdadeiro se **ambas** as condições forem true. | `(x > 0 && x < 10)` |
| `\|\|` | **OR (OU)** | Verdadeiro se **uma** das condições for true. | `(x == 5 \|\| x == 0)` |
| `!` | **NOT (NÃO)** | Inverte o estado lógico da condição. | `!(x == y)` |

### 4. Atribuição Composta
| Operador | Equivalente a... |
| :---: | :--- |
| `x += 5` | `x = x + 5` |
| `x -= 5` | `x = x - 5` |
| `x *= 5` | `x = x * 5` |
| `x /= 5` | `x = x / 5` |

---

## Estruturas Condicionais

As condicionais permitem que o programa execute diferentes blocos de código dependendo de uma expressão booleana.

### 1. O Bloco `if`, `else if` e `else`
É a estrutura mais comum. O programa testa uma condição; se for falsa, ele pode testar outra ou executar um bloco padrão.

| Estrutura | Descrição |
| :--- | :--- |
| `if` | Executa o bloco se a condição for **verdadeira**. |
| `else if` | Testas uma **nova condição** caso a anterior seja falsa. |
| `else` | Executa um bloco caso **todas** as condições anteriores sejam falsas. |

**Exemplo em Código:**
```cpp
int velocidade = 85;

if (velocidade > 110) {
    cout << "Multa Grave!";
} else if (velocidade > 80) {
    cout << "Multa Leve";
} else {
    cout << "Dentro do limite";
}
```
### 2. O Comando `switch case`
O `switch` é uma alternativa mais limpa ao `if/else` quando você precisa comparar uma única variável contra vários valores constantes.

| Palavra-Chave | Função |
| :---: | :--- |
| **`switch`** | Define a variável que será analisada. |
| **`case`** | Define um valor específico para comparação. |
| **`break`** | Interrompe a execução (impede que o código "atropele" os próximos casos). |
| **`default`** | Executado se nenhum dos casos anteriores for correspondido. |

**Exemplo Prático:**
```cpp
int opcao = 2;

switch (opcao) {
    case 1:
        std::cout << "Iniciando novo jogo...";
        break;
    case 2:
        std::cout << "Carregando partida salva...";
        break;
    case 3:
        std::cout << "Saindo do sistema...";
        break;
    default:
        std::cout << "Erro: Opção inválida!";
        break;
}
````

---

## Estruturas de Repetição (Loops)

Os laços de repetição permitem executar o mesmo bloco de código várias vezes, até que uma condição específica seja atingida.

### 1. O Laço `for`(Para x em y)
É utilizado quando você **sabe exatamente quantas vezes** o código deve ser repetido. Ele agrupa a inicialização, a condição e o incremento em uma única linha.

| Parte | Função |
| :---: | :--- |
| **Inicialização** | Onde a variável de controle começa (ex: `i = 0`). |
| **Condição** | O loop roda enquanto esta condição for verdadeira. |
| **Incremento** | Como a variável de controle muda a cada volta (ex: `i++`). |

**Exemplo:**
```cpp
// Conta de 0 a 4
for (int i = 0; i < 5; i++) {
    std::cout << "Volta número: " << i << std::endl;
}
```

### 2. O Laço `while` (Enquanto)
O `while` é uma estrutura de pré-teste. Isso significa que ele verifica a condição **antes** de executar o bloco de código. Se a condição for falsa logo de cara, o código dentro dele nunca será executado.

| Componente | Função |
| :---: | :--- |
| **Condição** | O loop continuará rodando enquanto esta expressão resultar em `true`. |
| **Corpo** | Bloco de comandos que será repetido. |

**Exemplo Prático:**
```cpp
int energia = 5;

while (energia > 0) {
    std::cout << "Lutando... Energia: " << energia << std::endl;
    energia--; // Reduz a variável para que a condição se torne falsa eventualmente
}
```

### 3. O Laço `do-while` (Faça-Enquanto)
Diferente do anterior, o `do-while` é uma estrutura de pós-teste. Ele executa o código primeiro e só depois verifica a condição. Isso garante que o bloco de código seja executado **pelo menos uma vez**.

| Diferença Chave | Por que usar? |
| :---: | :--- |
| **Execução Garantida** | Ideal para menus de usuário ou situações onde a entrada de dados ocorre dentro do loop. |

**Exemplo Prático:**
```cpp
int palpite;
do {
    std::cout << "Digite o numero secreto (1 a 10): ";
    std::cin >> palpite;
} while (palpite != 7);

std::cout << "Voce acertou!";
````
