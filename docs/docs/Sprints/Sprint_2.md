| Versão | Data   | Modificação                                                            | Autor        |
| -- | ---------- | ----------------------------------------------------------------------------- | --------------------- |
| 1.0 | 26/05/2023 | Criação do documento | Antônio Neto |
| 1.1 | 04/06/2023 | Revisão do documento e adicionando versionamento | Yan Andrade de Sena |
# Sprint 2

Período: 22/05/2023 a 26/05/2023

# Débito técnico

Em relação a **US01** e a **US04**, ficou pendentes os seguintes pontos que entraram para a Sprint 2:

- Tratamento de erros no Back-end - Yan Andrade
- Tratamento de erros no Front-end - Felipe e Antonio
- Integração do Front-end com o Back-end - Isadora e Jonga
- Ajustar alguns pontos na tela de cadastro para ficar de acordo com o protótipo - Artur, Pedro e Antonio
- Testes unitários e de integração - Denys, Lucas e Isadora
<<<<<<< HEAD
- Criptografia de senha - Denys e Lucas


Sobre as outras atividades, tivemos os seguintes débitos técnicos:

- Finalizar ROADMAP - EPS
- Refinar Backlog - EPS
- Finalizar o MER na modelagem de dados - Antonio
- Grafico de Gantt - Antonio e Isadora
- Graficos e planilhas: Risco - Lucas
- Graficos e planilhas: Qualidade - Denys
- Finalização da pipeline do sonarcloud - Isadora e Yan Andrade

# Planning

## Backlog da Sprint

|Nº da US| User Storie |
|---|---|
| US02 | Eu, como funcionário de empresa tercerizada, gostaria de poder fazer cadastro no sistema para poder ter acesso às funcionalidades do sistema |
| US05 | Eu, como usuário do sistema, gostaria de poder recuperar minha senha para poder acessar o sistema novamente |

### User Storie 2

Critérios de aceitação:

- O sistema deve ter uma página de cadastro que permita ao usuário inserir informações pessoais como nome, empresa, endereço de e-mail e senha.
- O sistema deve validar o endereço de e-mail para verificar se está em um formato válido.
- O sistema deve fornecer feedback claro e preciso caso o cadastro não possa ser concluído devido a algum erro ou informação incorreta fornecida pelo usuário.
- O sistema deve validar a senha e realizar a encriptografia


| Tarefa | _Definition of Done_ | Responsáveis |
|--|--|--|
| Protótipo de alta fidelidade | 1 - Link do figma disponível para visualização | Guilherme e Arthur |
| Tela de cadastro de func. terceirizada (Front-end) | 1 - Deve estar de acordo com o protótipo de alta fidelidade | Miguel, Yan e Isadora |
|Implementação de Cadastro de func. de empresa terceirizada (Back-end) | 1 - Validação dos dados recebidos, 2 - Print do Swagger com endpoint | Ricardo, Pedro e Denys |
| Criação de tabelas no banco de dados | 1-Criação tabela no banco da dados para func. terceirizada, 2-Tabela de empresa no banco de dados e 3-Criação da tabela de relacionamento func-empresa | Carol, Leticia e João Gabriel |
| Criptografia de senha | 1 - Print da criptografia de senha | Denys e Lucas |

### User Storie 5

Critérios de aceitação:

- O sistema deve fornecer uma opção para recuperação de senha na tela de login, que permita ao funcionário redefinir sua senha.
- Ao clicar na opção de recuperação de senha, o sistema deve solicitar ao funcionário que insira o endereço de e-mail registrado no sistema.
- O sistema deve validar as informações inseridas pelo funcionário e exibir uma mensagem de erro se as informações forem inválidas ou não puderem ser verificadas.
- O sistema deve enviar um e-mail com um link para redefinição de senha para o endereço de e-mail registrado do funcionário.
- O link de redefinição de senha deve direcionar o funcionário para uma página segura onde ele possa redefinir sua senha.
- A página de redefinição de senha deve solicitar ao funcionário que insira uma nova senha e que confirme a nova senha.

| Tarefa | _Definition of Done_ | Responsáveis |
|--|--|--|
| Protótipo de alta (das duas telas referentes a recuperação de senha) | 1 - Link do figma disponível para visualização | Guilherme, Arthur e Felipe |
| Tela de esqueci minha senha com campo para colocar email (Front-end) | 1 - Deve estar de acordo com o protótipo de alta fidelidade | Carol e Julia |
| Tela para troca de senha (Front-end) | 1 - Deve estar de acordo com o protótipo de alta fidelidade | Leticia e Pedro |
|Implementação de redefinição de senha (Back-end) | 1-Verificar se o email ta no banco, 2-Gerar um link de redefinição, 3-Mandar no email inserido e 4-Atualizar senha do usuário com nova senha | Ricardo e Pedro |

# Review

### User Storie 2

| Tarefa | Status |
|--|--|
| Protótipo de alta fidelidade | Feito |
| Tela de cadastro de func. terceirizada (Front-end) | Feito |
| Implementação de Cadastro de func. de empresa terceirizada (Back-end) | Feito |
| Criação de tabelas no banco de dados | Feito |
| Criptografia de senha | Feito |

### User Storie 5

| Tarefa | Status |
|--|--|
| Protótipo de alta (das duas telas referentes a recuperação de senha) | Feito |
| Tela de esqueci minha senha com campo para colocar email (Front-end) | ? |
| Tela para troca de senha (Front-end) | ? |
| Implementação de redefinição de senha (Back-end) | ? |

# Retrospectiva

A retrospectiva da Sprint 2 foi feita através de uma planilha compartilhada por todos os integrantes, na qual colocava-se os pontos positivos, negativos e pontos a melhorar em relação a Sprint em questão. Também foram colocados os pontos que conseguimos melhorara a partir da Sprint passada.

<iframe width="700" height="450" src="https://docs.google.com/spreadsheets/d/e/2PACX-1vRQEnsKWDXz5-JGMax2e1ARVivZXLXWykd5tLpDkFRChHly0l5dTAL8zTBqBe2QQuXhi7bCs6z4zii6/pubhtml?gid=718670246&amp;single=true&amp;widget=true&amp;headers=false"></iframe>

