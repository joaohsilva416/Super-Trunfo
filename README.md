# Super Trunfo em C

## 📖 Sobre o Projeto

Este projeto de faculdade documenta o desenvolvimento de um jogo de cartas "Super Trunfo" utilizando a linguagem C. O objetivo é aplicar conceitos de programação de forma modular e progressiva, partindo dos fundamentos até técnicas mais elaboradas.

O aprendizado foi estruturado em 2 temas cada um com três níveis:

* Tema 1: Super Trunfo em C: fundamentos e técnicas avançadas
  * **Nível 1: Novato** - Criando as cartas do Super Trunfo
  * **Nível 2: Aventureiro** - Calculando Densidade Populacional e PIB per Capita
  * **Nível 3: Mestre** - Batalha de Cartas no Super Trunfo

 * Tema 2: Super Trunfo em C: desenvolvendo a lógica do jogo
    * **Nível 1: Novato** 
    * **Nível 2: Aventureiro** 
    * **Nível 3: Mestre** 

Este documento detalha a implementação e os resultados do **Nível Novato**, que já foi concluído.

---

## 📊 Status do Projeto

### Tema 1: Super Trunfo em C: fundamentos e técnicas avançadas
  * [x] **Nível Novato: Criando as Cartas do Super Trunfo**
  * [ ] Nível Aventureiro: Calculando Densidade Populacional e PIB per Capita
  * [ ] Nível Mestre: Batalha de Cartas no Super Trunfo

---

## 🛠️ Tecnologia Utilizada

* **Linguagem:** C
* **Compilador:** GCC (GNU Compiler Collection)
* **IDE:** VScode

---
## Tema 1: Super Trunfo em C: fundamentos e técnicas avançadas
### 🚀 Nível 1: Novato - Criando as Cartas do Super Trunfo (Concluído)

Neste primeiro nível, o objetivo foi construir a base do jogo: um sistema para cadastrar as cartas com informações sobre cidades. A implementação focou na prática de leitura de dados do usuário, armazenamento em variáveis e exibição organizada dessas informações na tela.

### ✅ Requisitos Cumpridos

#### Requisitos Funcionais

* [x] **Leitura de Dados:** O programa lê corretamente os dados de duas cartas (Estado, Código, Nome, População, Área, PIB, Pontos Turísticos) inseridos pelo usuário via teclado.
* [x] **Armazenamento de Dados:** Os dados lidos são armazenados em variáveis com os tipos apropriados (`char`, `char[]`, `int`, `float`).
* [x] **Exibição de Dados:** As informações de cada carta são exibidas na tela de forma formatada e legível, conforme o modelo especificado.

#### Requisitos Não Funcionais

* [x] **Usabilidade:** O programa é fácil de usar, com instruções claras para guiar o usuário durante a inserção dos dados.
* [x] **Legibilidade:** O código-fonte está bem indentado, comentado e utiliza nomes de variáveis significativos, facilitando a leitura e a compreensão.
* [x] **Corretude:** O programa compila sem erros e executa corretamente, atendendo a todos os requisitos do desafio.

### 📜 Simplificações e Restrições do Desafio

Conforme as regras do nível, o desenvolvimento seguiu as seguintes simplificações:

* Implementação do cadastro e exibição de apenas **duas cartas**.
* O código é uma **sequência simples de instruções**, sem o uso de estruturas de repetição (`for`, `while`) ou de decisão (`if`, `else`).
* O foco exclusivo foi na leitura, armazenamento e exibição de informações, sem lógicas de comparação ou mecânicas de jogo.

---

## ⚙️ Como Compilar e Executar

1.  **Pré-requisitos:**
    * Certifique-se de ter um compilador C (como o `gcc`) instalado em seu sistema.

2.  **Compilação:**
    * Abra o terminal ou prompt de comando.
    * Navegue até a pasta onde o seu arquivo `.c` está localizado.
    * Execute o seguinte comando para compilar o programa:
        ```bash
        gcc super-trunfo.c -o super-trunfo.exe
        ```

3.  **Execução:**
    * Após a compilação, execute o programa com o comando:
        ```bash
        ./super-trunfo.exe
        ```

4.  **Uso:**
    * O programa solicitará que você insira os dados da Carta 1 e, em seguida, da Carta 2.
    * Após a inserção de todos os dados, as informações das duas cartas serão exibidas no console.

### Exemplo de Saída na Tela

```
*** Cartas Cadastradas ***

Carta 1: 
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
```
