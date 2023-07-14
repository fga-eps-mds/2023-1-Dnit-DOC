## Introdução

A qualidade de software diz respeito à capacidade de um software satisfazer as necessidades e expectativas dos usuários, apresentando código confiável e de fácil manutenção. Neste documento, são apresentadas as ferramentas utilizadas para garantir a qualidade do projeto durante o seu desenvolvimento, além da análise de métricas para estabelecer critérios de qualidade.

## Ferramentas

### SonarCloud

O SonarCloud é uma ferramenta amplamente empregada para coletar métricas e indicadores técnicos, permitindo o monitoramento da qualidade do código. Durante o desenvolvimento do projeto, métricas foram capturadas após cada Pull Request submetido. Essas métricas foram combinadas para calcular os aspectos relevantes de qualidade do código, com foco na confiabilidade e manutenibilidade. Esses dados são cruciais para orientar o planejamento de melhorias contínuas, visando garantir um código confiável e de fácil manutenção.

### Testes Unitários

Os testes unitários são testes automatizados cujo objetivo é verificar o desempenho de partes isoladas de código em um sistema maior.

#### Jest

A equipe utilizou o Jest no frontend, uma ferramenta de código aberto, para realizar esses testes de forma simples e conveniente em aplicações JavaScript e Typescript.

### xUnit

Além disso, para garantir a qualidade e a robustez do sistema, a equipe também utilizou o xUnit no backend para escrever testes unitários. O xUnit é um framework de teste unitário amplamente adotado na comunidade de desenvolvimento, compatível com várias linguagens, incluindo C#, Java e Ruby.

### ESLint

O ESLint é uma ferramenta muito utilizada para fazer a verificação e análise estática de código JavaScript. Ela ajuda os desenvolvedores a garantir a qualidade do código, ao encontrar e relatar possíveis problemas, erros ou práticas inadequadas de programação. O ESLint disponibiliza várias regras configuráveis, que podem ser personalizadas de acordo com as necessidades do projeto, permitindo a aplicação de padrões de codificação consistentes e melhorando a legibilidade, a manutenibilidade e a interoperabilidade do código-fonte.

### Verificação e validação

Para garantir a qualidade do projeto, a equipe adotou as seguintes técnicas de verificação e validação:

Validações com os donos do produto: É essencial envolver os donos ou usuários do projeto na validação. Foram realizadas reuniões semanais com os POs para validar o progresso e obter feedback. Essa interação contínua ajuda a garantir que o software esteja sendo desenvolvido de acordo com as expectativas e necessidades dos stakeholders.

Inspeção contínua do código: A equipe optou por utilizar o Sonar Cloud como ferramenta de análise estática de código. Essa técnica permite obter métricas mensuráveis e identificar potenciais problemas no código-fonte. O Sonar Cloud fornece informações relevantes para a gestão da qualidade do projeto, auxiliando na tomada de decisões e na identificação de pontos que precisam ser aprimorados pela equipe.

Revisão de PRs: Foi implementada uma prática de verificação de correção de PRs. Antes de mesclar um PR no repositório principal, algum membro da equipe de EPS revisa o código, analisando a lógica, a qualidade, a conformidade com as diretrizes do projeto e identificando possíveis melhorias ou problemas. Essa verificação adicional ajuda a garantir que o código entregue esteja correto e atenda aos padrões de qualidade estabelecidos.

## Métricas de qualidade

As métricas de qualidade definidas para o software são:

| Métrica          | Descrição                                     |
| ---------------- | --------------------------------------------- |
| Bugs             | Número de problemas identificados no código   |
| Vulnerabilidades | Quantidade de vulnerabilidades detectadas     |
| Code Smell       | Indicadores de práticas inadequadas de código |
| Coverage         | Grau de cobertura dos testes no código        |
| Duplicação       | Quantidade de linhas de código duplicadas     |
| Linhas           | Total de linhas de código no projeto          |
| Security Rating  | Avaliação de segurança e vulnerabilidades     |

Através do uso de métricas, é possível identificar as subcaracterísticas relacionadas e avaliar a qualidade do produto. Essa avaliação fornece insights sobre a produtividade do projeto e influencia as decisões tomadas durante o desenvolvimento. Os valores mínimos aceitáveis para cada métrica do projeto foram estabelecidos com base nas métricas especificadas no SonarCloud.

| Métrica           | Critério                         |
| ----------------- | -------------------------------- |
| Coverage          | Pelo menos 80% de cobertura      |
| Vulnerabilities   | Classificado como "A"            |
| Bugs              | Classificado como "A"            |
| Security Hotspots | Classificado como "A"            |
| Code Smells       | Classificado como "A"            |
| Duplication       | Até 3.0% de duplicação de código |

## Histórico de versão

| Data       | Versão | Modificação                        | Autor                 |
| :--------- | :----- | :--------------------------------- | :-------------------- |
| 09/07/2023 | 1.0    | Abertura do documento.             | João Gabriel de Matos |
| 09/07/2023 | 1.1    | Adição das métricas                | João Gabriel de Matos |
| 09/07/2023 | 1.2    | Adição das verificação e validação | Isadora Soares        |
| 09/07/2023 | 1.3    | Revisão do documento | Antônio Neto        |
| 14/07/2023 | 1.4    | Ajuste no documento a partir do feedback do professor | Antônio Neto        |
