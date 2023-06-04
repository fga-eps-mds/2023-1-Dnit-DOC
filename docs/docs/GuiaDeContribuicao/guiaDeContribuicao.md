# Guia de Contribuição
## Versionamento
| Versão | Data | Modificação | Autor |
|--|--|--|--|
|1.0| 12/05/2023| Criação do Guia de Contribuição | Yan Andrade |
|1.1| 04/06/2023 | revisão do documento | Felipe e Yan Andrade |

## Introdução

Este código de conduta estabelece diretrizes e expectativas para o comportamento dos membros do grupo, incluindo estudantes, professores, tutores e colaboradores. A elaboração desse código de conduta é uma forma de garantir que todos os membros sejam tratados de forma justa e igualitária, sem discriminação ou preconceito.

## Respeito e Inclusão

Nós valorizamos e respeitamos a diversidade de experiências, perspectivas e opiniões de todas as pessoas envolvidas no projeto. Não toleramos qualaquer forma de discriminação, assédio ou comportamento abusivo em relação à raça, gênero, orientação sexual, idade, habilidade físicas ou mentais, religião ou qualquer outra característica pessoal.

Nós nos comprometemos a criar um ambiente seguro e inclusivo para todas as pessoas, onde elas possam se sentir confortáveis em compartilhar suas ideias, colaborar e se desenvolver.

## Comunicação

Nós nos comunicamos de forma clara, respeitosa e colaborativa. Escutamos ativamente e consideramos as ideias e opiniões dos outros membros do grupo. Não usamos linguagem ou comportamentos ofensivos, sarcásticos ou condescendentes.

## Responsabilidade e Transparências

Nós somos responsáveis por nossas ações e decisões. Fazemos o nosso melhor para cumprir com as nossas obrigações e prazos e, quando necessário, pedimos ajuda ou apoio.

Nós mantemos uma comunicação transparente e honesta sobre o progresso do projeto, os desafios que enfrentamos e as soluções que estamos buscando.

## Medidas de violação do código de conduta

Se qualquer membro do grupo violar o código de conduta, será tomada uma ação apropriada. Os membros que testemunharem uma violação do código de conduta podem reportar o incidente de forma confidencial e segura para um dos organizadores do grupo, que irá investigar e tomar as medidas necessárias.

As violações do código de conduta podem resultar em medidas disciplinares, incluindo a expulsão do grupo.



## Políticas de branches

Repositórios de **desenvolvimento**

Nos repositórios do código do projeto temos uma branch principal, a **main**.

A branch **main** é a branch mais estável do projeto, que estará publicada em produção. Essa branch é protegida de commits e para o desenvolvimento de novas funcionalidades, deve-se criar uma nova branch à partir da **main**, desenvolver a funcionalidade, testar e logo em seguida abrir o Pull Request (PR).

### **NOVAS BRANCHES**
As branches para o desenvolvimento de novas funcionalidades devem ser criadas a partir da branch **main** e devem seguir o padrão x-nome-da-issue, onde x é o número da issue que será desenvolvida na branch, acompanhado pelo nome da issue.

Repositório de **documentação**

No repositório de documentação na **gh-pages** está o código da página de documentação do github pages. A branch **main** está protegida e só deve aceitar modificações por Pull Requests.

As novas branches, assim como nos repositórios de desenvolvimento devem seguir a estrutura x-nome-da-issue.

## Políticas de issues

A criação de novas issues deverá ser realizada através do projects disponibilizado pelo próprio Github, onde temos como opções para título de branches as seguintes opções:

- [Documentação] : Dedicada para adicionar uma documentação nova no repositório de documentação; 
- [US] : Dedicada para desenvolver uma funcionalidade de uma User Story;
- [Bug] : Dedicada para correção de Bugs;
- [Hotfix]: Dedicada para solucionar um bug com grande urgência.

## Políticas de commits

Os commits deverão seguir as seguintes regras:

- A descrição de um commit deve ser escrita em Português;

- Um commit deve referenciar a issue trabalhada;

- O commit deverá ser escrito no gerúndio;

- Deverá ser bem resumido;

- Somente deve conter alterações referentes a issue do mesmo commit. 

Exemplo: Issue 1: [US-01] Cadastrar Usuário 

```
git commit -m " #1 Desevolvendo tela de login do cadastro de usuário"
```
