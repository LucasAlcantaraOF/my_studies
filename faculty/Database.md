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

<img src="./assets/images/folders.jpg">

Modelo que passava por sérios problemas, sendo os principais:

1. **Falta de Eficiência:** Era necessário muito tempo para buscar e manipular dados, além do mais, a organização não seguiam padrões, então seria de acordo com o responsável pelo setor e se caso ele não estivesse mais presente, não teria um modelo pré-definido;
2. **Falha na segurança:** Não existia um protocolo de segurança, pois qualquer pessoa presente dentro dos arquivos teria 100% de acesso a qualquer dado, sendo uma falha muito grave sobre a seguridade das informações;
3. **Brecha na Recuperação:** O índice de dados que acabavam sendo perdidos era muito alto, devido a falta de um método recuperatório.

Além de muitos outros motivos pelos quais não é recomendado o uso desse modelo de banco de dados, pelo menos agora na modernidade, e irresponsavelmente existem empresas que ainda seguem esse modelo. Entretanto, essa organização foi o alicerce para as ideias do novos bando de dados.

Então em meados dos anos 1900 até 1950 foi desenvolvido oque chamamos de **cartões perfurados**, que foi o principal meio de entrada, armazenamento e processamento de dados na computação institucional.

<img align="center" height="515" width="700" src="./assets/images/punched_cards.jpeg">

</br>

Geralmente tinham 80 coluna e cada coluna podia representar um caractere ou número, portanto, e armazenavam dados em formato binário, onde um furo indicava "1" e o outro "0", então era preciso analisar cada posição para conseguir formular um dado. Assim, os cartões eram lidos por máquinas chamadas **leitores de cartões perfurados** que usavam sensores mecânicos ou elétricos para detectar os furos, e a escrita era feita a partir da conhecida **perfuradora de cartões**, operada manualmente ou automaticamente, o operador usava um teclado para inserir os dados. Afinal, os cartões eram organizados em caixas ou gavetas e serviam como um banco de dados físico.

Com o desenvolvimento de novos métodos de armazenar dados foi criado o banco de dados de **fita magnética**, sendo um meio de armazenamento sequencial, ou seja, os dados eram gravados em sequência linear ao longo da fita, portanto, criava o acesso sequencial, que já seria considerado uma desvantagem, já que, os dados só seria mostrado seguindo até o fim da semana, portanto, caso necessário, era preciso rebobinar a fita até o ponto desejado, tornando um processo muito lento.

<img src="./assets/images/magnetic_tape.jpg">

Foi um modelo muito promissor pelo seu baixo custo, durabilidade e capacidade, mas se tornou obsoleto com a criação dos discos rígidos E SSDs, que são os modelos de armazenamentos atuais que retrataremos agora, falando sobre a coexistência dos Bancos de Dados e os Computadores.

Mas antes, que o sistema de armazenamento era feito exclusivamente por meios externos se mesclou ao computador que foi invetado na década de 1940 ao fim da segunda guerra mundial, era usado primordialmente como uma máquina para cálculos matemáticos complexos, mas logo se percebeu que, graças a arquitetura criada pelo seu inventor, John Von Neumann, baseada na unidade central de processamento que armazena programas e dados, o computador também serve para o processamento de dados e não apenas cálculos.

Então, essa utilidade do computador foi impulsionada com a invenção do **disco magnético**, **pela International Business Machines Corporation (IBM)**, em 1957, que o denominou de **Dispositivo de Armazenamento de Acesso Direto** ou que foi declarado atualmente como **Hard-Disk** ou **HD**, que apresentou novidades, à época, foi a capacidade de leitura de dados externos à unidade central de processamento de forma direta, sem a necessidade de uma leitura sequencial em fitas magnéticas, e assim, nasceu a era do processamento de dados por computadores.

--- 

### Era do Processamento de Dados por Computadores

Já ouviu falar em Centro de Processamento de Dados (CPD), denominação ainda persistente em organizações tradicionais.

<img src="./assets/images/cpd.jpeg">

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

<img src="./assets/images/types_database.png">

Depois foi desenvolvido o **Sistema Gerenciador de Banco de Dados (SGBD)** que foi acrescentado no **Sistema de Banco de Dados (SBD)** que criou a independência de dados e programas, ou seja, não seria mais necessário um código para gerenciar os dados, já que foi estabelecido um software exclusivamente para realizar essa tarefa, além de adicionar dois modelos de armazenamento de dados.

> Modelo de Rede: É uma generalização do modelo hierárquico, permitindo que um registro tenha vários "pais" e vários "filhos". Ele é representado por um grafo onde os nós são registros e as conexões (arestas) representam os relacionamentos.
>
> Modelo Hierárquico: Organiza os dados em uma estrutura de árvore, com relações entre registros que seguem uma hierarquia (ou seja, de "pai para filho").

<img height="200" width="500" src="./assets/images/network_model.png"> <img height="200" width="500" src="./assets/images/hierarchical _model.png">

### Banco de Dados Relacional

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

### NoSQL

NoSQL é uma categoria de sistemas de banco de dados que se diferencia dos bancos de dados relacionais tradicionais, surgindo a partir de todas essas mudanças tecnológicas. O termo "NoSQL" significa "Not Only SQL" (ou seja, "Não Somente SQL"), indicando que esses bancos de dados oferecem uma abordagem alternativa à organização e consulta de dados, não dependendo de tabelas e relações estruturadas. Tendo como principais pontos:

1. Modelos Flexíveis de Dados:
Diferentemente dos bancos de dados relacionais (que seguem esquemas fixos), o NoSQL é mais flexível e pode armazenar dados de diferentes formatos, como documentos JSON, pares chave-valor, grafos ou colunas.
Alta Escalabilidade:

2. Ideal para lidar com grandes volumes de dados (Big Data) e tráfego intenso, escalando horizontalmente ao adicionar mais servidores.
Desempenho Rápido:

3. Projetado para alta performance, especialmente em aplicações que exigem acesso rápido a dados.
Sem Esquema Rígido:

4. Não exige que os dados sigam uma estrutura fixa, permitindo a manipulação de informações não estruturadas ou semiestruturadas.

<img src="./assets/images/types_database_nosql.png">

---

### SGBD's

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

### Linguagem SQL
