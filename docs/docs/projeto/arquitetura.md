# Documento de Arquitetura

## Versionamento
| Versão | Data | Modificação | Autor |
|--|--|--|--|
|1.0| 26/05/2023 | Criação do documento | Lucas Rodrigues |

## Introdução
Este documento tem como objetivo detalhar a arquitetura do projeto, fornecendo uma visão geral da arquitetura e dos dados. Além disso são descritas as tecnologias utilizadas para o desenvolvimento.

## Tecnologias

### PostgreSQL
O PostgreSQL é um SGBD objeto-relacional que suporta grande parte do padrão SQL e disponibiliza recursos modernos, como chaves estrangeiras, triggers e consultas complexas. Uma de suas principais vantagens é o fato de ser uma ferramenta de código aberto que pode ser usada para fins privados, comerciais e acadêmicos.

### .NET
O ASP.NET, utilizado para o back-end da aplicação, é um framework de código aberto que permite a criação de serviços usando .NET e C#. É um framework rápido, escalonável e seguro, que possui recursos internos de proteção contra ameaças de segurança. Além disso, o fato da instituição cliente já estar familiarizada com .NET foi determinante para a escolha dessa tecnologia, a fim de facilitar a futura manutenção do software.

### xUnit
Para os testes do back-end foi escolhido o xUnit, uma ferramenta gratuita de código aberto com foco em testes unitários para aplicações .NET. É muito utilizada por ser simples, extensível e compatível com ferramentas de execução de teste.

### React
O React é uma biblioteca Javascript altamente flexível que permite a construção de interfaces de usuário interativas e responsivas. A construção das aplicações é feita por meio de componentes que possibilitam uma alta reutilização de código.

### Jest
Para os testes do front-end será usado o Jest, um framework de testes em Javascript simples, rápido e seguro. Permite escrever testes com uma API acessível, bem documentada e forncece relatórios de cobertura de código.

## Visão Geral
A arquitetura organizada em microsserviços permite a construção da aplicação separando serviços independentes que podem comunicar entre si por meio de APIs. Isso permite que os domínios sejam definidos de forma mais clara, permite uma maior escalabilidade, além de facilitar a manutenção e evolução do software.

A arquitetura do projeto consiste no front-end e 3 microsserviços no back-end, sendo o primeiro para a gestão dos usuários, o segundo para a gestão das escolas e o terceiro para lidar com a agenda de treinamentos realizados pelo DNIT. Além disso, o front-end em React faz a interface com o usuário.

![Diagrama de Arquitetura](../assets/arquitetura/diagramaDeArquitetura.png)

### Front-end
Responsável por fornecer a interface com o usuário.

### Usuários
Este microsserviço é reponsável pelo gerenciamento dos usuários cadastrados, tanto funcionários do DNIT quanto de empresas executoras.

### Escolas
Este microsserviço é reponsável pelo gerenciamento das escolas cadastrados e pela priorização dessas escolas.

### Treinamentos
Este microsserviço é responsável pelo gerenciamento da agenda/cronograma de visitas.


## Referências

ASP.NET. Disponível em: https://dotnet.microsoft.com/pt-br/apps/aspnet. Acesso em: 26 mai. 2023.

Geekhunter. O que são microsserviços e como funcionam?. Disponível em: https://blog.geekhunter.com.br/arquitetura-de-microsservicos-x-arquitetura-monolitica/. Acesso em: 26 mai. 2023.

Icaro Tech. O crescimento dos Microsserviços e a importância das APIs. Disponível em: https://icarotech.com/blog/o-crescimento-dos-microsservicos-e-a-importancia-das-apis/. Acesso em: 26 mai. 2023.

Jest. Disponível em: https://jestjs.io/pt-BR/. Acesso em: 26 mai. 2023.

PostgreSQL. Disponível em: https://www.postgresql.org/. Acesso em: 26 mai. 2023.

React. Disponível em: https://react.dev/. Acesso em: 26 mai. 2023.

xUnit. Disponível em: https://xunit.net/. Acesso em: 26 mai. 2023.
