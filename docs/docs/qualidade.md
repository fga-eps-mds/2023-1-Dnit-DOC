## Introdução

A qualidade de software diz respeito à capacidade de um software satisfazer as necessidades e expectativas dos usuários, apresentando código confiável e de fácil manutenção. Neste documento, são apresentadas as ferramentas utilizadas para garantir a qualidade do projeto durante o seu desenvolvimento, além da análise de métricas para estabelecer critérios de qualidade. Diretrizes reconhecidas, como a ISO/IEC 25000 (SQuaRE) e a ISO/IEC 25010, oferecem orientações abrangentes para avaliar a qualidade em diversas áreas, como funcionalidade, confiabilidade, usabilidade, eficiência, segurança, manutenibilidade e portabilidade. Esses critérios são essenciais para melhorar a qualidade do software e proporcionar uma experiência positiva aos usuários.

## Ferramentas

### SonarCloud

O SonarCloud é uma ferramenta amplamente empregada para coletar métricas e indicadores técnicos, permitindo o monitoramento da qualidade do código. Durante o desenvolvimento do projeto, métricas foram capturadas após cada Pull Request submetido. Essas métricas foram combinadas para calcular os aspectos relevantes de qualidade do código, com foco na confiabilidade e manutenibilidade. Esses dados são cruciais para orientar o planejamento de melhorias contínuas, visando garantir um código confiável e de fácil manutenção.

### Testes Unitários

Os testes unitários são testes automatizados cujo objetivo é verificar o desempenho de partes isoladas de código em um sistema maior.

#### Jest 

A equipe utilizou o Jest no frontend, uma ferramenta de código aberto, para realizar esses testes de forma simples e conveniente em aplicações JavaScript m Typescript.



### ESLint

O ESLint é uma ferramenta muito utilizada para fazer a verificação e análise estática de código JavaScript. Ela ajuda os desenvolvedores a garantir a qualidade do código, ao encontrar e relatar possíveis problemas, erros ou práticas inadequadas de programação. O ESLint disponibiliza várias regras configuráveis, que podem ser personalizadas de acordo com as necessidades do projeto, permitindo a aplicação de padrões de codificação consistentes e melhorando a legibilidade, a manutenibilidade e a interoperabilidade do código-fonte.




## Histórico de versão 

| Data       | Versão | Modificação                     | Autor         |
| :--------- | :----- | :------------------------------ | :-----------  |
| 09/07/2023 | 1.0    | Abertura do documento.          | João Gabriel de Matos |
