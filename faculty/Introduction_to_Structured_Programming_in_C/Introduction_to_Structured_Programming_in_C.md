<link href="https://cdn.jsdelivr.net/npm/devicons@1.8.0/css/devicons.min.css" rel="stylesheet">

# <img align="center" height="40" width="40" src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/c/c-original.svg" /> Introdução a Programação Estruturada em C



C é uma linguagem de programação poderosa e amplamente utilizada, conhecida por sua simplicidade, eficiência e flexibilidade, sendo uma ótima opção para a edificação de conhecimentos sobre como o desenvolvimento de fato funciona. 
</br>
</br>
Criada por Dennis Ritchioe em meados dos anos 1970, ela foi projetada inicialmente para o desenvolvimento no sistema operacional Unix, que seria um sistema multitarefa e multiusuário e uma das bases mais influentes na computação moderna, sendo o "pai" de muitos sistemas operacionais populares, como Linux, MacOS e até partes do Windows. 
</br>
</br>
C logo se tornou umas das linguagens mais populares do mundo da programação e aqui estão alguns pontos importantes sobre essa linguagem:

1. C oferece acesso direto à memória e controle sobre o hardware, permitindo que você escrava códigos eficientes e otimizados, além de ser frequentemente chamada de "linguagem de baixo nível de alto 

2. Suporta programação estruturada, permitindo que você divida problemas grandes em partes menores (funções);

3. O código escrito em C pode ser compilado em diferentes plataformas com poucas alterações, ou seja, boa portabilidade;

4. Rápida e eficiente, sendo ideal para sistemas embarcados, jogos, banco de dados e sistemas operacionais.

## 🔩 Solução de Problemas e Pensamento Computacional

### 📌 Lógica de Programação:

Antes de darmos inicio ao estudo aprofundado sobre essa introdução gostaria de apresentar o conceito de Lógica de Programação. Para exemplificar melhor, iremos analisar exclusivamente a ideia de "lógica".

Primeiramente, gostaria de expôs que o filósofo grego Aristóteles é considerado o criador da lógica, estabelecendo-a, na Grécia Antiga, como uma disciplina denominada "Razão".

> A Lógica é lida como raciocínios e argumentos
>
> Um argumento pode ser composto por uma ou várias premissas, as quais podem ser verdadeiras ou falsas e conduzem à conclusão, que também poderá ser verdadeira ou falsa. No argumento exemplificado a seguir, temos em 1 e 2 as premissas e em 3 a conclusão:
>
> 1. Paiva é mais velho que Lucas
> 2. Lucas é mais velho que Vitoria
> 3. Logo, Paiva é mais velho que Vitoria
>
>
>A lógica é aplicada a diversas ciências. Na informática a lógica é empregada em áreas que vão da construção de circuitos elétricos, que constituem o hardware dos dispositivos eletrônicos, ao software que permite seu funcionamento e uso.
>
> Ao pensar, muitas vezes efetuamos certas operações sobre proposições, chamadas de operações lógicas, que obedecem a regras de um cálculo, denominado “cálculo proposicional”, semelhante ao da aritmética sobre números.

__Lógica:__

Declarado na lingua portuguesa como modo de raciocinar de forma coerente e mais produtiva possível, ou seja, o ato de pensar e desenvolver essa lógica para constituir uma ação com uma finalidade que ocasionara em um resultado com maior qualidade possível. Caso não esteja tão claro tentarei exemplificar melhor:

> Digamos que você trabalha no setor de matriculas de novos alunos da faculdade Estácio - Via Corpus, e precisa fazer o cadastro de um novo aluno no curso de Sistemas de Informação, mas o computador nesse momento está indisponível e você terá que realizar tudo a mão. Sempre mantendo a ideia de agilidade e organização para armazenar dados importantes.
</br>
</br>
1 - Primeiro você irá destinar um espaço somente para anotar esses dados, que por enquanto será uma folha;
</br>
2 - Depois ira pegar um meio para escrever esses dados, que será uma caneta;
</br>
3 - Você precisaria dividir cada informação em uma tabela dentro do espaço destinado, para assim ter maior organização;
</br>
4 - Vai pedir os dados do novo aluno e anotara;
</br>
5 - Verificará se possui algum erro nos dados e arquivara em algum local seguro para depois colocar no banco de dados.
</br>
</br>
Afinal, você tem um modelo de lógica para anotar e guardar os dados desse aluno que foi matriculado na faculdade, assim, você seguiu uma lógica pre-estabelecida que supostamente você montou em sua cabeça e será a forma mais ágil de realizar essa tarefa.
</br>
</br>
Ficou mais claro?

Essa ideia de lógica, paralelamente, o proposto desafio de matricular um aluno é completamente a definição do que seria a lógica de programação, que seria montar e desenvolver o melhor método para executar uma tarefa.


### 📌 Solução Estruturada:

Abordagem de desenvolvimento de software e resolução de problemas que se baseia em dividir um problema complexo em partes menores e mais gerenciáveis. Esses pequenos desafios são resolvidos de forma independente, mas de maneira organizada, seguindo princípios de **programação estruturada**. Sendo esses princípios:

1. Divisão em Módulos:
    - O problema é dividido em partes menores chamadas de **módulos** ou **subprogramas** (funções/procedimentos).
    - Cada módulo resolve uma parte específica do problema.
2. Sequência Lógica:
    - O fluxo do programa segue uma ordem lógica com as três estruturas principais:
        - Sequência: Execução de instruções em ordem;
        - Decisão: Uso de condições para tomar decisões (ex: ```if``` e ```else```)
        - Repetição: Execução de laços ou loops (ex: ```for``` e ```while```)
3. Reutilização:
    - Os módulos podem ser reutilizados em diferentes partes do programa, economizando tempo e esforço.

4. Facilidade de Depuração:
    - Como o problema está dividido em módulos, fica mais fácil identificar e corrigir erros.

5. Legibilidade:
    - Segue uma estrutura clara, facilitando a leitura e o entendimento do código.

### 📌 Pensamento Computacional 

Se trata de um conjunto de habilidades mentais e práticas que ajudam a resolver problemas de maneira sistemática e eficiente. Ele é a base para o desenvolvimento de algoritmos e programas e a principal ferramenta para cumprir a principal responsabilidade de um desenvolvedor, que seria a mitigação de problemas por meios lógicos e modernos. No contexto específico do C, o pensamento computacional é aplicado para entender e resolver incógnitas usando a lógica e os recursos da linguagem.

__As ideias do que seria Pensamento Computacional para determinadas pessoas:__

<details>
<summary>Pensamento Computacional para Grover e Pea (2013)</summary>

</br>

> Com as ideias de Grover e Pea, o pensamento computacional tem nove elementos que os levam a atender alunos interdisciplinarmente, além de avaliar seu desempenho. São eles:
>
> 1. Abstração e reconhecimento de padrões;
> 2. Processamento sistemático da informação;
> 3. Noções de controle de fluxo de algoritmos;
> 4. Decomposição de problemas estruturados;
> 5. Sistema de símbolos e representações;
> 6. Pensamento iterativo, recursivo e paralelo;
> 7. Lógica condicional;
> 8. Eficiência e restrições de desempenho;
> 9. Depuração e detecção de erro sistemático.
</details>

<details>
<summary>Pensamento Computacional para Brackmann (2017)</summary>

</br>

> De acordo com os estudos de Brackmann ele desenvolveu a ideia ed que o pensamento computacional tem quatro pilares para a resolução de problemas. São eles:
>
> 1. **Descomposição:** Consiste em dividir o problema inicial em partes menores, permitindo que cada parte reduzida seja mais facilmente resolvida. De maneira geral, problemas que não estão decompostos têm sua resolução mais difícil de enxergar e desenvolver.
>
> 2. **Reconhecimento de Padrões:** Ao decompor o problema em partes menores, é possível aumentar a atenção aos detalhes e perceber que algumas dessas partes menores já são conhecidas ou têm sua solução conhecida, ou seja, algum tipo de problema que você em algum momento dos seus estudos e vida profissional ja teve que solucionar. O reconhecimento de padrões se caracteriza por identificar repetições ou regras de recorrência, aumentando a chance de se conhecer alguma solução para problemas similares.
>
> 3. **Abstração:** Consiste em filtrar e classificar os dados, concentrando a atenção no que realmente é importante. Ela pode ser vista como o principal dos pilares, porque será utilizada em diversos momentos, pois, ao concentrar-se nos dados realmente importantes, a abstração permite que decisões sejam tomadas com maior qualidade.
>
> 4. **Algoritmos:** Procedimentos para resolver um problema com as ações a serem executadas e a ordem em que elas devem acontecer. Na visão acadêmica, aprendemos diversos algoritmos, como os responsáveis por executar operações básicas (soma, subtração, multiplicação e divisão)
</details>

### 📌 Fluxo de requisições (Fluxograma)

Uma boa prática na questão de desenvolvimento é constituído antes mesmo de fato começar a escrever seu código, um importante ato é a criação do que chamamos de **fluxo de requisições**, que seria a elaboração de todo o esquema do nosso sistema utilizando o método de criar um fluxo com todos os fatores que deveremos abordar naquele momento, ou seja, se por exemplos formos trabalhar criando uma interface de cadastrar novos usuários precisamos se atentar a certas coisas, como por exemplo:

1. Todos os campos foram preenchidos?
2. Esse usuário já está cadastrado em nosso sistema?
3. Os dados fornecidos são válidos?
4. Crie uma criptografia dos dados
5. Verificado tudo, mande para o nosso SGBD para enviar ao BD

Esse é um exemplo de algumas perguntas que são padrões no momento que estivermos trabalhando com um fluxo de requisições de cadastros, mas é somente o começo de sistemas muitos mais complexos que precisam passar por vários tópicos.

Vamos demonstrar como seria esse fluxograma de forma prática agora, reutilizando a ideia de uma interface que possui cadastro:

<img src="./images/flow_request.png">

> Site: Miro.com.br

<img src="./images/flowchart_1.png">
<img src="./images/flowchart_2.png">

##  Algoritmos e Portugol

Antes de utilizarmos a linguagem C realmente, precisamos entender algumas definições importantes para facilitar o entendimento de como a programação funciona, para tanto, vamos compreender qual o significado de **algoritmo** e **portugol**, respectivamente.

### 📍 Algoritmos:

A ideia de algoritmo é muito antiga e foi bastante discutida entre matemáticos e filósofos que vislumbravam, no século XVII, máquinas universais de calcular e estranhas linguagens simbólicas para representar ideias complexas por meio de sinais convencionais. A matemática clássica é, em grande parte, o estudo de determinados algoritmos que são manipulados por meio de regras práticas, como uma receita, um guia. Isso acontece na álgebra elementar, que substitui os números por letras e define um conjunto de símbolos.

Os algoritmos são muito utilizados em disciplinas ligadas à área de ciências exatas, como matemática, física, química e computação; eles também têm diversas aplicações em outras áreas e atividades, ainda que não sejam conhecidos por esse nome.

- Para que as tarefas possam ser realizadas com êxito, elas devem estar ordenadas.
- Tarefas ordenadas nos levam a noção de Algoritmos. 
- Algoritmos é uma sequência de instruções ordenada, finita, e não ambígua (direta) que são executadas mecanicamente para executar uma tarefa.   

Existem diversos tipos de algoritmos utilizados na computação e o que difere um tipo do outro é a maneira de representar as instruções para realização de uma tarefa. Entre os principais tipos de algoritmos, podemos citar:

1. Descrição Narrativa
2. Diagrama de Chapin
3. Pseudocódigo 
4. Fluxograma 

### 📍 Descrição Narrativa (Linguagem Textual):

> A mais simples de entender, visto que utilizamos o a linguagem natural, ou seja, nosso idioma para criar uma lógica

A descrição narrativa utiliza linguagem natural para especificar os passos da realização das tarefas. Pela pouca formalidade e por dar margem a interpretações ambíguas, dificilmente é utilizada na representação de algoritmos.

```
1. Ler valores para o A e B
2. Verificar se o A é maior que o B
3. Se A for maior que o B
4. Mostre: "O maior valor é A"
5. Se A for menor que o B"
6. Mostre: O maior valor é B"
7. Se os valores de A e B forem iguais
8. Mostre: "Os valores A e B são iguais"
9. Fim
```

### 📍 Diagrama de Chapin

O diagrama de Chapin, também conhecido como diagrama Nassi-Shneiderman ou diagrama N-S, apresenta a solução do problema por meio de um diagrama de quadros com uma visão hierárquica e estruturada. Esse tipo de diagrama não é muito utilizado, pois é difícil representar alguns procedimentos

<img src="./images/chapin.png">

### 📍 Pseudocódigo 

> A mais próxima dos códigos de programação, já que utilizamos um estilo de sintaxe similar as linguagens de programação.

O pseudocódigo é uma forma de representação de algoritmos que utiliza uma linguagem flexível, intermediária entre a linguagem natural e a linguagem de programação. É utilizado para organizar o raciocínio lógico a ser seguido para a resolução de um problema ou para definir os passos para a execução de uma tarefa. 

- A palavra “pseudocódigo” significa “falso código”.

Esse nome se deve à proximidade que existe entre um algoritmo escrito em pseudocódigo e a maneira pela qual um programa é representado em uma linguagem de programação.

``` 
1.  Algoritmo exemplo2.3
2.  Var
3.      a, b: inteiro
4.  Início
5.      Ler (a,b)
6.      Se (a>b) então
7.          Mostrar ("O maior valor é a" a)
8.      senão
9.          Se (a<b) então
10.             Mostrar("O maior valor é b" b)
11.     senão
12.         Mostrar("Os valores de A e B são iguais)
13.     Fim-se
```
Todo algoritmo representado por um pseudocódigo deve, primeiramente, ser identificado, como aparece na linha 1 do Exemplo 2.3. 

1. Variáveis: 
    - Todas as variáveis que serão utilizadas na resolução do problema devem ser previamente declaradas, isto é, todas as informações necessárias à resolução do problema devem ser representadas. 
    - No exemplo anterior, a palavra reservada Var indica a área para declaração das variáveis e, na linha 3, as variáveis a e b são declaradas.

2. Corpo do algoritmo: 
    - Nas linhas 4 e 15, encontramos as palavras reservadas Início e Fim, respectivamente. 
    - Elas delimitam o espaço definido para escrever todos os passos necessários para solucionar o problema.
    - Nessa parte, devem-se escrever todos os passos lógicos necessários para solucionar o problema, representando, entre outras:
    a entrada de valores para as variáveis;
    as operações de atribuição, lógicas e aritméticas;
    a abertura e o fechamento de arquivos;
    as repetições;
    a exibição dos resultados.
    

### 📍 Fluxograma:

> A mais difundida e compreendida mundialmente, já que foi estabelecido um padrão para os fluxogramas, portanto, é entendida por qualquer projetista.

O fluxograma é um tipo de algoritmo que se utiliza de símbolos gráficos para representar ações ou instruções a serem seguidas.

É utilizado para organizar o raciocínio lógico a ser seguido para a resolução de um problema ou para definir os passos para a execução de uma tarefa. O fluxograma, por utilizar figuras para representação das ações, é considerado um algoritmo universal.
Cada instrução ou ação a ser executada deve ser representada por meio de um símbolo gráfico (Simbologia).

<img src="./images/flowchart_1.png">

<img src="./images/flowchart_2.png">

---
### Passando para o módulo 02
---

# <img align="center" height="40" width="40" src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/c/c-original.svg" /> Programação em C

Estudaremos a fundo agora como a sintaxe e todo o processo de desenvolvimento de fato na linguagem C funciona. Entretanto, antes iremos retratar algumas definições padrões de todas as linguagens de programação, que seria: **estrutura básica, variáveis, tipos de dados, entrada e saídas, expressões e operadores**.

### 📍 Estrutura Básica

```c
#include <stdio.h> // Adicionado a biblioteca padrão e simples que irá atender as requisições de algoritmos simples.

int main () { // Identifica a área o inicio do código

    // Colocaremos a variáveis e o próprio algoritmo dentro desse escopo

} // Simboliza o fim da área de código

```


> ### 📍 Linguagem de baixo nível:
>
> Definição: São linguagens que têm uma abstração muito próxima do hardware. Elas fornecem pouco ou nenhum controle automático de recursos e dependem de detalhes específicos da arquitetura do computador, como registros, memória e instruções da CPU.
> Exemplos: Assembly, Linguagem de Máquina, C.
>
> **Características:**
>
>1. Mais difíceis de aprender e usar.
>
>2. Maior controle sobre os recursos de hardware.
>
>3. Normalmente mais rápidas e eficientes, pois o código gerado é muito próximo das instruções da máquina.
>
>4. O programador precisa gerenciar detalhes como alocação de memória, registros e instruções específicas.

> ### 📍 Linguagem de alto nível:
>
> Definição: São linguagens que oferecem maior abstração, tornando a programação mais fácil e intuitiva, ao ocultar detalhes complexos do hardware. O foco está em tarefas mais complexas e na produtividade do desenvolvedor.
> Exemplos: Python, Java, JavaScript, C++, Ruby.
> 
> **Características:**
>
>1. Mais fáceis de aprender e usar, pois têm uma sintaxe mais próxima da linguagem humana.
>
>2. O programador não precisa se preocupar com os detalhes do hardware, como gerenciamento de memória e registros.
>
>3. Normalmente mais lentas em termos de execução, pois o código precisa ser interpretado ou compilado para se adaptar à arquitetura do sistema.
>
>4. Mais eficientes para desenvolvimento rápido de aplicativos, sistemas complexos e interativos.

### 📍 Variáveis e Tipos de Dados

Variáveis são espaços na memória do computador que usamos para armazenar informações temporariamente enquanto um programa está em execução. Elas funcionam como uma espécie de "caixa" onde guardamos valores que podem ser usados e alterados durante a execução do programa.

Cada linguagem de programação possui um modelo declaração de variáveis, mas como o foco dos nossos estudos é a linguagem C, aprenderemos como declaramos variáveis na sintaxe proposta e os tipos de dados referentes:

```c
char "Caractere"
// Qualquer caractere
int Inteiros
// Números inteiros, positivos e negativos (...-13, -6, -2, 0, 4, 7, 16...)
float Reais
// Números reais, positivos, negativos e fracionados (...-15.53, -4.31, -2, 0, 0.14, 3.31, 5, 7.98...)
double Reais_Cientificos
// Números reais, positivos, negativos e fracionados científicos (PI = 3,1415926535897932384626...), valores enormes
````

> Vamos ressaltar que eles servem para armazenar informações temporárias, ou seja, são voláteis e assim que a aplicação é encerrada, todos os dados que não foram destinados a serem guardados, serão perdidos.
>
> Iremos futuramente retratar melhor como funciona a ligação das linguagens de programação, juntamente, com os Banco de Dados, que serão responsáveis por armazenar os dados de forma integral.

Uma variável possui: nome, tipo e conteúdo e existem algumas regras sobre como fazemos oque chamamos de **declaração de variável**, que consiste em criar variáveis. Para tanto, utilizaremos os ensinamentos de Robert.C. Martin que escreveu o famoso livro "Código Limpo".

1. **Nomenclatura**: Os nomes da variáveis devem ser claras e descritivas, não é recomendado usar de abreviações e nem do que conhecemos na lingua portuguesa de "gírias". Finalizando, o mais importante é que uma variável é única, não pode possuir nenhuma que tenha a nomenclatura igual, paralelamente, é proibido utilizar qualquer acento na sua nomenclatura.

```c
char acadll
char acadhr
// Exemplos de variáveis ruins, pois consistem em abreviações que não são claras e não seguem uma conduta adequada
```
```c
char Academia_Local, /*ou*/ AcademiaLocal
char Academia_Horario, /*ou*/ AcademiaHorario
// Exemplos de variáveis boas, que são descritivas, explicam o que se espera dessas variáveis e não conta com algum tipo de abreviação
```

> A linguagem C foi desenvolvida seguindo um sistema de **case sensitive**, que consiste em ser sensível as letras maiúsculas e minúsculas, portanto:
>
> perfil, Perfil e PERFIL são completamente diferentes paras as variáveis.

2. **Variáveis Inúteis**: É comum por falta de atenção criamos variáveis que não possuem alguma funcionalidade de fato, é sempre preciso rememorar que as variáveis acabam alocando memória do nosso software sem alguma função.

```c
int a = 5;
int b = 4;
int sum:

sum = a + b;
return 0;
// Criamos uma variável que não possui uma função realmente útil.
```

```c
int a = 5;
int b = 4;

return a + b;
// Podemos retornar o valor dessa soma que não precisaria de fato de uma variável para ser desenvolvida.
```

3. **Variáveis inexistentes e valores mágicos**: É comum enquanto estamos desenvolvendo, construímos algumas "gambiarras" no nosso código, para evitar trabalhos mais complexos ou até tediosos no meio do nosso desenvolvimento

```c
int Salario_Mensal = 1.235;

return Salario_Mensal + 1000;
// O acrescimo ao Salario_Mensal seria uma bonificação mensal que os funcionários irão receber.
```
```c
int Salario_mensal = 1.235;
int Bonus_Mensal = 1000;

return Salario_Mensal + Bonus_Mensal;
// Temos a soma do Salario_mensal mais o Bonus_Mensal que consiste uma variável que será utilizada
```

- Muito importante essa conduta para desenvolvedores que trabalhem em uma equipe de T.I, visto que assim fica claro qual o sentindo desse acréscimo de 1000 que antes não havia uma variável para exemplificar da onde viria esse valor, e criando a variável fica mais evidente de ondem vem esse valor.

### 📍 Entradas e Saídas

Outro conceito comum em qualquer linguagem de programação seria a sintaxe de entrada e saídas de dados, para tanto, na linguagem C iremos compreender como essa sintaxe se organiza.

### ➜ Saídas

Quando queremos escrever dados formatados na tela usando a forma geral de função, a qual possui os tipos de saídas, utiliza-se oque chamamos de ```printf("")```, que consiste em um comando de sintaxe de expôs os dados que o desenvolvedor gostaria de mostrar para o usuário, por exemplo:

```c
#include <stdio.h>

int main () {

    printf("Seja bem vindo(a) ao material de desenvolvimento em C") // O console retornaria a frase que está dentro dos ("")

}
```

Assim funciona a sintaxe básica de saídas de dados, demonstrando como colocamos uma frase simples para visualização, mas dentro do nosso código trabalhamos com variáveis e outros tipos de dados, mas focaremos no momento na saída dos valores das variáveis, que possuem certas formatações para podermos ter o resultado esperado


| Elementos      | Função                                                         |
| -------------- | -------------------------------------------------------------- |
| ```%c```       | Escrita de um caractere ```char```                             |
| ```%d ou %i``` | Escrita de números ```int```                                   |
| ```%f```       | Escrita de números reais com flutuação (```float ou double```) |
| -------------- | -------------------------------------------------------------- |
| ```%s```       | Escrita de vários caracteres                                   |
| ```%p```       | Escrita de um endereço de memória                              |
| ```%e ou %E``` | Escrita em notação científica                                  |

Tratando-se com variáveis precisamos utilizar os elementos acima, exemplificando de forma prática, teria-mos isso da seguinte maneira:

```c
#include <stdio.h>

int main () {

    char Name = "Lucas";
    int Idade = 19;
    float Salario_Hora = 23.75;

    printf("%c é o usuário que possui %i e ganha R$ %f por hora", Name, Idade, Salario_Hora); // O console retornaria: "Lucas é o usuário que possui 19 anos e ganha R$ 23.75 por hora"

}

```

> Algo importante a ressaltar seria essa interpolação de variáveis que foi utilizado, visto que, colocamos somente os elementos para identificar o tipo de variável que ficaria naquela parte do ```printf("")```, e depois colocamos as variáveis na mesma ordem.
 
### ➜ Entradas

Outra sintaxe comumente utilizada em qualquer linguagem de programação seria o comando de entrada, que consiste em um código responsável por receber um valor dado pelo usuário. Dentro da linguagem C seria o ```scanf("")```.

Também utilizaremos os elementos referentes a sintaxe da linguagem C e acompanharemos as variáveis antecedendo do E comercial (&). Primeiramente, só para reforçar nesse momento, segue os elementos da sintaxe de variáveis:

| Elementos      | Função                                                         |
| -------------- | -------------------------------------------------------------- |
| ```%c```       | Escrita de um caractere ```char```                             |
| ```%d ou %i``` | Escrita de números ```int```                                   |
| ```%f```       | Escrita de números reais com flutuação (```float ou double```) |

Exemplificando:

```c

int main () {

    char Name;
    int Idade;
    float Salario_Hora;

    printf("Qual seu nome?");
        scanf("%c", &Name);

    printf("Qual sua idade?");
        scanf("%d", &Idade);
        
    printf("Qual seu Salario por hora?");
        scanf("%f", &Salario_Hora);

}

```

### 📍 Expressões e Operadores Aritméticos

As expressões e operadores aritméticas básicas seriam:

1. Soma (+)
2. Subtração (-)
3. Multiplicação (*)
4. Divisão (/)

| Operações Matemáticas | Simbolo Utilizado |
| --------------------- | ----------------- |
| Maior                 | >                 |
| Menor                 | <                 |
| Maior ou Igual        | <=                |
| Menor ou Igual        | >=                |
| Igualdade             | ==                |
| Desigualdade          | !=                |

### 📌 Estruturas Codicionais

Uma estrutura condicional é um recurso de programação usado para tomar decisões no fluxo de execução de um programa. Ela permite que certas partes do código sejam executadas apenas se uma condição específica for verdadeira. Ou seja, serve diretamente para lidarmos com problemas de lógica que precisamos lidar com uma validação e manipulação de dados a partir de condições.

### 📍 Simples (``if``)

Digamos que só trataremos com uma condição simples que só terá um ponto de acesso, podemos tratar essa lógica com o ``if``, para tanto, apresentaremos sua estrutura básica:

```c
if (condição) {
    // área de codificação da nossa lógica
}
```

Para exemplificar isso, montaremos um simples algoritimo que receberá um valor para uma variavel ``temp`` que trará uma lógica de aceder um LED de aquecimento caso a temperatura for menor ou igual a 30ºc

```c
#include <stdio.h>

int main () {

    float temp;

    printf(Digite a temperatura ambiente: );
    scanf("%f", &temp);

    if (tempo >= 30) {  
        printf("LED de aquecimento acesso!");
    }

}
```
Montamos uma estrutura codicional simples que utiliza da condição de um operador matematico para visualizar o valor de uma variavel e entregar um resultado com printf.

### 📍 Composta (``if`` e ``else``)

Digamos que precisamos lidar com decisões que possuem mais de uma possibilidade de resultado, ou seja, digamos que estamos trabalhando com uma lógica que existe o valor certo, o valor possivelmente certo e o errado, para tratarmos isso, utilizaremos a estrutura codicional mais conhecida como ``if else``. Para tanto, apresentaremos a sua estrutura básica a seguir:

```c
    if(condição){
        //área de codificação da nossa lógica
    } else {
        //área de codificação da nossa lógica
    };

/* 
if = SE
else = SE NÃO
*/
```

Além de tipo de estrutura do if else, que explicando de uma forma mais didática, retrata um condição e caso ela não seja cumprida, encaminhe outro resultado. Mas caso quisermos lidar com uma série de condições em cadeia, podemos utilizar a sintaxe básica a seguir:

```c
    if(condição){
        //área de codificação da nossa lógica
    } else if (condição) {
        //área de codificação da nossa lógica
    } else if (condição) {
        //área de codificação da nossa lógica
    }`
```

Exemplificaremos como aplicar essa estrutura codicional composta a partir de um algoritimo que irá verificar as notas de um aluno, fazendo sua média e caso seja maior a 6, estará aprovado, caso sua média esteja entre os valores 4 a 6, estará de recuperação, caso não, foi reprovado.

```c
#include <stdio.h>

int main () {

    int note1, note2, sum_notes;

    printf("Diga qual foi sua Nota da primeira prova: ");
    scanf("%d", &note1); 
    printf("Diga qual foi sua Nota da segunda prova: ");
    scanf("%d", &note2);

    sum_notes = (note1 + note2) / 2;

    if (sum_notes >= 6) {
        printf("Voce foi aprovado!");
    } else if (sum_notes >= 4 && sum_notes <6){
        printf("Voce esta de recupecao");
    } else {
        printf("Voce foi reprovado!");
    }

    return 0;
}
```

### 📍 Multiplas Alternativas (``SWITCH CASE``)

E caso formos trabalhar com uma lógica codicional que possue situações em que há várias possibilidades específicas possam ser verdadeiras, podemos utilizar o ``SWITCH CASE``, que consiste em averiguar varios casos.

```c
    switch (opcao) {
        case 1:
            printf("Você escolheu a opção 1.\n");
            break;
        case 2:
            printf("Você escolheu a opção 2.\n");
            break;
        case 3:
            printf("Você escolheu a opção 3.\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
```

Exemplifcaremos com uma estrutura de calculadora, teremos a inserção de números e definir que tipo de operador iremos exercer dentro da nossa calculadora.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int number1, number2;
    char operation

    printf("Insira um valor para o numero A: ");
    scanf("%d", &number1);
    printf("Insira um valor para o numero B: ");
    scanf("%d",  &number2);

    printf("Qual tipo de operacao você gostaria de realizar com os numeros que voce forneceu: (+, -, * ou /)");
    scanf(" %c", operation)

	switch (operation) {
		case +:
            printf("Soma: %d", number1 + number2);
        break;
        case -:
            printf("Subtracao: %d", number1 - number2);
        break;
        case *:
            printf("Multiplicacao: %d", number1 * number2);
        break;
        case /:
            printf("Divisao: %d", number1 / number2);
        break;
        default: 
            printf("Esse operador nao esta na lista!");
        break;
	}

	return 0;
}
```

---

### 📌 Considerações Finais:

Esse material todo se baseando no sistema de ensino da Estacio - Via Corpus (Fortaleza-CE), sendo uma parte anotado a partir das explicações da professora e coordenadora: Danielle Amorim e outra tirada dos matérias de estudo do SAVA, sistema de estudos da própria Estacio.

Algumas Fontes de Matérias Extras:

> BRACKMANN, C. P. Desenvolvimento do pensamento computacional através de atividades desplugadas na educação básica. Tese (Doutorado em Informática na Educação) - Universidade Federal do Rio Grande do Sul, Porto Alegre, 2017.

> GROVER, S.; PEA, R. Computational Thinking in K-12: A Review of the State of the Field. Educational Researcher, 2013, v. 42, n. 1, p. 38 - 43.

> MARTIN, Robert. Código Limpo: Habilidades Práticas do Agile Software. São Paulo: Alta Books, 2009.