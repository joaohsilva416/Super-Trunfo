# Super Trunfo em C

## 📖 Sobre o Projeto

Este projeto de faculdade documenta o desenvolvimento de um jogo de cartas "Super Trunfo" utilizando a linguagem C. O objetivo é aplicar conceitos de programação de forma modular e progressiva, partindo dos fundamentos até técnicas mais elaboradas.

O aprendizado foi estruturado em 2 temas cada um com três níveis:

* Tema 1: Super Trunfo em C: fundamentos e técnicas avançadas
  * **Nível 1: Novato** - Criando as cartas do Super Trunfo
  * **Nível 2: Aventureiro** - Calculando Densidade Populacional e PIB per Capita
  * **Nível 3: Mestre** - Batalha de Cartas no Super Trunfo

 * Tema 2: Super Trunfo em C: desenvolvendo a lógica do jogo
    * **Nível 1: Novato** - Comparando Cartas do Super Trunfo
    * **Nível 2: Aventureiro** - Interatividade no Super Trunfo
    * **Nível 3: Mestre** - Implementando Comparações Avançadas com Atributos Múltiplos em C

---

## 📊 Status do Projeto

### Tema 1: Super Trunfo em C: fundamentos e técnicas avançadas
  * [x] **Nível Novato: Criando as Cartas do Super Trunfo**
  * [x] **Nível Aventureiro: Calculando Densidade Populacional e PIB per Capita**
  * [x] **Nível Mestre: Batalha de Cartas no Super Trunfo**

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

* Implementação do cadastro e exibição de apenas duas cartas.
* O código é uma sequência simples de instruções, sem o uso de estruturas de repetição (`for`, `while`) ou de decisão (`if`, `else`).
* O foco exclusivo foi na leitura, armazenamento e exibição de informações, sem lógicas de comparação ou mecânicas de jogo.

### 🚀 Nível 2: Aventureiro - Calculando Densidade Populacional e PIB per Capita (Concluído)

Neste nível, o programa evoluiu para além do simples cadastro de cartas. O objetivo foi aprimorar o sistema para calcular e exibir duas novas e importantes informações para cada cidade: a densidade populacional e o PIB per capita. Essa etapa focou na realização de operações aritméticas com os dados previamente inseridos pelo usuário.

### ✅ Requisitos Cumpridos

#### Requisitos Funcionais

* [x] **Manutenção das Funcionalidades Básicas:** O programa continua lendo e exibindo todos os dados das duas cartas, conforme implementado no nível anterior.
* [x] **Cálculo de Densidade Populacional:** O programa calcula corretamente a densidade populacional (População / Área) e armazena o resultado em uma variável de ponto flutuante (float).
* [x] **Cálculo do PIB per Capita:** O programa calcula corretamente o PIB per capita (PIB / População) e armazena o resultado em uma variável de ponto flutuante (float).
* [x] **Exibição dos Novos Dados:** A densidade populacional e o PIB per capita calculados são exibidos na tela para cada carta, formatados com duas casas decimais.

#### Requisitos Não Funcionais

* [x] **Usabilidade:** O programa continua fácil de usar, com instruções claras para o usuário.
* [x] **Legibilidade:** O código-fonte permanece bem indentado, comentado e com variáveis de nomes significativos.
* [x] **Corretude:** O programa compila sem erros e executa as operações matemáticas conforme o esperado.
* [x] **Eficiência:** Os cálculos são realizados de forma direta e eficiente.

### 📜 Simplificações e Restrições do Desafio

Conforme as regras do nível, o desenvolvimento seguiu as seguintes simplificações:

* Implementação do cadastro, cálculo e exibição para apenas duas cartas.
* O código continua sendo uma sequência simples de instruções, sem o uso de estruturas de repetição (`for`, `while`) ou de decisão (`if`, `else`).

### 🚀 Nível 3: Mestre - Batalha de Cartas no Super Trunfo (Concluído)

No desafio final, o projeto culmina com a implementação da mecânica de batalha entre as cartas. O foco foi utilizar operadores relacionais e realizar conversões de tipo para comparar os atributos, determinar a carta vencedora em cada categoria e introduzir um novo atributo estratégico: o "Super Poder".

### ✅ Requisitos Cumpridos

#### Requisitos Funcionais

* [x] **Manutenção das Funcionalidades Anteriores:** O programa mantém a leitura de dados e os cálculos de densidade populacional e PIB per capita.
* [x] **Cálculo do Super Poder:** O programa calcula corretamente o "Super Poder" de cada carta, somando todos os atributos numéricos (população, área, PIB, pontos turísticos, PIB per capita e o inverso da densidade populacional), com atenção à conversão de tipos.
* [x] **Comparação de Atributos:** O programa compara as duas cartas em todos os atributos numéricos. A lógica considera que o maior valor vence, com exceção da densidade populacional, onde o menor valor é o vencedor.
* [x] **Exibição dos Resultados:** Os resultados de cada comparação são exibidos de forma clara, indicando qual carta venceu e mostrando um valor booleano (1 para vitória da Carta 1, 0 para vitória da Carta 2).

#### Requisitos Não Funcionais

* [x] **Usabilidade:** A interface do programa continua clara e intuitiva.
* [x] **Legibilidade:** O código-fonte está bem estruturado, comentado e de fácil compreensão.
* [x] **Corretude:** O programa compila sem erros e executa todas as lógicas de cálculo e comparação de forma precisa.
* [x] **Eficiência:** As operações são realizadas de maneira eficiente, sem sobrecarga desnecessária.

## Tema 2: Super Trunfo em C: desenvolvendo a lógica do jogo
### 🚀 Nível 1: Novato - Comparando Cartas do Super Trunfo (Concluído)

Após estruturar os dados, este nível focou em implementar a lógica de jogo central: a comparação. O objetivo foi usar estruturas de decisão (if, if-else) para comparar um único atributo entre duas cartas e declarar um vencedor.

### ✅ Requisitos Cumpridos

#### Requisitos Funcionais
* [x] **Recebimento de Dados:** O programa reaproveitou o código do Tema 1 para cadastrar duas cartas.
* [x] **Cálculos:** Densidade Populacional e PIB per capita foram calculados corretamente.
* [x] **Comparar um Atributo:** O programa compara com sucesso um atributo numérico (escolhido no código).
* [x] **Determinar Vencedor:** A lógica para determinar a carta vencedora (maior vence, ou menor vence para Densidade) foi implementada corretamente.
* [x] **Exibir Resultado:** O programa exibe de forma clara qual carta venceu, o atributo usado e os valores de ambas as cartas.

#### Requisitos Não Funcionais
* [x] Usabilidade: A saída do programa é clara e fácil de entender.
* [x] Legibilidade: O código foi bem organizado e comentado.
Aqui estão os níveis 2 e 3 formatados no estilo solicitado:

### 🚀 Nível 2: Aventureiro - Interatividade no Super Trunfo (Concluído)

Neste nível, o jogo ganhou interatividade, dando um grande passo em complexidade. O objetivo foi implementar um menu interativo (`switch`) para que o jogador pudesse escolher qual atributo seria usado na comparação, em vez de ser uma escolha fixa no código. Além disso, a lógica foi aprimorada com estruturas de decisão aninhadas (`if-else`) para tratar as regras de cada atributo.

#### ✅ Requisitos Cumpridos

##### Requisitos Funcionais

* [x] **Menu Interativo:** Foi criado um menu no terminal usando a estrutura `switch` que permite ao jogador escolher qual atributo será usado para comparar as cartas.
* [x] **Comparação de Atributos:** A lógica de comparação foi implementada para todos os atributos selecionáveis (População, Área, PIB, Pontos Turísticos, Densidade Demográfica).
* [x] **Regras de Comparação:** A regra geral (maior vence) e a exceção (Densidade Demográfica, menor vence) foram implementadas corretamente.
* [x] **Exibição do Resultado:** O programa exibe claramente os nomes das cartas, o atributo usado, os valores de cada carta e o vencedor.
* [x] **Tratamento de Empate:** Em caso de empate, a mensagem "Empate!" é exibida.

##### Requisitos Não Funcionais

* [x] **Usabilidade:** O menu e as mensagens exibidas no terminal são intuitivos e fáceis de entender.
* [x] **Performance:** O sistema responde rapidamente às ações do usuário.
* [x] **Manutenibilidade:** O código foi escrito de forma limpa, organizada e bem comentada.
* [x] **Segurança:** O `default` do `switch` foi utilizado para tratar a escolha de opções inexistentes no menu.

### 🚀 Nível 3: Mestre - Implementando Comparações Avançadas com Atributos Múltiplos (Concluído)

Este é o nível final, integrando todo o aprendizado. O desafio foi criar uma lógica de comparação sofisticada, permitindo ao jogador escolher dois atributos diferentes para a batalha. O sistema utiliza menus dinâmicos (`switch`) para impedir a seleção duplicada e determina o vencedor com base na soma dos atributos escolhidos.

#### ✅ Requisitos Cumpridos

##### Requisitos Funcionais

* [x] **Escolha de Dois Atributos:** O sistema permite que o jogador escolha dois atributos numéricos distintos para a comparação.
* [x] **Menus Dinâmicos:** A lógica (`switch` e `if-else`) impede que o jogador selecione o mesmo atributo duas vezes, não exibindo o primeiro atributo escolhido como opção para o segundo.
* [x] **Comparação com Múltiplos Atributos:** A lógica compara corretamente os dois atributos, respeitando a regra inversa da Densidade Demográfica.
* [x] **Soma dos Atributos:** O sistema soma os valores dos atributos para cada carta, e a carta com a maior soma vence a rodada.
* [x] **Tratamento de Empates:** O programa implementa a lógica para tratar empates, exibindo a mensagem "Empate!" se as somas forem iguais.
* [x] **Exibição Clara do Resultado:** O resultado é mostrado de forma organizada, incluindo os nomes das cartas, os dois atributos usados, os valores de cada um, a soma e o vencedor.

##### Requisitos Não Funcionais

* [x] **Usabilidade:** A interface do usuário é intuitiva e fácil de navegar, com mensagens claras para cada etapa.
* [x] **Performance:** O sistema executa as comparações e exibe os resultados rapidamente.
* [x] **Manutenibilidade:** O código é bem estruturado, com indentação consistente, comentários explicativos e nomes de variáveis descritivos.
* [x] **Confiabilidade:** O sistema é robusto, lidando com entradas inválidas (opções de menu) através do `default` do `switch` para evitar travamentos.
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
