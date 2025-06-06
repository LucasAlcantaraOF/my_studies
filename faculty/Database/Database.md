<link href="https://cdn.jsdelivr.net/npm/devicons@1.8.0/css/devicons.min.css" rel="stylesheet">

# <img align="center" height="40" width="40" src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/sqldeveloper/sqldeveloper-original.svg" /> Banco de Dados (BD)

Antes de tentarmos entender oque é banco de dados precisamos entender o que significa organização. Na lingua portuguesa, organização é declarada como criar um sistema funcional e duradouro, além de pensar na praticidade e funcionalidade do dia-a-dia, ou até mesmo definir um local para cada coisa elaborando um planejamento estratégico com técnicas e metodologias, com foco em criar um sistema para atingir os resultados pretendidos, ou seja, organização significa você de fora racional desenvolver uma ideia de como dividir todas as coisas no seu devido lugar de forma que seja arrumado.

Caso não tenha ficado tão claro passaremos a falar de fato o que é um Banco de Dados. Seria um sistema que organiza, armazena e gerencia dados de maneira eficiente, ele permite que guardemos nossos dados de maneira estruturada e consiga acessá-las rapidamente, paralelamente, com segurança.

<details>
<summary>📌 Significado do que é Banco de Dados segundo algum nomes importantes</summary>
</br>
"Um banco de dados é um conjunto de arquivos relacionados entre sí (Chu, 1983)
</br>
</br>
"Um banco de dados é uma coleção de dados operacionais armazenados, sendo usados pelos sistemas de aplicação de uma determinada organização" (C.J Date, 1985)
</br>
</br>
"Um banco de dados é uma coleção de dados relacionais" (Elmasri & Navathe, 1989)
</br>
</br>
"Um banco de dados é um conjunto de dados armazenados, cujo conteúdo informativo representa, a cada instante, o estado atual de uma determinada aplicação" (Laender, 1990)

---
</details>


Algumas empresas ainda não utilizam Banco de Dados para guardar suas informações, então vamos analisar alguns motivos pelo quais devemos utilizar-lo?

1. **Organização e Estruturação:** Responsável por organizar as informações de maneira estruturada, tornando a gestão dos dados mais eficiente;
2. **Escalabilidade:** Permite que você gerencie uma grande quantidade de dados sem comprometer o processamento;
3. **Segurança:** Oferece varias camadas de proteção, como autenticação, criptografia e controle de acesso;
4. **Integridade de Dados:** Com BD relacionais, é possível definir regras (chaves primárias e estrangeiras) para garantir que os dados não possuam duplicatas;
5. **Facilidade de Consulta e Atualização:** Fácil de fazer consultas complexas e atualizações nos dados;
6. **Backup e Recuperação:** Oferece mecanismos de backup e recuperação de dados a partir da nuvem e outros métodos;
7. **Acesso Concurrente** Possibilidade de acesso por múltiplos usuários e manipulação de dados ao mesmo tempo;
8. **Eficiência:** Projetados para gerenciar dados de forma eficiente, com técnicas de indexação e otimização de consultas.

Entretanto, não teremos apenas vantagens de utilizar o Banco de Dados, visto que se fosse somente se existisse vantagens por que todas as empresas não aderem a ideia de ter um BD?

1. **Alto Custo**: É necessário um custo alto para manter um servidor físico, que seria uma máquina dentro da própria empresa, ou até mesmo um servidor na nuvem que consiste em alugar algum sistema online, que muitas vezes não é vantajoso para empresas que não precisam armazenar e lidar com uma grande base de dados;
2. **Mão de obra qualificada**: Além do mais, é preciso empregar uma equipe de T.I para a criação e manunteção do Banco de Dados, paralelamente, qualificar os funcionários da empresa para utilizar os novos sistemas.

Portanto, fica evidente que não temos somente qualidades para analisar, visto que, dentro do mercado de T.I não somos somente desenvolvedores, mas sim solucionadores de problemas, então precisamos entender todos as informações administrativas de criar um sistema.


> __Dados ou Informação?__
</br>
</br>
> Uma questão muito retratada dentro desse estudo seria relacionado a diferenciar oque seria dados do que seria informação, portanto, vamos entender. Dados seria tudo aquilo com um valor bruto e absoluto, por exemplo: Lucas, 2005, Fortaleza, S.I, user. São dados que não possuem "sentido" de forma unitária, resumidamente, seriam dados absolutos.
</br>
</br>
Por conseguinte, a Informação, seria a ordenação e organização dos dados de forma a transmitir significado e compreensão dentro de um determinado contexto, ou seja, seria o conjunto ou consolidação dos dados de forma a fundamentar o conhecimento, por exemplo: "Lucas é user de S.I, com o telefone finalizando em 2005 e mora em Fortaleza"
</br>
</br>
Então assim, temos uma junção de dados formando uma informação.

## 📰 Historia do Banco de Dados

O conceito de bancos de dados sempre existiu em qualquer área que precisasse de algum nível de organização, principalmente em meios corporativos, devido a necessidade de guardar uma densa quantidade de dados de clientes por exemplo, entretanto, primordialmente era utilizado a ideia de organização, mas com meios físicos, que seria anotar os dados em papeis e organizar em pastas. Modelo muito utilizado até a modernização da ideia de banco de dados

<img src="./images/folders.jpg">

Modelo que passava por sérios problemas, sendo os principais:

1. **Falta de Eficiência:** Era necessário muito tempo para buscar e manipular dados, além do mais, a organização não seguiam padrões, então seria de acordo com o responsável pelo setor e se caso ele não estivesse mais presente, não teria um modelo pré-definido;
2. **Falha na segurança:** Não existia um protocolo de segurança, pois qualquer pessoa presente dentro dos arquivos teria 100% de acesso a qualquer dado, sendo uma falha muito grave sobre a seguridade das informações;
3. **Brecha na Recuperação:** O índice de dados que acabavam sendo perdidos era muito alto, devido a falta de um método recuperatório.

Além de muitos outros motivos pelos quais não é recomendado o uso desse modelo de banco de dados, pelo menos agora na modernidade, e irresponsavelmente existem empresas que ainda seguem esse modelo. Entretanto, essa organização foi o alicerce para as ideias do novos bando de dados.

Então em meados dos anos 1900 até 1950 foi desenvolvido oque chamamos de **cartões perfurados**, que foi o principal meio de entrada, armazenamento e processamento de dados na computação institucional.

<img align="center" height="515" width="700" src="./images/punched_cards.jpeg">

</br>

Geralmente tinham 80 coluna e cada coluna podia representar um caractere ou número, portanto, e armazenavam dados em formato binário, onde um furo indicava "1" e o outro "0", então era preciso analisar cada posição para conseguir formular um dado. Assim, os cartões eram lidos por máquinas chamadas **leitores de cartões perfurados** que usavam sensores mecânicos ou elétricos para detectar os furos, e a escrita era feita a partir da conhecida **perfuradora de cartões**, operada manualmente ou automaticamente, o operador usava um teclado para inserir os dados. Afinal, os cartões eram organizados em caixas ou gavetas e serviam como um banco de dados físico.

Com o desenvolvimento de novos métodos de armazenar dados foi criado o banco de dados de **fita magnética**, sendo um meio de armazenamento sequencial, ou seja, os dados eram gravados em sequência linear ao longo da fita, portanto, criava o acesso sequencial, que já seria considerado uma desvantagem, já que, os dados só seria mostrado seguindo até o fim da semana, portanto, caso necessário, era preciso rebobinar a fita até o ponto desejado, tornando um processo muito lento.

<img src="./images/magnetic_tape.jpg">

Foi um modelo muito promissor pelo seu baixo custo, durabilidade e capacidade, mas se tornou obsoleto com a criação dos discos rígidos E SSDs, que são os modelos de armazenamentos atuais que retrataremos agora, falando sobre a coexistência dos Bancos de Dados e os Computadores.

Mas antes, que o sistema de armazenamento era feito exclusivamente por meios externos se mesclou ao computador que foi invetado na década de 1940 ao fim da segunda guerra mundial, era usado primordialmente como uma máquina para cálculos matemáticos complexos, mas logo se percebeu que, graças a arquitetura criada pelo seu inventor, John Von Neumann, baseada na unidade central de processamento que armazena programas e dados, o computador também serve para o processamento de dados e não apenas cálculos.

Então, essa utilidade do computador foi impulsionada com a invenção do **disco magnético**, **pela International Business Machines Corporation (IBM)**, em 1957, que o denominou de **Dispositivo de Armazenamento de Acesso Direto** ou que foi declarado atualmente como **Hard-Disk** ou **HD**, que apresentou novidades, à época, foi a capacidade de leitura de dados externos à unidade central de processamento de forma direta, sem a necessidade de uma leitura sequencial em fitas magnéticas, e assim, nasceu a era do processamento de dados por computadores.

--- 

### Era do Processamento de Dados por Computadores

Já ouviu falar em Centro de Processamento de Dados (CPD), denominação ainda persistente em organizações tradicionais.

<img src="./images/cpd.jpeg">

Mas para trabalhar com computadores foi preciso criar um meio de comunicação direta entre o desenvolvedor e o sistema, sendo criada a linguagem **COBOL** para trabalhar em aplicações empresarias, ou **Fortran**, em aplicações acadêmicas, que manipulavam dados armazenados em arquivos hospedados em disco magnéticos, utilizado pelo sistema operacional e formando o que se denomina **Sistema de Arquivos**

> Sistema de Arquivos:
É a forma de organização de dados em algum meio de armazenamento de dados em massa, frequentemente feito em discos magnéticos. As aplicações armazenavam seus dados através das interações com a aplicação, nos arquivos.

__Desvantagens dos Sistema de Arquivos:__

1. Redundância e inconsistência dos dados;
2. Dificuldade de acesso a dados;
3. Isolamento de dados;
4. Problemas de integridade;
5. Problemas de atomicidade;
6. Anomalias de acesso concorrente;
7. Problemas de segurança.

Um principal fator que devemos tratar é como ele funcionava de fato, digamos que temos uma loja, onde precisamos de uma série de aplicações funcionando ao mesmo tempo, ou seja, teremos uma aplicação exclusivamente para cadastros, login e compras, portanto, teremos que lidar com varias aplicações e um sistema de arquivos para guardar todos os dados. Primeiramente, era preciso criar um código para gerenciar os dados e colocar em todos as aplicações, criando uma repetição de códigos no sistema inteiro, além do problema de integridade, ou seja, cada aplicação criaria e manipularia seus próprios dados, criando a duplicidade de dados muitas vezes. Afinal, foi necessários novos avanços, pois como visto, esse é um sistema com muitas brechas de desenvolvimento.

<img src="./images/types_database.png">

Depois foi desenvolvido o **Sistema Gerenciador de Banco de Dados (SGBD)** que foi acrescentado no **Sistema de Banco de Dados (SBD)** que criou a independência de dados e programas, ou seja, não seria mais necessário um código para gerenciar os dados, já que foi estabelecido um software exclusivamente para realizar essa tarefa, além de adicionar dois modelos de armazenamento de dados.

> Modelo de Rede: É uma generalização do modelo hierárquico, permitindo que um registro tenha vários "pais" e vários "filhos". Ele é representado por um grafo onde os nós são registros e as conexões (arestas) representam os relacionamentos.
>
> Modelo Hierárquico: Organiza os dados em uma estrutura de árvore, com relações entre registros que seguem uma hierarquia (ou seja, de "pai para filho").

<img height="200" width="500" src="./images/network_model.png"> <img height="200" width="500" src="./images/hierarchical _model.png">

### 📍 Banco de Dados Relacional

Edgar Frank Codd, matemático pesquisador da International Business Machines Corporation (IBM), propõe o modelo de dados relacional, que se tornou um marco em como pensar em banco de dados. Ele desconectou a estrutura lógica do banco de dados do método de armazenamento físico. Este sistema se tornou padrão desde então. Edgar criou uma Álgebra Relacional e um Cálculo Relacional, nos quais baseou toda a teoria matemática das relações em que fundamentou o modelo relacional. 

Apesar da base teórica do modelo, a estrutura de dados subjacente tem o mérito de ser muito simples, pois uma relação nada mais é do que uma tabela formada por colunas e linhas, em cujas células estão armazenados os dados, conceito compreensível pelo senso comum de qualquer leigo em Matemática ou computação.

| Linhas/Colunas  | Nome | Data de Nascimento | Sexo | Setor |
| -------- | ------ | ---------- | - | ------------- |
| Linha 1  | Lucas  | 28/06/2005 | M | Estudante de T.I |
| Linha 2  | Vitoria | 24/08/2005 | F | Psicologa | 
| Linha 3  | Paiva  | 11/03/1854 | M | Tech-Lead |

A solidez da fundamentação matemática do modelo relacional disparou uma série de iniciativas de implementação em empresas, como a própria IBM, e no meio acadêmico, principalmente nas universidades do estado da Califórnia, onde se localizava o centro de pesquisas da IBM

A partir de então, a IBM patrocinou o projeto System R (de Relational), enquanto a Universidade da Califórnia em Berkeley (UCB) deu início à implementação acadêmica de um SGBD relacional denominado de Ingres (Interactive Graphics Retrieval System), **Que serviram especialmente para dar início da novos SGBD's mais atuais e robustos.**

1. Ingres (Interactive Graphics Retrieval System): Desenvolvido pela UCB (Universidade da Califórnia, Berkeley). Que no final das contas serviu como base para Ingres Corp., Sybase, MS SQL Server, Britton-Lee, Wang PACE. Este sistema utilizava QUEL como linguagem de consulta;

2. System R (de Relational): Desenvolvido pela IBM e serviu de base para o IBM SQL/DS, IBM DB2, Oracle, todas os BD da HP, Tandem's Non-Stop SQL. Este sistema utilizava SEQUEL como linguagem de consulta.

Dr. Peter Chen propõe o modelo **Entidade-Relacionamento** (ER) para projetos de banco de dados dando uma nova e importante percepção dos conceitos de modelos de dados. Assim como as linguagens de alto nível, a modelagem ER possibilita ao projetista concentrar-se apenas na utilização dos dados, sem se preocupar com estrutura lógica de tabelas.

Afinal, a comercialização de sistemas relacionais começa a se torna evidente entre as organizações e na metade do anos 80 a Linguagem Estruturada de Consulta - SQL se torna um padrão mundial. Então, A IBM transforma o DB2 como carro chefe da empresa em produtos para BD. Os modelos em rede e hierárquico passam a ficar em segundo plano praticamente sem desenvolvimentos utilizando seus conceitos, porém vários sistemas legados continuam em uso.

Portanto, no inicio dos anos 90 temos a chamada loucura na internet, baseando-se na corrida para prover acesso remoto a sistemas de computadores com dados legados, além da tendência de evolução dos novos SGBD que surgiriam a partir do Ingres e System R, aumentando o uso de soluções de código aberto (open source) através de GCC, CGI, Apache, MySQL, etc... Surgimento dos bancos de dados XML e de suas linguagens de consulta XML: XPath e XQuery, crescimento das técnicas de computação para reduzir os esforços de administração dos sistemas de banco de dados.

Além de dar espaço para modelos que são utilizados hoje em dia, como

1. Web atual: fontes de dados abrangem volumes gigantescos em diversos formatos e localizações.
2. Big Data: conjuntos de dados extremamente grandes e complexos que não podem ser facilmente processados com métodos de processamento de dados tradicionais. 
3. Diversidade de plataformas digitais, que têm em comum a conexão com a internet e a computação em nuvem (Cloud Computing).

### 📍 NoSQL

NoSQL é uma categoria de sistemas de banco de dados que se diferencia dos bancos de dados relacionais tradicionais, surgindo a partir de todas essas mudanças tecnológicas. O termo "NoSQL" significa "Not Only SQL" (ou seja, "Não Somente SQL"), indicando que esses bancos de dados oferecem uma abordagem alternativa à organização e consulta de dados, não dependendo de tabelas e relações estruturadas. Tendo como principais pontos:

1. Modelos Flexíveis de Dados:
Diferentemente dos bancos de dados relacionais (que seguem esquemas fixos), o NoSQL é mais flexível e pode armazenar dados de diferentes formatos, como documentos JSON, pares chave-valor, grafos ou colunas.
Alta Escalabilidade:

2. Ideal para lidar com grandes volumes de dados (Big Data) e tráfego intenso, escalando horizontalmente ao adicionar mais servidores.
Desempenho Rápido:

3. Projetado para alta performance, especialmente em aplicações que exigem acesso rápido a dados.
Sem Esquema Rígido:

4. Não exige que os dados sigam uma estrutura fixa, permitindo a manipulação de informações não estruturadas ou semiestruturadas.

<img src="./images/types_database_nosql.png">

---

### 📍 SGBD's

SGBD significa Sistema de Gerenciamento de Banco de Dados. Ele é um software utilizado para criar, gerenciar e manipular bancos de dados, permitindo que você armazene, organize e acesse dados de maneira eficiente e segura.

1. Algumas funções principais de um SGBD:
2. Armazenamento de dados: Salva informações em tabelas, que podem ser acessadas e modificadas.
3. Manipulação de dados: Permite inserir, atualizar, deletar e consultar dados usando linguagens como SQL.
4. Segurança: Controla quem pode acessar e modificar os dados.
5. Backup e recuperação: Garante que os dados possam ser recuperados em caso de falhas.
6. Integridade dos dados: Mantém os dados consistentes e sem redundâncias desnecessárias.

__Alguns Exemplos:__

- ORACLE (documentos, grafos e RDF);

- MYSQL (documentos);

- MICROSOFT SQL SERVER (documentos e grafos);

- POSTGRESQL (documentos);

- IBM DB2 (documentos e RDF).

### 📍 Linguagem SQL

SQL (Structured Query Language) é uma linguagem de programação padrão desenvolvida para ser utilizada mundialmente por todos os desenvolvedores, usada para gerenciar e manipular bancos de dados relacionais. Com o SQL, é possível realizar diversas operações como consultar, inserir, atualizar e excluir dados armazenados em um banco de dados. A principal característica do SQL é que ele permite que os usuários interajam com os dados de forma estruturada e intuitiva, utilizando comandos bem definidos.

Os principais tipo são:

1. DDL (Data Definition Language ou Linguagem de Definição de Dados)
    - Grupo de comandos dentro da linguagem SQL que é utilziada paraa criação, alteração e exclusão de objetos em um banco de dados;
    - Principais comandos: **CREATE, ALTER, DROPE e TRUCANTE**.

2. DML (Data Manipulation Language ou Linguagem de Manipulação de Dados)
    - Permite aos usuários fazer o acesso aos dados ou manipulá-los, conforme modelos de dados apropriado;
    - Principais comandos: **SELECT, INSERT, UPDATE e DELETE**

3. DCL (Data Control Language ou Linguagem de Controle de Dados)
    - Comandos usados para o controle de acessos e gerenciamento de permissões para usuários no banco de dados. Com eles, pode-se facilmente permitir ou negar alguma ações para usuários nas tabelas ou registros;
    - Alguns Comandos: **GRANT, REVOKE e DENY**.


</br>
</br>

---
### Passando para o Módulo 02
---
</br>

## 📌 Projeto de Banco de Dados

Enterdemos um pouco sobre o que é Banco de Dados, como foi elaborado sua evolução e todos os processos ligados ao seu desenvolvimento, entretanto, precisamos entender como funciona o planejamento de um BD, mas agora de uma forma mais prática.

### 📍 Etapa da Modelagem de Banco de Dados

A construção de uma projeto de Banco de Dados é dado a partir de 3 fases:

### 📍 Modelagem Conceitual

Nessa primeira fase, é construído um modelo conceitual, na forma de um **Diagrama de Entidade-Relacionamento (DER)** realizando um processo de abstração, focando somente naquilo que será importante para o nosso BD. Esse modelo captura as necessidades da organização em termos de armazenamento de dados de forma independente de implementação, ou seja, **nessa fase não se importamos com o tipo de SGBD que utilizaremos** apenas e como vai funcionar a infraestrutura do nosso Banco de Dados. **Sendo projetado com: Entidades, Relaciomantos e Atributos**


- ### Entidades são representadas por **retângulos**
    - **Tipos de entidades:**
        - Forte: Entidade que não depende de outra para existir, ou seja, ela por si só já possui total sentido
        - Fraca: Entidade que depende de outra para existir, pos individualmente elas não fazem sentido

        <img src="./images/entity.png">

        > No exemplo acima temos uma entidade(forte), declarada como empregado em um relacionamento de possuir a uma entidade fraca, declarada dependente, caso não exista um empregado, não vai existir um filho, mas se existir um filho, vai existir um pai.

- ### Relacionamentos são representados por **losangos**
    - **Cardinalidade:** Ela define a quantidade de instâncias que uma tabela pode ter em relação a outra.
        - Relacionamento 1..1
        - Relacionamento 1..n ou 1..*
        - Relacionamento n..n ou * ..*

        <img src="./images/cardinality_1.png">

        > Um desenvolvedor de uma empresa precisa trabalhar no computador, mas só pode usar no máximo uma máquina, paralelamente, um computador pode ficar sem ser utilizada, mas só pode ser usada por um desenvolvedor

        <img src="./images/cardinality_2.png">
        
        > Um departamento pode possuir um ou mais empregados, mas um empregado só possui trabalhar em um departamento

        <img src="./images/cardinality_3.png">

        > Um setor deve ter apenas um profissional trabalhando, mas um profissional pode trabalhar em mais de um setor

- ### Atributos são representados por meio de **setas com um circulo no final**
    - **Tipos de atributos:**
        - Simples: Valores simples
        - Composto: Mais de um valor para um dado (Endereço: CEP, Bairro, Rua, Número)
        - Multvalorado: Valores pré-definidos para um dado (Caixa de seleção)
        - Derivado: Dado aferido a partir de um valor, ou seja, dado calculado a parte de um valor dado pelo usúario (Date_birth: 28/06/2005 ; derivado: 19 anos)
        - Chave: Valor único (ID)

            - **Representação gráfica desses atributos:**
                    <img src="./images/attributes_1.png">
                    <img src="./images/attributes_2.png">

### 📍 Especialização/Generalização

Especialização e Generalização são conceitos relacionados ao modelo de banco de dados e ao design de esquemas, frequentemente utilizados em modelagem de dados no contexto de diagramas Entidade-Relacionamento Estendido (EER). Esses conceitos ajudam a organizar os dados de maneira hierárquica e são úteis para representar subclasses e superclasses.

### ➜ Generalização

Consiste no processo de abstrair características comuns de duas ou mais entidades e combiná-las em uma entidade mais genérica (superclasse).

- Ideia principal: Identificar semelhanças entre várias entidades para criar um modelo mais simplificado.
- Exemplo: As entidades "Carro" e "Moto" podem ser generalizadas em uma entidade genérica chamada "Veículo", porque ambas compartilham atributos como "Marca", "Modelo" e "Ano 
de Fabricação".

<img src="./images/generalization.png">

### ➜ Especialização 

É o processo inverso, ou seja, de criar subclasses a partir de uma entidade genérica (superclasse) com base em características específicas.

- Ideia principal: Destacar diferenças ou características únicas entre subconjuntos de uma entidade.
- Exemplo: A entidade genérica "Veículo" pode ser especializada em subclasses como "Carro", "Moto" e "Caminhão", onde cada uma tem atributos ou comportamentos específicos, como "Número de Portas" para "Carro".

<img src="./images/example.png">


### ➜ Parcial e Total

Dentro da especialização/generalização temos duas classificações importantes, que seriam a ligação com entidade de forma **parcial** e **total**.

- **Parcial:** São entidades que indicam que não precisam fazer parte de nenhuma especialização/generalização

- **Total:** São entidades que indicam que que precisam necessariamente fazer parte de pelo menos alguma especialização/generalização.

<img src="./images/partial.png">

> Nesse exemplo, indica que nem todo **FUNCIONÁRIO** é **MOTORISTA** e nem **SECRETÁRIA**
>
> A ligação especialização/generalização parcial é definida por um P no seu relacionamento

<img src="./images/total.png">

> Nesse exemplo, indica que **CLIENTE** é pelo menos **PESSOA FÍSICA** ou **PESSOA JURÍDICA**
>
> A ligação especialização/generalização total é definida por um T no seu relacionamento, vale ressaltar que na ausência de qualquer simbolo, é subentedido que estamos lidando com uma total.


### 📍 Projeto Lógico

A partir desse momento, a etapa de projeto lógico objetiva transformar o modelo conceitual obtido na primeira fase em um modelo lógico utilizando um **Diagrama de Tabela (DT)**. **A modelagem lógica (MCL)** define como o banco de dados será implementado em um SGBD específico, portanto, **nessa fase se importamos com o tipo de SGBD que utilizaremos**, além do mais, nesse ponto do projeto não definiremos as características dos atributos, tais como tipos de dados e tamanho. Basta apenas que eles estejam vinculados às suas tabelas. Ele é projetado com: Tabelas, Colunas e Chaves

> Existem diversos modelos lógicos, por exemplo:
>
> Rede, hierárquico, relacional, orientado a objeto, grafos, chave-valor e XML. entretanto, o mais popular é o relacional, e também utilizaremos ele no nosso matérial.
> Vamos somente refrescar como é representando graficamente o modelo relacional.
>
>| Linhas/Colunas  | Nome | Data de Nascimento | Sexo | Setor |
>| -------- | ------ | ---------- | - | ------------- |
>| Linha 1  | Lucas  | 28/06/2005 | M | Estudante de T.I |
>| Linha 2  | Vitoria | 24/08/2005 | F | Psicologa | 
>| Linha 3  | Paiva  | 11/03/1854 | M | Tech-Lead |

A partir desse momento do projeto lidaremos com algumas diferenças que já foram citadas, que seria no modelo de modelagem, trabalharemos agora com: **Tabelas, Colunas e Chaves**

### 📍 Tabelas:

Organizaremos nossa modelagem a partir de agora por meio de tabelas, que seriam as antigas **entidades*.

<img src="./images/table_bd.png">

### ➜ Regras das criações de tabela:

1. Nomeclatura:
    - É evidente a importância de sempre ser claro em qualquer área de desenvolvimento do nosso trabalho, entretanto, vale ressaltar algumas boas condutas sobre as nomeclaturas que iremos impregar no nosso Banco de Dados
        - Toda tabela deve possuir um nome único, não é permitido a duplicata de tabelas;
        - A tabela deve representa com clareza o objetado modelado;
        - Não pode possuir espaços
        - A primeira linha da tabela é obrigatóriamente declara o tipo de dados que receberemos porteriormente naquela coluna.
2. Regras das Colunas:
    - Não é permitido ter uma coluna composta, ou seja, não é possível haver uma coluna que complete a outra.
3. Tipos de Valores:
    - Na criação de uma tabela, precisamos declarar quais serão os valores opcionais e os obrigatórios

### 📍 Tipos de Chaves:

O conceito de chave designa um item de busca, ou seja, um dado que será usado para efetuar uma consulta no banco de dados. É um conceito lógico que só faz sentido para a aplicação e não existe fisicamente no banco de dados. Existindo 4 tipos de chaves, sendo elas:

1. Chave Primária
2. Chave Secundária
3. Chave Candidata
4. Chave Estrangeira

### ➜ Chave Primária (PK - Primary Key)

A chave primária é usada para identificar univocamente uma linha em uma tabela. Em uma tabela, um SGBD precisa diferenciar uma linha das demais, isso é feito a partir da definição de uma restrição de integridade. Na prática, escolheremos uma ou mais coluna(s) para que seu(s) valores se torne(m) únicos no banco de dados. Exemplo: CPF, Matricula, CNPJ, etc.

Todas as chaves primárias tem as seguintes propriedades:

1. Unicidade
    - O valor da chave primária não permite repetição;
2. Monovalorado
    - Toda linha da tabela possui no máximo um valor de chave primária;
3. Restrição de Integridade
    - toda linha da tabela necessariamente tem que ter um valor para a coluna que é chave primária. Em outras palavras, nenhum valor de chave primária deve ser vazio. Esta propriedade é conhecida por restrição de integridade de entidade.
    
### ➜ Chave Secundária 

A chave secundária é usada para acessar um conjunto de informações. Pode ser formada por um único atributo ou mais de um atributo que identifica(m) um subconjunto de dados em uma tabela. Normalmente, se cria um índice para uma chave secundária como forma de otimizar a consulta feita por aquela chave ao banco de dados. Por exemplo, podemos ter uma chave secundária formada pelo CEP para a tabela de CLIENTES pois esta chave identifica um subconjunto de clientes que residem em uma rua.

### ➜ Chave Candidata

Ao projetarmos uma tabela, pode ser que mais de uma coluna sirva para diferenciar uma linha das demais. A chave candidata é formada por um atributo que identifica uma única linha na tabela. Como uma tabela pode possuir mais de um atributo identificador único podemos ter várias chaves candidatas em uma única tabela, sendo que apenas uma das chaves candidatas pode ser escolhida para ser a chave primária da tabela. As demais chaves permanecem como chaves candidatas na tabela. 

Por exemplo, em uma tabela declarada **ALUNO**, tanto **CODIGOALUNO** quanto **CPF** poderiam ser utilizados como chave primária. Logo, podemos dizer que CODIGOALUNO e CPF são chaves candidatas.

### ➜ Chave Estrangeira (FK - Foreign Key) 

A chave estrangeira é formada por atributos que são chave primária em outra tabela, servindo assim para estabelecer relacionamentos entre as tabelas de um banco de dados. Assim, quando dizemos que duas tabelas estão relacionadas através de uma coluna devemos observar que em uma tabela esta coluna será chave primária e na outra tabela ela será uma chave estrangeira que fará a ligação entre as duas tabelas, **estabelecendo o relacionamento.**

Principal regra:

- - Se uma determinada tabela A possui uma chave estrangeira que estabelece relacionamento com uma tabela B, então o valor da chave estrangeira da tabela A deve ser igual a um valor de chave primária na tabela B. Esta regra garante que as referências de uma tabela para outra tabela sejam válidas, de forma que os relacionamentos sejam consistentes e não ocorra inconsistência nos dados, como haver um funcionário alocado em um departamento que não existe. Assim, para todo valor de uma coluna que é chave estrangeira em uma tabela, deve haver um valor correspondente na coluna que é chave primária da tabela com a qual a chave estrangeira faz referência.
- Como nem sempre o relacionamento entre tabelas é obrigatório uma chave estrangeira pode possuir valor nulo

<img src="./images/FK.png">

### 📍 Normalização

Um método que visa avaliar e aumentar a qualidade de um projeto de banco de dados relacional foi baseado de forma normal (FN), que pode ser vista como uma regra, a qual deve ser observada na semântica de uma tabela, para que a considerem bem projetada. Através do processo de normalização pode-se, gradativamente, substituir um conjunto de entidades e relacionamentos por um outro, mais eficiente em relação às anomalias de atualizações (inclusão, alteração e exclusão) as quais podem causar certos problemas, tais como:

- Informações redundantes no banco de dados;
- Dependências parciais em relação a chave concatenada;
- Redundâncias de dados desnecessárias;S
- Perdas acidentais de informação;
- Dependências transitivas entre atributos não chave.

Para resolver esses problemas foi desenvolvido uma **forma normal** que devem ser aplicadas a um modelo de dados com o objetivo de garantir um modelo de dados livres desses problemas citados, estável e eficiente. A Normalização é necessária porque podem ocorrer erros de modelagem, sendo que a normalização se apresenta como uma técnica para garantir a integridade de um modelo de dados.

### ➜ Primeira Forma Normal

Diz-se que uma tabela está na primeira forma normal quando ela não contém tabelas aninhadas. A primeira forma normal assegura que não existam repetições de valores nos atributos nem grupos repetidos de atributos das entidades de um modelo de dados. 

O objetivo da primeira forma normal é eliminar o aninhamento de tabelas para que cada tabela tenha informações de um único assunto. Não podemos ter mais de um assunto em uma tabela.

Os procedimentos mais recomendados para aplicar a 1FN são os seguintes:

- Identificar a chave primária da entidade;
- Identificar o grupo repetitivo e removê-lo da entidade;
- Criar uma nova entidade com a chave primária da entidade anterior e o grupo repetitivo.

> Exemplo: 
>
> Código_cliente, Nome, * Telefone, Endereço
>
> <img src="./images/1FN_1.png">
>
> Mesmo com o ajuste, a tabela ainda não está na primeira forma normal, pois há clientes com mais de um telefone e os valores estão em uma mesma célula. Para normalizar será necessário criar uma nova tabela para armazenar os números dos telefones e o campo-chave da tabela cliente. 
>
> <img src="./images/1FN_2.png">
>
> Depois da alteração para assim de fato estarmos na primeira forma
>
> <img src="./images/1FN_3.png">

### ➜ Segunda Forma Normal

Uma tabela está na Segunda Forma Normal 2FN se ela estiver na 1FN e todos os atributos não chave forem totalmente dependentes da chave primária (dependente de toda a chave e não apenas de parte dela). Se o nome do produto já existe na tabela produtos, então não é necessário que ele exista na tabela de produtos

A segunda forma normal trata destas anomalias e evita que valores fiquem em redundância no banco de dados.

Procedimentos:

- Identificar os atributos que não são funcionalmente dependentes de toda a chave primária;
- Remover da entidade todos esses atributos identificados e criar uma nova entidade com eles.
    - A chave primária da nova entidade será o atributo do qual os atributos do qual os atributos removidos são funcionalmente dependentes.
    
> Exemplo:
>
> N_pedido, Código_produto, Produto, Quant, Valor_unit, Subtotal
>
> <img src="./images/2FN_1.png">
>
> O nome do produto depende do código do produto, porém não depende de N_pedido que é a chave primária da tabela, portanto não está na segunda forma normal. Isto gera problemas com a manutenção dos dados, pois se houver alteração no nome do produto teremos que alterar em todos os registros da tabela venda. Para normalizar esta tabela teremos de criar a tabela Produto que ficará com os atributos Código_produto e produto e na tabela Venda manteremos somente os atributos N_pedido, código_produto, quant, valor_unit e subtotal. 
>
> <img src="./images/2FN_2.png">

### ➜ Terceira Forman Normal

A terceira forma normal é parte daquilo que chamamos de normalização de dados para fins de planejamento de bases de dados computacionais. É uma forma de analisar e refinar a estrutura dos dados a fim de torná-los íntegros e exclusivos, evitando repetições desnecessárias e possíveis sobrecargas no gerenciador de banco de dados. Uma tabela está na Terceira Forma Normal 3FN se ela estiver na 2FN e se nenhuma coluna não-chave depender de outra coluna não-chave.

Na terceira forma normal temos de eliminar aqueles campos que podem ser obtidos pela equação de outros campos da mesma tabela.

Procedimentos:
- Identificar todos os atributos que são funcionalmente dependentes de outros atributos não chave e removê-los.

> Exemplo: 
>
> Considerando a tabela Venda, veremos que a mesma não está na terceira forma normal, pois o subtotal é o resultado da multiplicação Quant X Valor_unit, desta forma a coluna subtotal depende de outras colunas não-chave.
>
> <img src="./images/3FN_1.png">
>
> <img src="./images/3FN_2.png">

### 📍 Modelagem de Tabelas

Agora iremos compreender oque antes chamavamos de **DER (Diagrama de Entidade-Relacionamento)** se tornando no **DT (Diagrama de Tabelas)**, que consiste principalmente em cada vez chegar ao nosso modelo de Banco de Dados final.    

### ➜ Mapeamento das Entidades
Toda **entidade** torna-se uma **tabela** levando todos os atributos definidos na entidade que tornam-se colunas na tabela criada. O identificador da entidade torna-se a chave primária da tabela que não permitirá repetição de valores e nem valores nulos

<img src="./images/Entity_DT.png">

> Exemplo acima demonstra como é feito a conversão de um uma **entidade em DER** para o modelo DT de forma prática

Outro exemplo a seguir:

<img src="./images/Entity_DT_example_02.png">

Temos dentro das entidades a fortes e as fracas, retrataremos especificamente as fracas, que possuem uma regra especial de conversão, baseando-se no estudo dos tipos de chaves.

<img src="./images/Entity_DT_Example_03.png">

> Para tentar melhorar o entedimento do por que dessa medida, vamos tentar compreender. Uma entidade fraca depende de uma entidade forte, ou seja, elas estão vinculadas de uma forma muito mais próxima do que qualquer outra entidade, portanto, a entidade fraca se torna uma chave estrangeira da entidade forte **SEMPRE**

### ➜ Mapeamento de Atributos
Os atributos das entidades e dos relacionamentos devem ser gerados de forma que minimizem o consumo de espaço de armazenamento e torne mais eficiente a consulta de dados. Devem ser consideradas as características do gerenciador de banco de dados que será utilizado para implementar o banco de dados físico. 

Dentro do mapeamento de atributos só teremos apenas uma modelagem, que seria sobre os atributos multivalorados. Quando formos converter de um DER para um DT, os atributos multivalorados terão que ser adicionados a uma coluna ou ser construida uma tabela própria somente para os seus valores compostos.

<img src="./images/Entity_DT_example_04.png">

> Aluno(<u>CodigoAluno</u>, Nome, CPF)
> FoneAluno(<u>CodigoAluno, Numero, Tipo</u>)
>
> Temos duas tabelas distintas ligadas por uma chave estrangeira para termos os atributos multivalorados
>
> Aluno(<u>CodigoAluno</u>, Nome, CPF, Numero1, Numero2, Numero3)

Vale ressaltar que você pode utilizar qualquer um dos dois métodos, mas precisamos sempre tentar ao máximo manter o nosso ambiente de Banco de Dados o mais limpo possível, portanto, teremos que analisar cada caso para enterdemos qual seria o melhor método a se aplicar.

Tabela Própria: Utilizada principalmente para quando temos atributos multivalorados que possuem muitos outros atributos dentro deles.
Adição de Coluna: Utilizada para atributos multivalorados que não possuem muitos atributos dentro deles.

### ➜ Mapeamento de Relacionamentos
 O mapeamento dos relacionamentos implica na transformação de atributos das entidades em colunas nas tabelas e, em casos específicos, implica também na criação de novas tabelas a partir de relacionamentos. 

Existem diferentes estratégias para a transformação de relacionamentos em modelo lógico.

- Tabela Própria
- Adição de Coluna
- Fusão de Tabelas

Métodos que são utilizados dependendo de cada cardinalidade de relacionamentos

> Vale Lembrar!
>
> A cardinalidade é declarada a partir da analise dos relacionamentos, onde teremos um número mínimo de relacionamentos e o máximo (minímo, máximo). E para analisarmos qual o tipo de cardinalidade montamos a partir da análise do máximo dos dois relacionamentos que se ligam.

### ➜ Relacionamentos (1..1)

- Adicionar uma coluna (FK) para um DER com alguma cardinalidade que possua no **minímo igual a 0**

<img src="./images/entity_DT_Example_05.png">

- Fusão de tabelas para uma DER com alguma cardinalidade que possua no **minímo igual a 1**

<img src="./images/entity_DT_Example_06.png">

### ➜ Relacionamentos (1..N)

- Adicionar uma coluna (FK) na tabela com **cardinalidade igual a N**

<img src="./images/entity_DT_Example_07.png">

### ➜ Relacionamentos (N..N)

- Criar tabela com as colunas(FK) das tabelas relacionadas

<img src="./images/entity_DT_Example_08.png">

### ➜ Mapeamento de Generalização/Especialização
Em geral, deve ser criada uma tabela para a entidade pai e uma tabela para cada entidade filha. Porém, veremos que existem três alternativas para essa transformação. 

1. Tabela única para entidade genérica e suas especializações
2. Tabelas para a entidade genérica e as entidades especializadas
3. Tabelas apenas para as entidades especializadas

<img src="./images/entity_DT_Example_09.png">
<img src="./images/entity_DT_Example_10.png">
<img src="./images/entity_DT_Example_11.png">

### 📍 Projeto Físico

Afinal, na etapa de projeto físico, o modelo do banco de dados é enriquecido com detalhes que influenciam no desempenho do banco de dados, mas não interfere em sua funcionalidade. O modelo obtido neste passo é o modelo físico do banco de dados. Afinal, definimos os detalhes de implementação dos objetos do banco de dados. No caso das tabelas, escolhemos os tipos de dados e tamanho das colunas, e especificamos se elas são opcionais ou obrigatórias.

## 📌 Tipos de Dados

Antes de criamos nosso Banco de Dados e utilizarmos os nossos comandos SQL, precisamos entender quais os tipos de dados que poderemos ter dentro do nosso Sistema de Banco de Dados, vale salientar que estamos trabalhando o desenvolvimento de Banco de Dados e utilizaremos o SGBD Relacional, PostgresSQL, portanto, alguns comandos SQL serão exclusivos desse SGBD, mas o conceito basico de SQL segue o mesmo padrão, só existem alguns casos especificos do PostgresSQL..

### ➜ Dados Númericos

``INT``: Números Inteiros (..., -3150, - 1056, 0, 2565, 4821, ...)

``SMALLINT``: Números Inteiros Pequenos (..., -31, -15, -3, 0, 5, 12, 24, ...)

``BIGNINT``: Números Inteiros Grandes (..., -515316, -31532, 0, 54156, 925012)

``DECIMAL``: Números Decimais (..., -23.75, -9.31, 0, 12.53, 31.53)

``FLOAT / REAL / DOUBLE``: Números Decimais mais complexos, como: PI

``MONEY``: Número Monétario

### ➜ Dados de Textos

``CHAR(n)``: Texto de tamanho fixo, sempre ocupa ``n`` caracteres.

``VARCHAR(n)``: Texto de tamanho variado, sempre ocupa ``n`` caracteres.

``TEXT``: Texto longo, geralmente usado para descrições, comentários.

### ➜ Dados de Data e Hora

``DATE``: Armazena data (ano/mês/dia)

``TIME``: Armezena hora (horas:minutos:segundos)

``DATATIME / TIMESTAMP``: Armazena data e hora completa

### ➜ Dados Booleanos

``BOOLEAN``: Valores Booleanos (True or False)

## 📌 Comandos SQL

Compreendendos os tipos de dados que podemos trabalhar com o nosso Banco de Dados, precisamos aprender a manipula-los dentro do nosso SGBD, para tanto, dentro do nosso material, utilizaremos o PostgreSQL, vale ressaltar, que alguns métodos são exclusivos desse SGBD, mas todos os conceitos são retirados dos comandos SQL, ou seja, são padrões para lidar com qualquer tipo de Banco de Dados.

Para tanto, primeiramente, iremos aprender como utilizar os comandos de DDL (Data Definition Language ou Linguagem de Definição de Dados), ou seja, o ``CREATE`` ``ALTER`` ``DROP``.

### 📍 CREATE 

O comando SQL ``CREATE`` é utilizado para criar novas **databases** e **tabelas**, sendos os principais para esse material intródutorio, mas teriamos muitos outros que serão utilizados para desenvolvedores mais experientes.

### ➜ DATABASE

```SQL
CREATE DATABASE nomeBancoDeDados;
```
> Sintaxe básica utilizada na criação de um Banco de Dados.

### ➜ TABLE

```SQL
CREATE TABLE nomeDaTabela (
    coluna1 tipoDeDado restrições,
    coluna2 tipoDeDados restrições,
    coluna3 tipoDeDados restrições,
    ...
    colunaN tipoDeDados retrições
);
```
> Sintaxe básica utilizada na criação de uma tabela.

A cada assunto que formos tratando dentro do nosso material de comandos SQL traremos um exemplo prática para melhor compreensão de como trabalharemos com esses comandos no futuro. Ou seja, para comerçamos, digamos que somos CEO de uma empresa chamada **"L2A Code"** e criaremos um Banco de Dados que receberá os dados de todos os funcionários presentes.

```SQL
CREATE DATABASE L2A_Code

CREATE TABLE Funcionarios (
    ID INT PRIMARY KEY,
    Nome VARCHAR(50) NOT NULL,
    CPF VARCHAR(11) NOT NULL,
    DataNasc DATE NOT NULL,
    Sexo CHAR(1) NOT NULL,
    Cidade VARCHAR(20) NOT NULL,
    Cargo VARCHAR(20) NOT NULL,
    Salario INT NOT NULL
);
```

Assim, criaremos o nosso primeiro Banco de Dados chamado ``L2A Code`` e teremos a nossa primeira tabelas de ``funcionarios``. Para tanto, precisamos compreender como acrescentaremos, manipularemos e buscaremos dados no nosso Banco de Dados, entretanto, de forma gráfica a nossa tabela ``funcionarios`` está estruturada até o momento da seguinte maneira:

| ID | Nome | CPF | DataNasc | Sexo | Cidade | Cargo | Salario |
| -- | ---- | --- | -------- | ---- | ------ | ----- | ------- |
|    |      |     |          |      |        |       |         |

### 📍 INSERT

Agora que criamos nossa tabela precisamos inserir dados nela, para tanto, teremos os comandos SQL de ``INSERT``. sua sintaxe básica é definida como:

```SQL
INSERT INTO nomeDaTabela (coluna1, coluna2, coluna3, ..., colunaN) VALUES
(valor1, valor2, valor3, ..., valorN),
(valor1, valor2, valor3, ..., valorN),
(valor1, valor2, valor3, ..., valorN),
(valor1, valor2, valor3, ..., valorN);
```
> Sintaxe Básica de inserir dados

Ou seja, trabalhando ainda com aquela tabela que estamos construindo para nossa empresa, iremos inserir dados na tabela ``funcionario``, exemplificando, ficaria da seguinte forma:

```SQL
INSERT INTO Funcionarios (ID, Nome, CPF, DataNasc, Sexo, Cidade, Cargo, Salario)
VALUES 
    (2025011, 'Lucas Alcantara', '123.957.321-87', '2005-06-28', 'M', 'Fortaleza', 'CEO', NULL),
    (2025012, 'Vitoria Pedrosa', '231.574.958-14', '2005-08-24', 'F', 'Fortaleza', 'CFO', NULL),
    (2025021, 'Mara Edwirges', '958.478.321-98', '1987-10-18', 'F', 'São Paulo', 'Diretora do RH', 15600),
    (2025022, 'Claubia Mesquita', '157.987.546-32', '1984-11-21', 'F', 'Sobral', 'Diretora de SG', 16200),
    (2025023, 'Felipe Paiva', '684.315.984-73', '1993-04-12', 'M', 'Curitiba', 'Diretor de TI', 23700),
    (2025031, 'Cleylton Alcantara', '315.753.391-61', '1987-05-30', 'M', 'São Paulo', 'Tech-Lead TI', 15100),
    (2025032, 'Vivian Pedrosa', '591.931.681-91', '2015-04-07', 'F', 'Aquiraz', 'Estagiária TI', 2400),
    (2025033, 'Guilherme Soares', '851.641.317-85', '2006-10-28', 'M', 'Natal', 'Junior TI', 3200),
    (2025041, 'Bruna Alencar', '931.513.093-03', '2006-07-05', 'F', 'Fortaleza', 'Estagiaria RH', 1900),
    (2025042, 'Iohana Madeira', '003.315.910-31', '2002-12-15', 'F', 'Pernambuco', 'Junior RH', 2500);

```

E nossa tabela finalizaria da seguinte maneira:

| ID      | Nome               | CPF            | DataNasc   | Sexo | Cidade     | Cargo          | Salario |
| ------- | ------------------ | -------------- | ---------- | ---- | ---------- | -------------- | ------- |
| 2025011 | Lucas Alcantara    | 123.957.321-87 | 2005-06-28 | M    | Fortaleza  | CEO            | N/A     |
| 2025012 | Vitoria Pedrosa    | 231.574.958-14 | 2005-08-24 | F    | Fortaleza  | CFO            | N/A     |
| 2025021 | Mara Edwirges      | 958.478.321-98 | 1987-10-18 | F    | São Paulo  | Diretora do RH | 15.600  |
| 2025022 | Claubia Mesquita   | 157.987.546-32 | 1984-11-21 | F    | Sobral     | Diretora de SG | 16.200  |
| 2025023 | Felipe Paiva       | 684.315.984-73 | 1993-04-12 | M    | Curitiba   | Diretor de TI  | 23.700  |
| 2025031 | Cleylton Alcantara | 315.753.391-61 | 1987-05-30 | M    | São Paulo  | Tech-Lead TI   | 15.100  | 
| 2025032 | Vivian Pedrosa     | 591.931.681-91 | 2015-04-07 | F    | Aquiraz    | Estagiária TI  | 2.400   |
| 2025033 | Guilherme Soares   | 851.641.317-85 | 2006-10-28 | M    | Natal      | Junior TI      | 3.200   |
| 2025041 | Bruna Alencar      | 931.513.093-03 | 2006-07-05 | F    | Fortaleza  | Estagiaria RH  | 1.900   |
| 2025042 | Iohana Madeira     | 003-315-910-31 | 2002-12-15 | F    | Pernambuco | Junior RH      | 2.500   |

### 📍 ALTER

Além do mais, criando e inserindo dados aprenderemos a altera-los caso necessário a partir dos comandos SQL de ``ALTER``, que servem para adicionar, remover, modificar, renomemear colunas ou adicionar ou remover restrições.

### ➜ ALTER em Tabelas

```SQL
ALTER TABLE nomeDaTabelaAntiga RENAME TO nomeDaTabelaNova;
```
> Sintaxe básica para renomear tabelas

```SQL
ALTER TABLE nomeDaTabela ADD nomeDaColuna tipoDeDado [restrições];
```
> Sintaxe básica de adicionar colunas a tabela

```SQL
ALTER TABLE nomeDaTabela DROP COLUMN nomeDaColuna;
```
> Sintaxe básica de remover colunas da tabela 

```SQL
DROP TABLE nomeDaTabela;
```
> Exclusão da tabela

### ➜ ALTER em Colunas

```SQL
ALTER TABLE NomeDaTabela ALTER COLUMN NomeDaColuna TYPE NovoTipoDeDados;
```
> Sintaxe básica de modificar uma colunas

```SQL
ALTER TABLE nomeDaTabela RENAME COLUMN nomeDaColunaAntiga TO nomeDaColunaNova;
```
> Sintaxe básica para renomear uma coluna

### ➜ ALTER em Restrições

```SQL
ALTER TABLE nomeDaTabelaADD CONSTRAINT nomeDaRestrição tipoDeRestrição (nomeDaColuna);
```

```SQL
ALTER TABLE nomeDaTabela DROP CONSTRAINT nomeDaRestrição;
```
> Sintaxe básica para remover restrições

### 📍 DELETE e DROP    

Os comandos SQL de ``DELETE`` serve exclusivamente para trabalhar em remover **Tabelas** da nossa **DataBase** ou em remover **Linhas(ou Registros)**. Afinal, sua sintaxe se forma da seguinte maneira:

```SQL
DELETE FROM nomeDaTabela WHERE condição;
```
> Sintaxe básica para deletar um registro de uma tabela

Exemplificando como funciona a questão de deletar um registro traremos o nosso exemplo da Tabela ``funcionarios``, para tanto, vamos apenas revisar uma questão. Quando formos trabalhar com a exclusão de uma coluna, utilizaremos um ``ALTER``, e quando formos apagar apenas uma linha(ou registro), utilizaremos o ``DELETE``. Ou seja, digamos que queremos apagar o funcionario com **ID:** 2025042 por que não trabalha mais na nossa empresa, utilizaremos o comando a seguir:

```SQL
DELETE FROM funcionarios WHERE ID = 2025042;
```

| ID      | Nome               | CPF            | DataNasc   | Sexo | Cidade     | Cargo          | Salario |
| ------- | ------------------ | -------------- | ---------- | ---- | ---------- | -------------- | ------- |
| 2025011 | Lucas Alcantara    | 123.957.321-87 | 2005-06-28 | M    | Fortaleza  | CEO            | N/A     |
| 2025012 | Vitoria Pedrosa    | 231.574.958-14 | 2005-08-24 | F    | Fortaleza  | CFO            | N/A     |
| 2025021 | Mara Edwirges      | 958.478.321-98 | 1987-10-18 | F    | São Paulo  | Diretora do RH | 15.600  |
| 2025022 | Claubia Mesquita   | 157.987.546-32 | 1984-11-21 | F    | Sobral     | Diretora de SG | 16.200  |
| 2025023 | Felipe Paiva       | 684.315.984-73 | 1993-04-12 | M    | Curitiba   | Diretor de TI  | 23.700  |
| 2025031 | Cleylton Alcantara | 315.753.391-61 | 1987-05-30 | M    | São Paulo  | Tech-Lead TI   | 15.100  | 
| 2025032 | Vivian Pedrosa     | 591.931.681-91 | 2015-04-07 | F    | Aquiraz    | Estagiária TI  | 2.400   |
| 2025033 | Guilherme Soares   | 851.641.317-85 | 2006-10-28 | M    | Natal      | Junior TI      | 3.200   |
| 2025041 | Bruna Alencar      | 931.513.093-03 | 2006-07-05 | F    | Fortaleza  | Estagiaria RH  | 1.900   |


A Linha do ID = 2025041 foi excluida da nossa tabela e apenas para demonstrar qual linha foi excluida, teremos a seguir: 

| ID      | Nome               | CPF            | DataNasc   | Sexo | Cidade     | Cargo          | Salario |
| ------- | ------------------ | -------------- | ---------- | ---- | ---------- | -------------- | ------- |
| 2025042 | Iohana Madeira     | 003-315-910-31 | 2002-12-15 | F    | Pernambuco | Junior RH      | 2.500   |

Caso queiramos lidar com a exclusão de tabelas ou colunas, precisaremos utilizar o método ``DROP``, sua sintaxe básica consiste na seguinte:

```SQL
DROP DATABASE databaseNome
```
> Sintaxe básica para exclusão do Banco de Dados

```SQL
DROP TABLE nomeDaTabela
```
> Sintaxe básica para exclusão de uma tabela

### 📍 UPDATE

Enteremos como alteramos dados de uma determinada coluna e de uma determinada condição, para isso, trabalharemos com os comandos SQL de ``UPDATE``, sua sintaxe básica é formada:

```SQL
ALTER TABLE nomeDaTabela SET nomeDaColuna1 = novoValor1, nomeDaColuna2 = novoValor2 WHERE condição;
```

Ou seja, exemplificando na nossa Tabela ``funcionarios``, digamos que queremos alterar o cargo e salario do funcionario com ID 2025041.

```SQL
UPDATE funcionarios SET Cargo = 'Junior de RH', Salario = 2.500 WHERE ID = 2025041;
```

| ID      | Nome               | CPF            | DataNasc   | Sexo | Cidade     | Cargo          | Salario |
| ------- | ------------------ | -------------- | ---------- | ---- | ---------- | -------------- | ------- |
| 2025011 | Lucas Alcantara    | 123.957.321-87 | 2005-06-28 | M    | Fortaleza  | CEO            | N/A     |
| 2025012 | Vitoria Pedrosa    | 231.574.958-14 | 2005-08-24 | F    | Fortaleza  | CFO            | N/A     |
| 2025021 | Mara Edwirges      | 958.478.321-98 | 1987-10-18 | F    | São Paulo  | Diretora do RH | 15.600  |
| 2025022 | Claubia Mesquita   | 157.987.546-32 | 1984-11-21 | F    | Sobral     | Diretora de SG | 16.200  |
| 2025023 | Felipe Paiva       | 684.315.984-73 | 1993-04-12 | M    | Curitiba   | Diretor de TI  | 23.700  |
| 2025031 | Cleylton Alcantara | 315.753.391-61 | 1987-05-30 | M    | São Paulo  | Tech-Lead TI   | 15.100  | 
| 2025032 | Vivian Pedrosa     | 591.931.681-91 | 2015-04-07 | F    | Aquiraz    | Estagiária TI  | 2.400   |
| 2025033 | Guilherme Soares   | 851.641.317-85 | 2006-10-28 | M    | Natal      | Junior TI      | 3.200   |
| 2025041 | Bruna Alencar      | 931.513.093-03 | 2006-07-05 | F    | Fortaleza  | Junior de RH   | 2.500   |

### 📍 SELECT

Agora que entedemos como criar, alterar, deletar e atulizar nossas Tabelas, Colunas e Dados, precisamos entender como visualizar essas Tabelas, no nosso material sempre trouxemos graficamente como estava ficando nossa Tabela na execução de cada comando exemplo, mas agora teremos que entender como lidar com isso no próprio SGBD a partir de comandos SQL de ``SELECT``, que são responsáveis por codificar como funcionará nossa busca de dados. Ademais, a sua sintaxe básica para termos como resultado a nossa tabela toda, como estavamos apresentando, seria a seguinte:

```SQL
SELECT * FROM nomeDaTabela
```
> Sintaxe básica para retornar toda a tabela

```SQL
SELECT nomeDaColuna1, nomeDaColuna2, ..., nomeDaColunaN FROM nomeDaTabela;
```
> Sintaxe básica para retornar colunas especiíficas

```SQL
SELECT nomeDaColuna FROM nomeDaTabela WHERE condição;
```

Ou seja, represetandando alguns exemplos aleátorios, vamos utilizar esses comandos de ``SELECT``

```SQL
SELECT ID, Nome * FROM funcionarios;
```

| ID      | Nome               | 
| ------- | ------------------ | 
| 2025011 | Lucas Alcantara    | 
| 2025012 | Vitoria Pedrosa    | 
| 2025021 | Mara Edwirges      | 
| 2025022 | Claubia Mesquita   | 
| 2025023 | Felipe Paiva       | 
| 2025031 | Cleylton Alcantara |
| 2025032 | Vivian Pedrosa     | 
| 2025033 | Guilherme Soares   | 
| 2025041 | Bruna Alencar      |

```SQL
SELECT * FROM funcionarios WHERE salario > 5000:
```

| ID      | Nome               | CPF            | DataNasc   | Sexo | Cidade     | Cargo          | Salario |
| ------- | ------------------ | -------------- | ---------- | ---- | ---------- | -------------- | ------- |
| 2025011 | Lucas Alcantara    | 123.957.321-87 | 2005-06-28 | M    | Fortaleza  | CEO            | N/A     |
| 2025012 | Vitoria Pedrosa    | 231.574.958-14 | 2005-08-24 | F    | Fortaleza  | CFO            | N/A     | 
| 2025032 | Vivian Pedrosa     | 591.931.681-91 | 2015-04-07 | F    | Aquiraz    | Estagiária TI  | 2.400   |
| 2025033 | Guilherme Soares   | 851.641.317-85 | 2006-10-28 | M    | Natal      | Junior TI      | 3.200   |
| 2025041 | Bruna Alencar      | 931.513.093-03 | 2006-07-05 | F    | Fortaleza  | Junior de RH   | 2.500   |

Além desses ``SELECT`` básicos, temos alguns que podem realizar buscar mais precisas em determinada condições.

### ➜  LIKE 

Usado para buscar padrões específicos em colunas de texto, mas é canse sensitive, ou seja, o caractere "A" e "a" são diferentes. Utiliza caracteres coringas:

- % corresponde a qualquer número de caracteres.

- _ corresponde a exatamente um caractere.

```SQL
SELECT nomeDaColuna FROM nomeDaTabela WHERE condição LIKE '%caractere%';
```

Aplicando isso na nossa Tabela, teriamos o seguinte resultados:

```SQL
SELECT * FROM funcionarios WHERE nome LIKE 'Vi%';
```

| ID      | Nome               | CPF            | DataNasc   | Sexo | Cidade     | Cargo          | Salario |
| ------- | ------------------ | -------------- | ---------- | ---- | ---------- | -------------- | ------- |
| 2025012 | Vitoria Pedrosa    | 231.574.958-14 | 2005-08-24 | F    | Fortaleza  | CFO            | N/A     |
| 2025032 | Vivian Pedrosa     | 591.931.681-91 | 2015-04-07 | F    | Aquiraz    | Estagiária TI  | 2.400   |

### ➜ ILIKE

Usado para buscar padrões específicos em colunas de texto, parecido com o ``LIKE``, mas com a diferença que não é case sensitive. 

```SQL
SELECT nomeDaColuna FROM nomeDaTabela WHERE condição ILIKE '%caractere%';
```

Aplicando isso na nossa Tabela, teriamos o seguinte resultados:

```SQL
SELECT * FROM funcionarios WHERE nome ILIKE '%A';
```

| ID      | Nome               | CPF            | DataNasc   | Sexo | Cidade     | Cargo          | Salario |
| ------- | ------------------ | -------------- | ---------- | ---- | ---------- | -------------- | ------- |
| 2025011 | Lucas Alcantara    | 123.957.321-87 | 2005-06-28 | M    | Fortaleza  | CEO            | N/A     |
| 2025012 | Vitoria Pedrosa    | 231.574.958-14 | 2005-08-24 | F    | Fortaleza  | CFO            | N/A     |
| 2025022 | Claubia Mesquita   | 157.987.546-32 | 1984-11-21 | F    | Sobral     | Diretora de SG | 16.200  |
| 2025023 | Felipe Paiva       | 684.315.984-73 | 1993-04-12 | M    | Curitiba   | Diretor de TI  | 23.700  |
| 2025031 | Cleylton Alcantara | 315.753.391-61 | 1987-05-30 | M    | São Paulo  | Tech-Lead TI   | 15.100  | 
| 2025032 | Vivian Pedrosa     | 591.931.681-91 | 2015-04-07 | F    | Aquiraz    | Estagiária TI  | 2.400   |

### ➜ NOT LIKE

Retorna registros que não correspondem ao padrão especificado. Ou seja, serve para declarar que tipo de padrão você não quer que seja retornada.

```SQL
SELECT nomeDaColuna FROM funcionarios WHERE cargo NOT LIKE '%caractere%';
```

Aplicando isso na nossa Tabela, teriamos o seguinte resultados:

```SQL
SELECT * FROM funcionarios WHERE nome NOT LIKE '%TI%';
```

| ID      | Nome               | CPF            | DataNasc   | Sexo | Cidade     | Cargo          | Salario |
| ------- | ------------------ | -------------- | ---------- | ---- | ---------- | -------------- | ------- |
| 2025023 | Felipe Paiva       | 684.315.984-73 | 1993-04-12 | M    | Curitiba   | Diretor de TI  | 23.700  |
| 2025031 | Cleylton Alcantara | 315.753.391-61 | 1987-05-30 | M    | São Paulo  | Tech-Lead TI   | 15.100  | 
| 2025032 | Vivian Pedrosa     | 591.931.681-91 | 2015-04-07 | F    | Aquiraz    | Estagiária TI  | 2.400   |
| 2025033 | Guilherme Soares   | 851.641.317-85 | 2006-10-28 | M    | Natal      | Junior TI      | 3.200   |

### ➜ IN

Verifica se o valor de uma coluna está em uma lista específica de valores.

```SQL
SELECT colunas FROM tabela WHERE coluna IN (valor1, valor2, valor3);
```

### ➜ BETWEEMN

Filtra valores dentro de um intervalo. Funciona para números, datas e até textos (com base na ordenação ASCII).

```SQL
SELECT nomeDaColuna FROM nomeDaTabela WHERE condição BETWEEN '0000-00-00' AND '0000-00-00';
```

Aplicando isso na nossa Tabela, teriamos o seguinte resultados:

```SQL
SELECT * FROM funcionarios WHERE DataNasc BETWEEN '2000-01-01' AND '2025-12-30';
```

| ID      | Nome               | CPF            | DataNasc   | Sexo | Cidade     | Cargo          | Salario |
| ------- | ------------------ | -------------- | ---------- | ---- | ---------- | -------------- | ------- |
| 2025011 | Lucas Alcantara    | 123.957.321-87 | 2005-06-28 | M    | Fortaleza  | CEO            | N/A     |
| 2025012 | Vitoria Pedrosa    | 231.574.958-14 | 2005-08-24 | F    | Fortaleza  | CFO            | N/A     |
| 2025032 | Vivian Pedrosa     | 591.931.681-91 | 2015-04-07 | F    | Aquiraz    | Estagiária TI  | 2.400   |
| 2025033 | Guilherme Soares   | 851.641.317-85 | 2006-10-28 | M    | Natal      | Junior TI      | 3.200   |
| 2025041 | Bruna Alencar      | 931.513.093-03 | 2006-07-05 | F    | Fortaleza  | Junior de RH   | 2.500   |

### ➜ NOT BETWEEN

Filtra valores fora de um intervalo, como o caso do ``BETWEEN``, mas teremos como resultado o que está fora do intervalo apresentado.

```SQL
SELECT nomeDaColuna FROM nomeDaTabela WHERE condição NOT BETWEEN '0000-00-00' AND '0000-00-00';
```

Aplicando isso na nossa Tabela, teriamos o seguinte resultados:

```SQL
SELECT * FROM funcionarios WHERE DataNasc NOT BETWEEN '2000-01-01' AND '2025-12-30';
```

| ID      | Nome               | CPF            | DataNasc   | Sexo | Cidade     | Cargo          | Salario |
| ------- | ------------------ | -------------- | ---------- | ---- | ---------- | -------------- | ------- |
| 2025021 | Mara Edwirges      | 958.478.321-98 | 1987-10-18 | F    | São Paulo  | Diretora do RH | 15.600  |
| 2025022 | Claubia Mesquita   | 157.987.546-32 | 1984-11-21 | F    | Sobral     | Diretora de SG | 16.200  |
| 2025023 | Felipe Paiva       | 684.315.984-73 | 1993-04-12 | M    | Curitiba   | Diretor de TI  | 23.700  |
| 2025031 | Cleylton Alcantara | 315.753.391-61 | 1987-05-30 | M    | São Paulo  | Tech-Lead TI   | 15.100  |

### ➜ ORDER BY

Ordena os resultados da consulta com base em uma ou mais colunas. O padrão é crescente (ASC), mas pode ser definido como decrescente (DESC).

```SQL
SELECT nomeDaTabela FROM nomeDaTabela ORDER BY condição /* DESC ou ASC */;
```

Aplicando isso na nossa Tabela, teriamos o seguinte resultados:

```SQL
SELECT * FROM funcionarios ORDER BY DataNasc DESC;
```

| ID      | Nome               | CPF            | DataNasc   | Sexo | Cidade     | Cargo          | Salario |
| ------- | ------------------ | -------------- | ---------- | ---- | ---------- | -------------- | ------- |
| 2025032 | Vivian Pedrosa     | 591.931.681-91 | 2015-04-07 | F    | Aquiraz    | Estagiária TI  | 2.400   |
| 2025033 | Guilherme Soares   | 851.641.317-85 | 2006-10-28 | M    | Natal      | Junior TI      | 3.200   |
| 2025041 | Bruna Alencar      | 931.513.093-03 | 2006-07-05 | F    | Fortaleza  | Junior de RH   | 2.500   |
| 2025012 | Vitoria Pedrosa    | 231.574.958-14 | 2005-08-24 | F    | Fortaleza  | CFO            | N/A     |
| 2025011 | Lucas Alcantara    | 123.957.321-87 | 2005-06-28 | M    | Fortaleza  | CEO            | N/A     |
| 2025031 | Cleylton Alcantara | 315.753.391-61 | 1987-05-30 | M    | São Paulo  | Tech-Lead TI   | 15.100  |
| 2025021 | Mara Edwirges      | 958.478.321-98 | 1987-10-18 | F    | São Paulo  | Diretora do RH | 15.600  |
| 2025023 | Felipe Paiva       | 684.315.984-73 | 1993-04-12 | M    | Curitiba   | Diretor de TI  | 23.700  |
| 2025022 | Claubia Mesquita   | 157.987.546-32 | 1984-11-21 | F    | Sobral     | Diretora de SG | 16.200  |

### 📍 SELECT com Chaves Estrangeiras (Foreign Key)

Entendendo os casos do ``SELECT`` trabalhando com informações mais básicas, aprenderemos como operar **Chaves Estrangeiras**, ou seja, **Foreign Key**. Para tanto, precisaremos entender métodos que utilizam de conceitos básicos da matemática para funciona, visto que, além de entender oque cada método faz e como utilizar a sintaxe certa, precisamos compreender de forma acadêmica como isso foi desenvolvido.

### ➜ INNER JOIN

O ``INNER JOIN``é um método do ``SELECT`` que visa combinar linhas de duas ou mais tabelas, baseando-se em uma condição de correspondência entre colunas relacionadas. O resultado de um ``INNER JOIN`` é um novo conjunto de resultados que contém apenas as linhas onde a condição de junção é satisfeita em ambas as tabelas, ou seja, demonstrando isso de forma gráfica utilizando os conceitos básicos de conjuntos da matemática, podemos tratar que o ``INNER JOIN`` retrata a junção de dois conjuntos, que seriam no caso as tabelas. Sua sintaxe básica a seguir:

```SQL
SELECT
-- 01. Colunas que desejamos buscar
Apelido.colunaDeBuscaTabelaA, 
Apelido.colunaDeBuscaTabelaB
FROM
-- 02. Declarando a primeira tabela que iremos buscar os dados
nomeDaTabelaA AS apelidoTabelaA (A) -- Tabela Esquerda
INNER JOIN
-- 03. Declarando a segunda tabela que iremos buscar os dados e um apelido
nomeDaTabelaB AS apelidoTabelaB (B) -- Tabela Direita
ON
-- 04. Definindo quais colunas possuem uma condição de junção
ApelidoA.colunaFK = ApelidoB.ColunaFK
```

Assim seria sua sintaxe básica e como graficamente esse junção de dados funciona é a seguinte:

<IMG>

Exemplificando como vamos tratar esses dados iremos criar uma tabela, mas não demonstrarei todos os comandos até chegar na nossa tabela ``ALUNOS`` e ``CURSOS``, só iremos apresentá-las e construir os demais comandos ``SELECT`` na manipulação de chaves estrangeiras.   

| AlunoID (PK) | AlunoNome         | CursoID (FK) |
|--------------|-------------------|--------------|
| 1            | Lucas Alencar     | 101          |
| 2            | Vitoria Pedrosa   | 102          |
| 3            | Vivian Mesquita   | 101          |
| 4            | Breno Mesquita    | 103          |
| 5            | Claubia Rodrigues | 105          |
| 6            | Valdemar Firmino  | 104          |
| 7            | Alice Silva       | 101          |
| 8            | Bruno Costa       | 102          |
| 9            | Carla Dias        | 103          |
| 10           | Daniel Lima       | 104          |
| 11           | Yelena Alcantara  |              |

| CursoID (PK) | CursoNome  |
|--------------|------------|
| 101          | JavaScript |
| 102          | Python     |
| 103          | Java       |
| 104          | C#         |
| 105          | PHP        |
| 106          | Ruby       |
| 107          | Golang     |

```SQL
SELECT
A.AlunoNome
C.CursoNome
FROM
ALUNOS AS A
INNER JOIN
CURSOS AS C
ON
A.CursoID = C.CursoID
```

Resultado: 

| AlunoNome         | CursoNome  |
|-------------------|------------|
| Lucas Alencar     | JavaScript |
| Vitoria Pedrosa   | Python     |
| Vivian Mesquita   | JavaScript |
| Breno Mesquita    | Java       |
| Claubia Rodrigues | PHP        |
| Valdemar Firmino  | C#         |
| Alice Silva       | JavaScript |
| Bruno Costa       | Python     |
| Carla Dias        | Java       |
| Daniel Lima       | C#         |

Retrataremos mais a frente no ``LEFT JOIN``, mas já podemos perceber que existiam 11 Alunos, mas uma não estava matriculada em nenhum curso, portanto não apareceu no nosso SELECT.

### ➜ LEFT JOIN

O método ``LEFT JOIN`` do ``SELECT``, que trabalha igualmente como a ``INNER JOIN``, na manipulação e junção de tabelas que estão ligadas por meio de uma **FK**, serve mais especificamente para retornar todas as linhas da tabela "esquerda" (a primeira tabela listada na cláusula ``FROM`` ou antes do ``LEFT JOIN``) e as linhas correspondentes da tabela "direita" (a segunda tabela listada após o ``LEFT JOIN``). A diferença crucial para o INNER JOIN é: se não houver correspondência para uma linha da tabela esquerda na tabela direita, a linha da tabela esquerda será incluída no conjunto de resultados, e as colunas da tabela direita correspondentes terão valores **NULL**. Além do mais sua sintaxe básica é igual a do ``INNER JOIN``, só mudaremos o método, ou seja:

```SQL
SELECT
-- 01. Colunas que desejamos buscar
Apelido.colunaDeBuscaTabelaA, 
Apelido.colunaDeBuscaTabelaB
FROM
-- 02. Declarando a primeira tabela que iremos buscar os dados
nomeDaTabelaA AS apelidoTabelaA (A) -- Tabela Esquerda
LEFT JOIN
-- 03. Declarando a segunda tabela que iremos buscar os dados e um apelido
nomeDaTabelaB AS apelidoTabelaB (B) -- Tabela Direita
ON
-- 04. Definindo quais colunas possuem uma condição de junção
ApelidoA.colunaFK = ApelidoB.ColunaFK
```

Exemplificando de forma prática, podemos retratar novamente aquela tabela que criamos e aplicarmos um ``SELECT`` com o método ``LEFT JOIN``.

```SQL
SELECT
    A.AlunoNome,
    C.CursoNome
FROM
    ALUNOS AS A
LEFT JOIN
    CURSO AS C
ON
    A.CursoID = C.CursoID;
```

| AlunoNome         | CursoNome  |
|-------------------|------------|
| Lucas Alencar     | JavaScript |
| Vitoria Pedrosa   | Python     |
| Vivian Mesquita   | JavaScript |
| Breno Mesquita    | Java       |
| Claubia Rodrigues | PHP        |
| Valdemar Firmino  | C#         |
| Alice Silva       | JavaScript |
| Bruno Costa       | Python     |
| Carla Dias        | Java       |
| Daniel Lima       | C#         |
| Yelena Alcantara  | **NULL**   |

Teremos agora retratando todos os dados de junção da tabela esquerda, ou seja, uma aluna que não esta matriculada até o momento em nenhum curso, irá ser apresentada com o valor **null**.

### ➜ RIGHT JOIN

O método ``RIGHT JOIN`` do ``SELECT``  é uma operação de junção que retorna todas as linhas da tabela "direita" (a segunda tabela listada após a cláusula ``RIGHT JOIN``) e as linhas correspondentes da tabela "esquerda" (a primeira tabela listada na cláusula FROM ou antes do ``RIGHT JOIN``). Assim como no ``LEFT JOIN``, a regra é: se não houver correspondência para uma linha da tabela direita na tabela esquerda, a linha da tabela direita será incluída no conjunto de resultados, e as colunas da tabela esquerda correspondentes terão valores NULL. Sua sintaxe é igualmente a suas anteriores, só alterando o método do ``SELECT``.

```SQL
SELECT
-- 01. Colunas que desejamos buscar
Apelido.colunaDeBuscaTabelaA, 
Apelido.colunaDeBuscaTabelaB
FROM
-- 02. Declarando a primeira tabela que iremos buscar os dados
nomeDaTabelaA AS apelidoTabelaA (A) -- Tabela Esquerda
RIGHT JOIN
-- 03. Declarando a segunda tabela que iremos buscar os dados e um apelido
nomeDaTabelaB AS apelidoTabelaB (B) -- Tabela Direita
ON
-- 04. Definindo quais colunas possuem uma condição de junção
ApelidoA.colunaFK = ApelidoB.ColunaFK
```

Exemplificando utilizaremos ainda a tabela que construimos no ``INNER JOIN``.

```SQL
SELECT
    A.AlunoNome,
    C.CursoNome
FROM
    ALUNOS AS A
RIGHT JOIN
    CURSO AS C
ON
    A.CursoID = C.CursoID;
```

| AlunoNome         | CursoNome  |
|-------------------|------------|
| Lucas Alencar     | JavaScript |
| Vitoria Pedrosa   | Python     |
| Vivian Mesquita   | JavaScript |
| Breno Mesquita    | Java       |
| Claubia Rodrigues | PHP        |
| Valdemar Firmino  | C#         |
| Alice Silva       | JavaScript |
| Bruno Costa       | Python     |
| Carla Dias        | Java       |
| Daniel Lima       | C#         |
| **NULL**          | Ruby       |
| **NULL**          | GoLang     |

### ➜ FULL JOIN

O método do ``SELECT`` ``FULL JOIN``é a operação de junção mais abrangente. Ele retorna todas as linhas de ambas as tabelas que estão sendo unidas, ou seja, tanto da tabela "esquerda" quanto da tabela "direita", independentemente de haver ou não uma correspondência na outra tabela, assim, retornando a soma de todos os conjuntos tabelas. Sua sintaxe é indiferente das anteriores, ou seja, se constitui a partir da seguinte sintaxe:

```SQL
SELECT 
-- 01. Colunas que desejamos buscar
Apelido.colunaDeBuscaTabelaA, 
Apelido.colunaDeBuscaTabelaB
FROM
-- 02. Declarando a primeira tabela que iremos buscar os dados
nomeDaTabelaA AS apelidoTabelaA (A) -- Tabela Esquerda
LEFT JOIN
-- 03. Declarando a segunda tabela que iremos buscar os dados e um apelido
nomeDaTabelaB AS apelidoTabelaB (B) -- Tabela Direita
ON
-- 04. Definindo quais colunas possuem uma condição de junção
ApelidoA.colunaFK = ApelidoB.ColunaFK
```

Exemplificando, novamente utilizaremos as tabelas utilziada anteriormente:

```SQL
SELECT
    A.AlunoNome,
    C.CursoNome
FROM
    ALUNOS AS A
FULL OUTER JOIN
    CURSO AS C
ON
    A.CursoID = C.CursoID;
```

| AlunoNome         | CursoNome  |
|-------------------|------------|
| Lucas Alencar     | JavaScript |
| Vitoria Pedrosa   | Python     |
| Vivian Mesquita   | JavaScript |
| Breno Mesquita    | Java       |
| Claubia Rodrigues | PHP        |
| Valdemar Firmino  | C#         |
| Alice Silva       | JavaScript |
| Bruno Costa       | Python     |
| Carla Dias        | Java       |
| Daniel Lima       | C#         |
| Yelena Alcantara  | **NULL**   |
| **NULL**          | Ruby       |
| **NULL**          | GoLang     |

### ➜ CROSS JOIN

O ``CROSS JOIN`` é a operação que realiza o produto cartesiano de duas tabelas. Ele combina cada linha da primeira tabela com cada linha da segunda tabela, resultando em um conjunto de resultados que contém todas as combinações possíveis de linhas entre as duas tabelas, sem nenhuma condição de junção. Sua sintaxe é um pouco diferente dos outros métodos, portanto, apresentaremos de forma detalhada a seguir:

```SQL
SELECT 
-- 01. Colunas que desejamos buscar
Apelido.colunaDeBuscaTabelaA, 
Apelido.colunaDeBuscaTabelaB
FROM
-- 02. Declarando a primeira tabela que iremos buscar os dados
nomeDaTabelaA AS apelidoTabelaA (A) -- Tabela Esquerda
CROSS JOIN
-- 03. Declarando a segunda tabela que iremos buscar os dados e um apelido
nomeDaTabelaB AS apelidoTabelaB (B); -- Tabela Direita
```

Exemplificando o ``CROSS JOIN`` manipulando nossas tabelas criando um produto cartesiano de ambos, teriamos o seguinte resultado:


```SQL
SELECT
    A.AlunoID,
    A.AlunoNome,
    C.CursoID,
    C.CursoNome
FROM
    ALUNOS AS A
CROSS JOIN
    CURSO AS C;
```

| AlunoID | AlunoNome         | CursoID | CursoNome  |
|---------|-------------------|---------|------------|
| 1       | Lucas Alencar     | 101     | JavaScript |
| 1       | Lucas Alencar     | 102     | Python     |
| 1       | Lucas Alencar     | 103     | Java       |
| 1       | Lucas Alencar     | 104     | C#         |
| 1       | Lucas Alencar     | 105     | PHP        |
| 1       | Lucas Alencar     | 106     | Ruby       |
| 1       | Lucas Alencar     | 107     | GoLang     |
| 2       | Vitoria Pedrosa   | 101     | JavaScript |
| 2       | Vitoria Pedrosa   | 102     | Python     |
| 2       | Vitoria Pedrosa   | 103     | Java       |
| 2       | Vitoria Pedrosa   | 104     | C#         |
| 2       | Vitoria Pedrosa   | 105     | PHP        |
| 2       | Vitoria Pedrosa   | 106     | Ruby       |
| 2       | Vitoria Pedrosa   | 107     | GoLang     |
| 3       | Vivian Mesquita   | 101     | JavaScript |
| 3       | Vivian Mesquita   | 102     | Python     |
| 3       | Vivian Mesquita   | 103     | Java       |
| 3       | Vivian Mesquita   | 104     | C#         |
| 3       | Vivian Mesquita   | 105     | PHP        |
| 3       | Vivian Mesquita   | 106     | Ruby       |
| 3       | Vivian Mesquita   | 107     | GoLang     |
| 4       | Breno Mesquita    | 101     | JavaScript |
| 4       | Breno Mesquita    | 102     | Python     |
| 4       | Breno Mesquita    | 103     | Java       |
| 4       | Breno Mesquita    | 104     | C#         |
| 4       | Breno Mesquita    | 105     | PHP        |
| 4       | Breno Mesquita    | 106     | Ruby       |
| 4       | Breno Mesquita    | 107     | GoLang     |
| 5       | Claubia Rodrigues | 101     | JavaScript |
| 5       | Claubia Rodrigues | 102     | Python     |
| 5       | Claubia Rodrigues | 103     | Java       |
| 5       | Claubia Rodrigues | 104     | C#         |
| 5       | Claubia Rodrigues | 105     | PHP        |
| 5       | Claubia Rodrigues | 106     | Ruby       |
| 5       | Claubia Rodrigues | 107     | GoLang     |
| 6       | Valdemar Firmino  | 101     | JavaScript |
| 6       | Valdemar Firmino  | 102     | Python     |
| 6       | Valdemar Firmino  | 103     | Java       |
| 6       | Valdemar Firmino  | 104     | C#         |
| 6       | Valdemar Firmino  | 105     | PHP        |
| 6       | Valdemar Firmino  | 106     | Ruby       |
| 6       | Valdemar Firmino  | 107     | GoLang     |
| 7       | Alice Silva       | 101     | JavaScript |
| 7       | Alice Silva       | 102     | Python     |
| 7       | Alice Silva       | 103     | Java       |
| 7       | Alice Silva       | 104     | C#         |
| 7       | Alice Silva       | 105     | PHP        |
| 7       | Alice Silva       | 106     | Ruby       |
| 7       | Alice Silva       | 107     | GoLang     |
| 8       | Bruno Costa       | 101     | JavaScript |
| 8       | Bruno Costa       | 102     | Python     |
| 8       | Bruno Costa       | 103     | Java       |
| 8       | Bruno Costa       | 104     | C#         |
| 8       | Bruno Costa       | 105     | PHP        |
| 8       | Bruno Costa       | 106     | Ruby       |
| 8       | Bruno Costa       | 107     | GoLang     |
| 9       | Carla Dias        | 101     | JavaScript |
| 9       | Carla Dias        | 102     | Python     |
| 9       | Carla Dias        | 103     | Java       |
| 9       | Carla Dias        | 104     | C#         |
| 9       | Carla Dias        | 105     | PHP        |
| 9       | Carla Dias        | 106     | Ruby       |
| 9       | Carla Dias        | 107     | GoLang     |
| 10      | Daniel Lima       | 101     | JavaScript |
| 10      | Daniel Lima       | 102     | Python     |
| 10      | Daniel Lima       | 103     | Java       |
| 10      | Daniel Lima       | 104     | C#         |
| 10      | Daniel Lima       | 105     | PHP        |
| 10      | Daniel Lima       | 106     | Ruby       |
| 10      | Daniel Lima       | 107     | GoLang     |
| 11      | Yelena Alcantara  | 101     | JavaScript |
| 11      | Yelena Alcantara  | 102     | Python     |
| 11      | Yelena Alcantara  | 103     | Java       |
| 11      | Yelena Alcantara  | 104     | C#         |
| 11      | Yelena Alcantara  | 105     | PHP        |
| 11      | Yelena Alcantara  | 106     | Ruby       |
| 11      | Yelena Alcantara  | 107     | GoLang     |

Ficou muito extenso, mas queriamos trazer o resultado final do ``CROSS JOIN`` para demonstrar como de fato funciona seu método.

### 📍 Funções de Agrupamento

### ➜ AVG: Calcula a média dos valores de uma coluna numérica.

```SQL
SELECT AVG(condição) FROM nomeDaTabela;
```

### ➜ MIN: Retorna o menor valor em uma coluna.

```SQL
SELECT MIN(condição) FROM nomeDaTabela;
```

### ➜ MAX: Retorna o maior valor em uma coluna.

```SQL
SELECT MAX(condição) FROM nomeDaTabela;
```

### ➜ SUM: Retorna a soma dos valores de uma coluna numérica.

```SQL
SELECT SUM(condição) FROM nomeDaTabela;
```

### ➜ COUNT: Retorna o número de linhas em um grupo ou tabela.

```SQL
SELECT COUNT(condição) FROM nomeDaTabela;
```

