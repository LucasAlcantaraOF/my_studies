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

__Lógica:__

Declarado na lingua portuguesa como modo de raciocinar de forma coerente e mais produtiva possível, ou seja, o ato de pensar e desenvolver essa lógica para constituir uma ação com uma finalidade que ocasionara em um resultado com maior qualidade possível. Caso não esteja tão claro tentarei exemplificar melhor:

> Digamos que você trabalha no setor de matriculas de novos alunos da faculdade Estacio - Via Corpus, e precisa fazer o cadastro de um novo aluno no curso de Sistemas de Informação, mas o computador nesse momento está indisponível e você terá que realizar tudo a mão. Sempre mantendo a ideia de agilidade e organização para armazenar dados importantes.
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

### 📌 Fluxo de requisições

Uma boa prática na questão de desenvolvimento é constituído antes mesmo de fato começar a escrever seu código, um importante ato é a criação do que chamamos de **fluxo de requisições**, que seria a elaboração de todo o esquema do nosso sistema utilizando o método de criar um fluxo com todos os fatores que deveremos abordar naquele momento, ou seja, se por exemplos formos trabalhar criando uma interface de cadastrar novos usuários precisamos se atentar a certas coisas, como por exemplo:

1. Todos os campos foram preenchidos?
2. Esse usuário já está cadastrado em nosso sistema?
3. Os dados fornecidos são válidos?
4. Crie uma criptografia dos dados
5. Verificado tudo, mande para o nosso SGBD para enviar ao BD

Esse é um exemplo de algumas perguntas que são padrões no momento que estivermos trabalhando com um fluxo de requisições de cadastros, mas é somente o começo de sistemas muitos mais complexos que precisam passar por vários tópicos.

Vamos demonstrar como seria esse fluxograma de forma prática agora, reutilizando a ideia de uma interface que possui cadastro:

<img  src="./assets/images/flow_request.png">

## Tipos de Dados, Expressões, Operadores e Tabela Verdade















---

### 📌 Considerações Finais:

Esse material todo se baseando no sistema de ensino da Estacio - Via Corpus (Fortaleza-CE), sendo uma parte anotado a partir das explicações da professora e coordenadora: Danielle Amorim e outra tirada dos matérias de estudo do SAVA.

Algumas Fontes:

> BRACKMANN, C. P. Desenvolvimento do pensamento computacional através de atividades desplugadas na educação básica. Tese (Doutorado em Informática na Educação) - Universidade Federal do Rio Grande do Sul, Porto Alegre, 2017.

> GROVER, S.; PEA, R. Computational Thinking in K-12: A Review of the State of the Field. Educational Researcher, 2013, v. 42, n. 1, p. 38 - 43.