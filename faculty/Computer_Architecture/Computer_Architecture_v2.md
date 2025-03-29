# 🖥 Arquitetura de Computadores

### 📌 Introdução:

Nessa disciplina acadêmica, iremos estudar a parte da tecnologia voltada às peças mecânicas do computador. **A arquitetura de computadores é a área da computação que estuda o design, a organização e a estrutura de sistemas computacionais.** Em termos gerais, ela trata de como os componentes de um computador (hardware e software) interagem para executar tarefas.

Primeiramente, gostaria de edificar o conhecimento prévio do que seria Hardware e Software:

### 📍 Hardware:

Parte física de um computador ou sistema eletrônico. Basicamente, são os componentes tangíveis, como os dispositivos eletrônicos e mecânicos que formam o computador. Exemplos:

- Processador;
- Placa-mãe;
- Memória RAM (Memória Principal);
- HD e SSDs;
- Placa de vídeo;
- Periféricos;
- Entre outros...

Além disso, o hardware é conhecido por executar as instruções do software.

### 📍 Software:

Parte lógica de um computador, composta por programas, sistemas operacionais, aplicativos e dados. Responsável por dar as instruções para o hardware executar. Afinal, existem três tipos de software, sendo eles:

1. **Software de Sistema**
    - Gerencia o hardware e cria uma interface de usuário;
    - Exemplo: Sistemas Operacionais (SO), Windows, Linux, macOS...

2. **Software de Aplicativos**
    - Programas usados para realizar tarefas específicas;
    - Exemplo: Navegadores, editores de texto/vídeo, jogos...

3. **Software de Desenvolvimento** 
    - Ferramentas usadas por programadores para criar softwares;
    - Exemplo: Editores de código, versionadores de código, compiladores...

Para uma interpretação menos acadêmica e mais didática, podemos nos referir ao software como a mente do computador, tudo que possui lógica por trás, e ao hardware como o corpo responsável por executar a lógica.

Portanto, dentro dos estudos da **Arquitetura de Computadores**, retrataremos principalmente o hardware, mas teremos alguns assuntos abordando o software e a junção de funcionalidades dos dois. Além de entender a área de TI de uma forma mais mecânica, visto que estudaremos como os componentes internos funcionam, para que servem ou até mesmo como o computador se comporta em diferentes situações. Também desenvolveremos uma bagagem teórica sobre a arquitetura computacional de maneira mais específica.

Afinal, é preciso evidenciar que estudar como a arquitetura de computadores funciona resulta em uma qualificação melhor, paralelamente, auxiliando no desenvolvimento de alto desempenho. Isso seria o método de usar o conhecimento de linguagens de programação, codificando seus softwares, juntamente com o aprendizado sobre hardware, possibilitando no desenvolvimento utilizando o máximo do potêncial do hardware e analisar e como ele se comporta sob suas requisições.

**"Estudaremos cada parte desses conceitos de forma mais aprofundada futuramente"**

## 📌 A História e Evolução dos Computadores

Em meados do século XX, no ápice da Segunda Guerra Mundial, uma máquina de criptografia foi desenvolvida pelos nazistas, nomeada **Enigma**, que foi considerada uma grande adversidade na guerra. O mais importante naquele momento era a informação, já que os mensageiros poderiam tentar entregar mensagens entre comandantes sem risco de vazamento de dados, visto que somente quem tivesse acesso à Enigma poderia descriptografá-las. 

Portanto, como medida para combater essa questão, o britânico Alan Turing, amplamente reconhecido como o pai da computação e da inteligência artificial, desenvolveu técnicas revolucionárias. Algo que estava muito à frente do seu tempo, mas sua determinação e conhecimento foram mais que suficientes para suas grandes descobertas. Sua vida e trabalho foram revolucionários, já que influenciaram profundamente a forma como pensamos sobre máquinas, computação e lógica matemática. Portanto, podemos considerá-lo como o precursor da área de TI. Seus grandes desenvolvimento revolucionários foram os seguintes:

1. **Máquina de Turing (1936):** Desenvolveu um modelo teórico de computação, que é um dispositivo abstrato capaz de realizar qualquer cálculo lógico. Esse conceito estabeleceu os fundamentos da computação moderna e demonstrou que alguns problemas são computacionalmente insolúveis. Sobre suas características, ela foi montada a partir de 4 elementos, sendo eles:  
   - Uma fita infinita dividida em células que podem ser lidas e escritas;  
   - Um cabeçote capaz de ler ou escrever em uma célula da fita e mover-se para a esquerda ou direita da fita;  
   - Um registrador que mantém o estado atual da máquina;  
   - Uma função de transição que, a partir do estado atual e do símbolo lido, calcula qual será o novo estado e determina se o cabeçote deve se mover ou escrever na fita.  

2. **Criptografia e a Segunda Guerra Mundial:** Durante a 2ª Guerra Mundial, Turing trabalhou em Bletchley Park, o centro de inteligência britânico, onde desempenhou um papel crucial na decodificação das mensagens criptografadas pela máquina **Enigma**, usada pelos nazistas. Ele projetou a **Bombe**, uma máquina eletromecânica que acelerava o processo de decifração, contribuindo significativamente para a vitória dos Aliados.  

3. **Computadores de Programa Armazenado:** Após a guerra, Turing trabalhou no desenvolvimento de computadores digitais, projetando a **Automatic Computing Engine (ACE)**, uma das primeiras arquiteturas modernas de computadores.  

4. **Inteligência Artificial:** Turing foi pioneiro na ideia de que máquinas poderiam pensar. Em 1950, publicou um artigo chamado **"Computing Machinery and Intelligence"**, onde propôs o famoso **teste de Turing**, um método para determinar se uma máquina pode exibir inteligência semelhante à humana.  

> Ainda durante a Segunda Guerra Mundial, Claude Elwood Shannon, que trabalhava na Bell Labs (American Industrial Research and Development Company) que desenvolveu estudo para a comunicação entre equipamentos, e seu principal artigo **"Mathematical Theory of Communication"** foi publicado após o fim da guerra que introduziu a unidade mínima para guardar uma informação, ou seja, um dígito binário, também conhecido como Bit (binary digit), podendo ter apenas 2 valores, sendo eles:
>
> 0 = falso ou desligado
>
> 1 = verdadeiro ou ligado
>
> Com os bits podemos representar qualquer número ou informação, tanto que esse sistema de bit ainda é utilizado nos computadores, visto que o computador "fala" nessa lingua, explicando de uma forma mais dinâmica, além do mais, esse ramo de estudos é denominado como **Teoria da Informação**.
>
> Exemplificando:
>
> ```01001101 01010101 01001110 01000100 01001111 - Bits com significado da palavra "Mundo"```

<img width="450" height="auto" src="./images/bombe.jpg">

> Fotografia do Bombe

Acima temos o primeiro modelo do que chamamos de umadispositivo eletromecânico projetado para realizar cálculos específicos, no caso, quebrar o código Enigma usado pelos nazistas durante a Segunda Guerra Mundial. Além do mais, sendo o principal exemplo para as futuras máquinas lógicas.

### 📍 Desenvolvimento do computador em gerações

Iremos entender melhor como funcionou o desenvolvimento do avanço dos computadores divididos em gerações:

### 📍 Primeira Geração: Válvulas Termiônicas

<img src="./images/eniac.jpg">

Ainda durante a Segunda Guerra Mundial, nos Estados Unidos, foi desenvolvido o primeiro computador eletrônico da história por John Presper Eckert e John Mauchly, na universidade de Pensilvânia. Trata-se do **ENIAC (Eletronic Numerical Integrator and Computer)**, um computador integrador numérico eletrônico, cujos números impressionam. Sendo criado para realizar cálculos complexos necessários para o exército dos Estados Unidos durante a Segunda Guerra Mundial, como:

1. Cálculos de trajetórias balísticas;
2. Simulações de armas nucleares.

Após a guerra, o ENIAC foi usado para outra tarefas científicas, como estudos relacionados à energia nuclear e problemas matemáticos avançados.

Componentes: 170.000 válvulas termiônicas;
</br>
Peso: Cerca de 30 toneladas;
</br>
Tamanho: Sala de 150m²;
</br>
Capacidade de Processamento: 1 bilhão de vezes menor que a dos celulares usados hoje em dia.

### 📍 Segunda Geração: Transistores 

<img src="./images/transistor.jpg">

Transistores são componentes eletrônicos fundamentais em circuitos modernos, usados para amplificar, controlar ou comutar sinais elétricos. Eles são pequenos dispositivos semicondutores que substituíram as válvulas eletrônicas em grande parte dos sistemas eletrônicos por serem mais eficientes, compactos e confiáveis. Um transistor tem três terminais principais:

1. Base (B): Controla o fluxo de corrente;
2. Coletor (C): Onde a corrente entra no transistor;
3. Emissor (E): Onde a corrente sai do transistor.

Ele age como um interruptor eletrônico ou um amplificador

- Interruptor: Permite ou bloqueia o fluxo de corrente elétrica entre o coletor e o emissor, dependendo do sinal de base.

- Amplificador: Aumenta a intensidade de um sinal fraco na base para produzir um sinal mais forte entre o coletor e o emissor.

### ➜ Tipos de Transistores:

1. Transistor Bipolar de Junção (BJT)
    - Funciona por meio do fluxo de elétrons e lacunas (cargas positivas)
    - Exemplos: NPN e PNP

2. Transistor de Efeito de Campo (FET)
    - Controla a corrente por meio de um campo elétrico
    - Exemplos: MOSFET e JFET

### ➜ Principais aplicações do transistores:

1. Eletrônica de consumo: Estão presentes em smartphones, computadores, TVs, etc...
2. Amplificação de áudio: em sistemas de som, para aumentar o sinal de entrada
3. Circuitos digitais: Funcionam como interruptores em processadores e memórias
4. Fontes de alimentação; Controlam tensões em circuitos reguladores

### 📍 Terceira Geração: Circuitos Integrados

<img src="./images/integrated_circuit.jpg">

Na década de 1960, o proximo salto de evolução foi dado com a criação dos **circuitos integrados (CI)**, também conhecidos como chip ou microchip, é um dispositivo eletrônico que contém diversos componentes como *transistores, resistores, capacitores e outros elementos* em um único pedaço de material semicondutor (geralmente silício). Ele é projetado para executar uma função ou conjunto de funções específicas em um circuito elétrico. Portanto, vamos exemplificar como funciona o CI:

- Os componentes internos de um CI são interconectados e formam um circuito completo, como o que antes seria montado com vários componentes separados em uma placa.
- Esses componentes são miniaturizados e construídos diretamente na superfície de um material semicondutor, permitindo que muitos dispositivos caibam em um espaço muito pequeno.

Tipos de circuitos integrados:

1. Circuitos digitais:
    - Realizam operações baseadas em lógica binária (0s e 1s).
    - Exemplos: processadores, memórias RAM e chips de controle.

2. Circuitos analógicos:
    - Lidam com sinais contínuos, como amplificação de áudio ou controle de sinais.
    - Exemplos: amplificadores operacionais, reguladores de tensão.

3. Circuitos mistos:
    - Combinam elementos digitais e analógicos.
    - Exemplos: chips para smartphones que incluem processamento digital e amplificação de som.

Exemplos de aplicações de circuitos integrados:

- Processadores: O cérebro de computadores e smartphones, como o Intel Core ou os chips Apple M1/M2.
- Memórias: Chips de armazenamento, como RAM e SSDs.
- Eletrônica de consumo: Televisões, micro-ondas, controles remotos, etc.
- Automóveis: Sensores e sistemas de controle eletrônico.

Vantagens dos circuitos integrados:
1. Miniaturização: Substituem circuitos grandes e complexos por chips pequenos.
2. Eficiência: Consomem menos energia e são mais rápidos.
3. Confiabilidade: Reduzem falhas porque eliminam conexões externas entre componentes.
4. Custo-benefício: Produção em massa torna os dispositivos mais baratos.

### 📍 Quarta Geração: Microprocessadores

<img src="./images/microprocessor.jpg">

A década de 1980 presenciou a proliferação de PC's cada vez mais potentes, baratos e conectador por meio do surgimento das redes locais de computadores e da internet: a rede mundial. Além disso, um novo equipamento aparecia nos lares: o videogame, um tipo de computador especializado, cujos programas são jogos eletrônicos com ênfase nos gráficos e na interação com os usuários.

Após o fim do século XX, os computadores já eram tão pequenos e potentes que se encontravam embarcados em diversos equipamentos cotidianos, como automóveis, aviões e videogames, além de se tornar mais comum a presença dos laptops (microcomputadores pessoais portáteis) nas casas das pessoas. Não tardou muito para que eles fossem integrados a televisões e celulares. Nos anos 2010, essa integração passou a ser feita por intermédio de smartphones e smart TVs.

Um microprocessador é um circuito integrado que contém milhões ou até bilhões de transistores organizados para realizar operações complexas. Ele trabalha com base em um conjunto de instruções (a linguagem de máquina) para processar dados e controlar dispositivos conectados.

### ➜ Componentes principais de um microprocessador:

1. Unidade de Controle (UC):
    - Interpreta as instruções e coordena as operações dos outros componentes.

2. Unidade Lógica e Aritmética (ALU):
    - Realiza cálculos matemáticos (adição, subtração, etc.) e operações lógicas (comparações, AND, OR).

2. Registradores:
    - Pequenas áreas de memória internas que armazenam temporariamente dados ou instruções durante o processamento.

4. Barramento (Bus):
    - Sistema de comunicação que transporta dados entre o microprocessador, memória e outros periféricos.

### ➜ Como funciona um microprocessador:

1. Busca: A unidade de controle busca uma instrução na memória.

2. Decodificação: A instrução é decodificada para entender qual operação deve ser realizada.

3. Execução: A ALU realiza os cálculos ou operações indicadas pela instrução.

4. Armazenamento: O resultado é armazenado nos registradores ou na memória.

## 📌 Computação no cotidiano

Hoje em dia, muitos celulares já são, de fato, computadores pessoais portáteis, até mesmo o caso dos dispositivos da Samsung que tem um sistema nomeado como **DEX** dentro do próprio sistema, que consiste em um sistema operacional Windows, mas em um modelo portátil, entre outros que estão plenamente conectados pela rede de telefonia móvel (celular). Nossa dependência em relação a tecnologia para as tarefas do cotidiano já é tão forte que nem percebemos que necessitamos diretamente de algum aparelho telefônico para solucionar muitas vezes problemas simples, inclusive estranhando sua ausência. Afinal, usamos os computadores e qualquer meio de dispositivo móvel para:

1. Comunicação;
2. Meios de Transportes;
3. Transações bancárias e comerciais;
4. Cálculos;
5. Lembretes e Despertadores;
6. Dispositivos de produtividade...

Atualmente, até o dinheiro não é guardado mais em cofres. Os saldos bancários são armazenados digitalmente nos servidores dos bancos. Até mesmo a nível de curisoidade, se todos os correntistas de um banco solicitassem retirar inteiramente o dinheiro guardado nele, não haveria cédulas suficientes no cofre para atendê-los.

Todos os ramos de Inovação e Tecnologia está em amplo desenvolvimento. Segundo o portal Statista, em 2019, cinco das seis maiores companhias do mundo (em valor de mercado) eram do ramo da computação:

- Apple
- Microsoft
- Amazon
- Alphabet (Google)
- Facebook

Vale ressaltar que com todo esse avanço tecnologico muitos novos projetos e equipamentos vem sendo produzidos com isso, já que, estamos caminhando para um futuro cada vem mais ligado a tecnologia.

## 📌 Hardware

Como dito, **hardware** seria toda a parte física de um computador ou sistema eletrônico, são as peças que estão ao alcance do usuário de forma palpável. Portanto, para enterdemos melhor e apliarmos nossos estudos de forma mais prática, iremos trazer as principais peças do hardware.

### 📍 Processador ou CPU (Central Processing Unit)

<img src="./images/central_processing_unit.jpg">

Considerado o "cérebro" do computador. Ela é responsável por executar os comandos de programas, processar dados e coordenar as operações entre os diversos componentes do sistema, como a memória, dispositivos de entrada e saída, entre outros.

A CPU realiza três tarefas principais:

1. Busca: Ela busca as instruções no armazenamento (geralmente memória RAM).

2. Decodificação: Depois de buscar a instrução, a CPU interpreta o que deve ser feito com ela.

3. Execução: Finalmente, ela executa a instrução e realiza a ação necessária, como cálculos ou movimentação de dados.

A CPU também pode ter múltiplos núcleos (como dual-core, quad-core, etc.), o que permite que ela realize várias tarefas simultaneamente, aumentando o desempenho em tarefas mais exigentes.

<img src="./images/dual_core.jpg"> <img src="./images/quad_core.jpg">

> Como vimos, os processadores foram criados na década de 1970. Inicialmente, eles tiveram sua velocidade aumentada, gerando uma competição acirrada entre as produtoras de microprocessadores. Era comum medir a qualidade do CPU pela velocidade de seu clock. Entendia-se que um processador de 1800 MHz era melhor que um de 1600 MHz.
>
> Overclocking, por sua vez, é o processo para customizar a velocidade do clock do processador acima de sua frequência de uso normal. Tal prática deixa o computador mais rápido, pois uma maior quantidade de operações pode ser realizada ao mesmo tempo. Há certos riscos envolvidos no overclocking, como danos ao processador e sobreaquecimento.
>
> O aumento de clock a cada geração de processadores seguiu ao longo dos anos, até que, por conta de interferências físicas entre seus componentes, ficou inviável a continuação desse procedimento. A solução dada pelos projetistas foi colocar diversos miniprocessadores (chamados de núcleos) dentro de um mesmo chip de processador. Em termos práticos, é como se houvesse dois, quatro ou até mais processadores trabalhando em um mesmo chip. Essa técnica é conhecida como multicore, mas, em função do número de núcleos.
>
>Atualmente, a maioria dos processadores de mercado (inclusive os de celulares) utiliza ao menos quatro cores e frequências de clock de alguns bilhões de pulsos por segundo (GHz). Além do clock e do número de núcleos, outra característica importante do processador é a sua memória cache. Veja como ela funciona:
>
>1. Ela funciona como uma pequena parte da memória principal dentro do próprio chip do processador.
>
>2. As informações são lidas ou escritas na memória cache com muito mais velocidade que nos pentes de memória.
>
>3. Por isso, uma boa quantidade dela consegue acelerar a velocidade do processador.

### 📍 Mémoria RAM ou Mémoria Principal

<img src="./images/ram.jpg">

A memória principal é parte fundamental do computador, pois se trata do espaço onde são armazenados os dados e os programas executados no processador. Ela funciona como uma série de células em que cada uma armazena um conjunto de oito bits (chamado de um byte). Essas células funcionam como caixas de correio: cada uma tem seu endereço, embora só armazene uma carta por vez.

A memória também é chamada de RAM (em seu formato mais comum) por permitir o acesso a qualquer endereço em qualquer ordem. Disso resulta o nome Memória de Acesso Aleatório (em inglês, Random Access Memory). Normalmente, as memórias RAM são vendidas em pentes de memória.

> A memória RAM é volátil, ou seja, seus dados são apagados quando o sistema fica sem energia.

Portanto, mémoria RAM ou Mémoria Principal é um componente do computador que serve para armazenar dados que são precisos ser processados das aplicações que estão em funcionamento no momento de forma rápida e que não precisa se guardado. Afinal, por ser volátil, ela acaba sendo muito mais rápida que outros modelos de armazenamento, criando uma peça fundamental no processamento de dados rápidos para o funcionamento de aplicações em andamento.

1. Capacidade de armazenamento
    - Se possui 4 GB (quatro gigabytes) de armazenamento, a memória RAM conta com 4 bilhões dessas células, podendo armazenar atualmente até 37 bilhões de bits de dados.
    - Existem atualmente mémoria ram com armazenamento de 64gb por peça

2. Velocidade de comunicação com o barramento
    - Trata-se da velocidade com que a memória consegue transferir os dados para o processador. Por exemplo, uma memória de 400 MHz consegue transferir dados para o processador com uma taxa de até 3200 Mbps (3 bilhões e 200 milhões de bits por segundo).
    - Atualmente possuimos mémorias com mais de 5000 MHz

### 📍 HD/SSD's ou Mémorias Secundárias

<img src="./images/hd.jpg">

Mémoria Principais são muito importantes para o funcionamento do comptaudor, mas é preciso ter algum componente responsável por armazenar os dados que o usuários realmente precisa manter guardado, para tanto, existe oque chamamos de **mémoria secundária**, que é responsável por guardar dados em suas depedências. Mais conhecidas como **HD (Hard Disk ou Disco Rígido, em português)** elas possuem essa nomenclatura porque sua tecnologia predominante envolve discos magnéticos lidos e escritos por um cabeçote. Atualmente, essa tecnologia tem sido substituída por **Discos de Estado Sólido (SSD)**, que são muito mais rápidos e menos propensos a falhas e desgaste por não haver partes móveis mecânicas neles.

As principais características das memórias secundárias são similares às da principal:

1. Capacidade de armazenamento
    - Normalmente medida em GB (gigabytes ou bilhões de bytes) ou TB (terabytes ou trilhões de bytes).

2. Velocidade de transmisão com o barramento
    - Depende completamente do tipo de barramento e seria um HD ou SSD

### 📍 Placa-Mãe

<img src="./images/motherboard.jpg">

A placa-mãe consiste em um circuito elétrico impresso e uma série de componentes conectados nela. Os principais são:

- Soquetes de encaixe das mémorias principais;
- Soquete de processador;
- Barramentos de periféricos.

A função básica da placa-mãe é conectar o processador, a memória principal e os periféricos (outros componentes não essenciais do computador). Essas conexões são chamadas de barramentos. Conforme a tecnologia se desenvolve, a placa-mãe começa a integrar em si periféricos que, até então, precisavam ser encaixados nela, como placas de vídeo, placas de rede, placas controladoras de portas seriais e paralelas.

> As placas-mãe dos celulares atuais são circuitos altamente complexos, contando com processador, memória, controladora de vídeo, controladora de tela touchscreen, acelerômetros, GPS e placa de rede sem fio e celular. Todos eles estão diretamente integrados à sua placa-mãe.
>
> Como também existem algumas placa-mães de computadores e notebooks com todas essas funcionalidades.

### 📍 Periféricos

<img src="./images/peripherals.jpg">

Por se conectarem à parte central do computador, seus demais componentes são chamados, em geral, de periféricos. Muitos mostram ser tão relevantes que não seríamos capazes de imaginar sistemas computacionais sem eles. O primeiro computador usava apenas uma série de lâmpadas como saída e alguns cartões perfurados como entrada. Inicialmente, são necessários apenas dois instrumentos nesse processo, embora haja outro que também precisa ser apontado.

Dentro dos periféricos existem dois grupos:

1. **Dispositivos de entrada:** Usados para interagir com o computador. Os mais comuns são:
    - Tela touchscreen: permite a seleção de elementos sem precisar de um mouse.
    - Teclado: segue um padrão já difundido das máquinas de escrever, facilitando seu uso e sua aceitação.
    - Mouse: abre novos rumos por permitir a indicação de pontos na tela e a seleção deles, o que gerou um grande impacto no desenvolvimento de interfaces gráficas.
    - Microfone: capta o áudio.
    - Câmera: capta áudio com vídeo.
    - Placa de rede: recebe os dados transmitidos pela rede.
    - Entre Outros...

2. **Dispositivos de Saída:** Eles leem os resultados por computador. Os mais usuais são:
    - Placa de Vídeo: Responsável pelo processamento gráfico do computador
    - Alto-falantes ou caixas de som: Emite sons e sinais sonoros.
    - Impressora: Imprime documentos elaborados no computador.
    - Placa de rede: Envia os dados pela rede.

## 📌 Sistema Operacional

SO (Sistema Operacional) é o software responsável por gerenciar e controlar o hardware do computador, além de fornecer uma interface para que o usuário interaja com o sistema. Em outras palavras, o SO atua como uma ponte entre o usuário e os componentes físicos do computador, garantindo que tudo funcione de maneira integrada.

As principais funções de um sistema operacional incluem:

- Gerenciamento de Processos: O SO controla a execução de programas, alocando tempo de CPU para os processos e gerenciando a execução de várias tarefas simultaneamente (multitarefa).

- Gerenciamento de Memória: Ele controla a memória do computador, alocando espaço para os programas e gerenciando o uso da RAM.

- Gerenciamento de Entrada/Saída (E/S): O SO gerencia os dispositivos de entrada e saída, como o teclado, mouse, impressora, e outros periféricos.

- Gerenciamento de Arquivos: Ele organiza e controla o armazenamento de arquivos, permitindo a criação, leitura, escrita e exclusão de arquivos no sistema de armazenamento.

- Segurança e Controle de Acesso: O SO protege o sistema contra acessos não autorizados, garantindo que apenas usuários e programas com permissões adequadas possam acessar certos recursos.

Afinal, ele é responsável por todas os componentes do **hardware** funcionarem

**Exemplos de sistemas operacionais são o Windows, macOS, Linux, Android, entre outros.**

### 📍 Historia dos Sistemas Operacionais

Os primeiros sistemas operacionais eram específicos para as máquinas que os empregavam. Basicamente, eles serviam de interface entre os programas do usuário e o hardware. Veja sua evolução histórica!

### ➜ Anos 1970

Surge o Unix, um OS de uso geral muito difundido por ter sido distribuído gratuitamente para o setor acadêmico e o público nos Estados Unidos. Como ele não possuía uma interface gráfica, todos os seus comandos eram dados via console a partir de um texto.

> Exemplo:
>
> Se estiver em um Windows, segure a tecla Windows + R, digite cmd e aperte Enter. No Linux, segure as teclas Ctrl + Alt + T. Você verá o terminal aparecer. Podem ser dados ali comandos de texto para executar programas em sua máquina. 

### ➜ Anos 1980

A Microsoft começa a vender seu Sistema Operacional, o MS-DOS, presente nos computadores comercializados pela International Business Machine Corporation (IBM). Com isso, esse sistema ganhou uma grande projeção no mundo da computação. 

- Microsoft: a Microsoft, porém, destaca-se em relação à sua concorrente direta ao apresentar um novo OS. O Windows, afinal, permite a execução de programas em janelas ou quadros que se superpunham a uma área de trabalho. O Sistema Operacional Windows chegou a ocupar 90% do mercado dos PCs. 

- Apple: a empresa Apple, por sua vez, lança uma versão de seu OS que contém: interface gráfica e conceito de ícones para representar programas. 

### ➜ Século XX

Vemos o nascimento de OS para os dispositivos móveis (mobiles) que surgiam: 

- Smartphones; 
- Tablets; 
- Smart TVs. 

A Apple lança um sistema operacional exclusivo para seus aparelhos: o iOS. 

Enquanto isso, a Google e alguns parceiros desenvolvem o OS Android. Ambos disputam o mercado de OS para mobile e destronam a Microsoft, que, apesar de desenvolver o Windows Mobile, depois, desiste dessa competição.
 
Os sistemas operacionais são fundamentais para o bom funcionamento dos sistemas computacionais. Com a integração de computadores a celulares e tablets, existe um grande foco no desenvolvimento e na melhoria de OS para mobile. Os principais são:

## 📌 A Origem da Internet

Estudaremos apenas o modelo introdutório de como ocorreu a origem da internet.

Na década de 1960, os computadores já eram uma realidade consolidada. Desse modo, o Departamento de Defesa Norte-Americano resolveu iniciar os estudos para a construção de uma rede de comunicação capaz de permitir trabalhos em conjunto de pessoas muito distantes geograficamente. Assim, a ARPANET foi criada.

<img src="./images/map_arpanet.png">

> Evolução da ARPANET, uma rede de armazenamento de dados que, inicialmente, conectava algumas universidades e alguns centros de pesquisa.

Pensado para possibilitar uma troca de informações, o conceito de **sistemas computacionais em rede** necessariamente evoluiu, permitindo, hoje em dia, a interação com diversas aplicações, o que era uma realidade até então impensável para sistemas isolados.

### 📍 Redes de redes

Na concepção original dos computadores, não se planejava fazer com que vários deles se comunicassem entre si. Eles foram pensados apenas como máquinas programáveis para solucionar problemas. Nas décadas de 60 e 70 acontecia o nascimento da comunicação em rede.

### ➜ 1960

Na década de 1960, surgiu a ideia de conectar computadores espalhados pelos centros acadêmicos norte-americanos.

### ➜ 1970

A ARPANET foi montada para permitir o trabalho de pesquisa em conjunto por pessoas nas duas costas dos Estados Unidos. Essa ligação foi efetivada em 1970, surgindo, dessa forma, a primeira rede a integrar a internet.

No entanto, conectar computadores não era fácil. Foi necessário:

- Comunicação entre computadores: Lançar meios de comunicação (como fios de cobre ou enlaces de rádio) entre os dois computadores.

- Protocolos de comunicação: Criar protocolos para que ambos pudessem entender como falar entre si, pois eles precisam de um hardware para enviar e receber dados em rede.

Conforme outras redes iam se juntando, crescia a rede de redes (que passou a ser chamada de internet em 1986). Os computadores pessoais já estavam entrando no mercado, e as pessoas queriam se conectar de suas casas.

### ➜ Internet discada

Por uma questão de simplicidade, as empresas de telefonia assumiram o papel de prover conexão à internet para os usuários domésticos. Surgia, assim, o modem de internet discada, que se conectava como se estivéssemos fazendo um telefonema e atingia taxas de transmissão de 14400 bps (s por segundo).

### ➜ Endereço IP e roteador

Uma das barreiras a serem vencidas para interligar tantas máquinas foi a forma de endereçamento, ou seja, como identificar unicamente um computador com o qual se deseja falar. A solução foi dar um endereço – como o da sua casa, por exemplo – para cada máquina. Trata-se de um processo denominado endereço IP, abreviação de Internet Protocol (ou Protocolo de Internet, em português). O endereço IP consistia em uma sequência de quatro números entre 0 a 255 (representados em 8 bits). Como exemplos de endereço IP, temos:

Em posse do endereço de destino, um pacote (também chamado de datagrama) é enviado através das diversas redes existentes entre o remetente e o destino. Nas fronteiras delas, existem os roteadores, que funcionam como agências de correio e escolhem a rota que o pacote seguirá para chegar a seu destino. Dessa forma, passando de roteador em roteador, o pacote de dados consegue alcançá-lo com a sua mensagem.