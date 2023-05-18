# Guia de Contribuição

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

Observação: Por padrão, o caracter # define uma linha de comentário no arquivo da mensagem do commit. Para resolver este problema, use o commando:

```
git config --local core.commentChar '!'
```

Exemplo: Issue 1: [US-01] Cadastrar Usuário 

```
git commit -m " #1 Desevolvendo tela de login do cadastro de usuário"
```

### Histórico de versão

|**Data**|**Descrição**|**Autor(es)**|
|--------|-------------|--------------|
|12/05/2023| Criação do Guia de Contribuição | Yan Andrade |
|18/05/2023| Adicionando observação | Yan Andrade |