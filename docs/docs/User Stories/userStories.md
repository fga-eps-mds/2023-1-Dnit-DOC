# User Stories
## Semana 1
**Funcionalidade:** Login

**User Storie:** Como usuário, eu gostaria de fazer login no aplicativo para poder acessar as funcionalidades personalizadas e as informações da minha conta.

**Critérios de aceitação:**
- A tela de login deve conter os campos de email e senha.

- O sistema deve validar se o email e senha inseridos são válidos e correspondem a um usuário existente no sistema.

- Se o email e senha forem válidos, o sistema deve redirecionar o usuário para a página principal do sistema.

- Se o email e/ou senha forem inválidos, o sistema deve exibir uma mensagem de erro indicando que as credenciais estão incorretas.

## **Funcionalidade:** Cadastro

**User Storie:** Como um usuário não registrado, eu gostaria de criar uma conta para poder acessar as funcionalidades do aplicativo.

**Critérios de aceitação:**
- A página de cadastro deve incluir campos obrigatórios para nome de usuário, endereço de e-mail e senha; REVISITAR

- O endereço de e-mail deve ser válido e único, não podendo ser usado por mais de uma conta;

- O usuário deve ser capaz de fazer login após o cadastro usando o nome de usuário e senha informados;

## **Funcionalidade:** Cadastro

**User Storie:** Como um usuário não registrado, eu gostaria de criar uma conta para poder acessar as funcionalidades do aplicativo.

**Critérios de aceitação:**
- A página de cadastro deve incluir campos obrigatórios para nome de usuário, endereço de e-mail e senha; REVISITAR

- O endereço de e-mail deve ser válido e único, não podendo ser usado por mais de uma conta;

- O usuário deve ser capaz de fazer login após o cadastro usando o nome de usuário e senha informados;

## **Funcionalidade:** Importar dados das escolas de outros DBs

**User Storie:** Eu como usuário do sistema, quero receber dados das escolas de outras bases de dados, para que eu possa me informar sobre os dados das escolas.

**Critérios de aceitação:**
- Os dados das escolas devem vir da base de dados do INEP (mesma do Conexão DNIT)

# Semana 2

## **Funcionalidade:** Análise de prioridade das escolas

**User Storie:** Eu como usuário do sistema, quero que o sistema faça uma ranking das escolas de acordo com sua prioridade, para que eu possa analisar essa lista de escolas priorizadas e tomar decisões.

**Critérios de aceitação:**
- As escolas devem ser priorizadas com base no cálculo de UPS e (mais alguma coisa que não lembro)

- A escola mais prioritária deve estar em primeiro lugar no ranking, a segunda em segundo e assim por diante.

## **Funcionalidade:** Cálculo de UPS

**Observação:** Talvez esse seja um Requisito Não Funcional, não penso em nenhuma user storie aqui… 

## **Funcionalidade:** Formulário de solicitação para escolas

**User Storie:** Como funcionário de uma escola, quero ser capaz de solicitar uma visita de educação de trânsito através de um formulário, para que meus alunos possam aprender sobre as leis e práticas seguras de trânsito.

**Critérios de aceitação:**
- O formulário de solicitação deve ser acessível através de um link.

- O formulário deve incluir campos para o nome da escola, endereço, telefone, e-mail de contato do diretor responsável e motivo da solicitação.

- O formulário deve incluir um campo para informar o número de alunos que participarão da visita.

- O formulário deve incluir um campo para informar a idade dos alunos que participarão da visita.

- Após o preenchimento do formulário, o funcionário da escola deve receber uma confirmação por e-mail de que sua solicitação foi recebida.

- A equipe responsável pela educação de trânsito deve receber uma notificação por e-mail da nova solicitação, incluindo as informações fornecidas pelo diretor.

- As informações da visita devem ser armazenadas no sistema e estar disponíveis para consulta posterior.
