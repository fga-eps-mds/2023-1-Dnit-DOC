---
hide:
  - toc
---
# User Stories

## Requisitos Funcionais

### **Funcionalidade:** Login

**US01:** Como usuário, eu gostaria de fazer login no aplicativo para poder acessar as funcionalidades personalizadas e as informações da minha conta.

**Critérios de aceitação:**
- A tela de login deve conter os campos de email e senha.

- O sistema deve validar se o email e senha inseridos são válidos e correspondem a um usuário existente no sistema.

- Se o email e senha forem válidos, o sistema deve redirecionar o usuário para a página principal do sistema.

- Se o email e/ou senha forem inválidos, o sistema deve exibir uma mensagem de erro indicando que as credenciais estão incorretas.

### **Funcionalidade:** Cadastro

**Us02:** Como um usuário não registrado, eu gostaria de criar uma conta para poder acessar as funcionalidades do aplicativo.

**Critérios de aceitação:**
- A página de cadastro de funcionário DNIT deve incluir campos obrigatórios para nome completo, endereço de e-mail, matrícula, cargo e senha;

- O endereço de e-mail deve ser válido e único, não podendo ser usado por mais de uma conta;

- O usuário deve ser capaz de fazer login após o cadastro usando o nome de usuário e senha informados;

### **Funcionalidade:** Importar dados das escolas de outros DBs

**US03:** Eu como usuário do sistema, quero receber dados das escolas de outras bases de dados, para que eu possa me informar sobre os dados das escolas.

**Critérios de aceitação:**
- Os dados das escolas devem vir da base de dados do INEP (mesma do Conexão DNIT)

- O acesso aos dados da escola seria apenas para o usuário do DNIT

### **Funcionalidade:** Análise de prioridade das escolas

**US04:** Eu como administrador DNIT, quero que o sistema faça uma ranking das escolas de acordo com sua prioridade, para avaliar a necessidade de realizar uma ação nas escolas.

**Critérios de aceitação:**
- As escolas devem ser priorizadas com base no cálculo de UPS

- A escola mais prioritária deve estar em primeiro lugar no ranking, a segunda em segundo e assim por diante.

- O acesso a lista de escolas priorizadas seria apenas para o usuário do DNIT

- Deve haver opções de filtros (por local, por quantidade de escolas na lista)

### **Funcionalidade:** Formulário de solicitação para escolas

**US05:** Como funcionário de uma escola, quero ser capaz de solicitar uma visita de educação de trânsito através de um formulário, para que meus alunos possam aprender sobre as leis e práticas seguras de trânsito.

**Critérios de aceitação:**
- O formulário de solicitação deve ser acessível através de uma página no site.

- O formulário deve incluir campos para o nome da escola, endereço, telefone, e-mail de contato do diretor responsável e motivo da solicitação.

- O formulário deve incluir um campo para informar o número de alunos que participarão da visita.

- O formulário deve incluir um campo para informar a idade dos alunos que participarão da visita.

- Após o preenchimento do formulário, o funcionário da escola deve receber uma confirmação por e-mail de que sua solicitação foi recebida.

- A equipe DNIT deve receber uma notificação no sistema da nova solicitação, incluindo o formulário.

- As informações da visita devem ser armazenadas no sistema e estar disponíveis para consulta posterior.

### **Funcionalidade:** Validação de dados da escola

**US06:** Eu, como funcionário da escola, desejo validar os dados da minha escola, para confirmar se os dados estão corretos antes de enviar o formulário de solicitação de visita.

**Critérios de aceitação:**

- Deve ser apresentada uma tela de confirmação dos dados após o preenchimento do formulário de solicitação

- Deve haver um botão para confirmar e enviar o formulário

### **Funcionalidade:** Gerar agenda baseada em escolas priorizadas

**US07:** Eu, como diretor da sede do DNIT, gostaria de alterar as regras de priorização, para gerar agendas baseadas em diferentes prioridades.

**Critérios de aceitação:**

- Essa funcionalidade deve estar disponível apenas para o funcionário da SEDE do DNIT

- Deve ser possível adicionar/remover as regras de priorização disponíveis

- Ao alterar as regras de priorização, o sistema gera uma nova lista

**US08:** Eu, como diretor da sede do DNIT, gostaria de gerar uma agenda baseada nas escolas priorizadas, para agendar as visitas de um determinado período.

**Critérios de aceitação:**

- Essa funcionalidade deve estar disponível apenas para o funcionário da SEDE do DNIT

- Deve ser possível adicionar/remover as regras de priorização disponíveis

**US09** Eu, como diretor da sede do DNIT, gostaria de informar sobre a aprovação do cronograma, para decidir sobre o envio para a unidade responsável.

**Critérios de aceitação:**

- Após a aprovação do cronograma, gera-se uma nova solicitação de visita para cada escola no cronograma

- O cronograma deve ser exibido ao usuário da sede DNIT para ser feita a aprovação

- Essa funcionalidade deve estar disponível apenas para o funcionário da SEDE do DNIT

### **Funcionalidade:** Solicitar agendamento para a escola

**US10:** Eu, como administrador do DNIT, gostaria de solicitar uma visita à uma escola, para notificar a escola sobre o interesse na realização de uma ação.

**Critérios de aceitação:**

- Deve haver um botão para enviar a solicitação.

- A solicitação deve ser enviada por email para a escola.

- O administrador deve ser capaz de adicionar informações sobre a ação de educação de trânsito que será realizada durante a visita.

- O sistema deve permitir que o administrador especifique a data e horário desejados para a visita.


**US11:** Eu, como administrador do DNIT, desejo receber um email com a decisão da escola sobre a visita, para ser notificado sobre a decisão da escola.

**Critérios de aceitação:**

- O sistema deve permitir que o administrador acompanhe o status da solicitação (pendente, confirmada, cancelada, etc.).

- O e-mail deve conter as informações relevantes, como nome da escola, data da visita solicitada, decisão da escola e qualquer outro detalhe relevante.

**US12:** Eu, como funcionário da escola, gostaria de receber um email quando uma visita for solicitada à minha escola, para que seja notificado da necessidade de uma ação.

**Critérios de aceitação:**

- No email deve haver o link direcionando para maiores informações sobre o projeto no sistema Educa-DNIT

**US13:** Eu, como funcionário da escola, gostaria de confirmar ou recusar a realização de uma ação na minha escola, para informar o DNIT sobre a minha decisão.

**Critérios de aceitação:**

- A confirmação/recusa deve ocorrer dentro do sistema

- Deve haver um link no email direcionando para o sistema para confirmar ou recusar

- O funcionário da escola deve ser capaz de visualizar as informações da visita solicitada, incluindo a data e hora propostas no sistema

- Se a opção de recusa for selecionada, o funcionário da escola deve ser capaz de inserir um motivo para a recusa

- O sistema deve enviar automaticamente um email para o DNIT com a decisão da escola, incluindo o motivo da recusa, se aplicável

### Funcionalidade: Verificação de Agenda DNIT
 
**US14:** Eu como usuário funcionário do DNIT gostaria de verificar a agenda do DNIT com horários disponíveis, para saber quando terei disponibilidade para realizar as ações.

**Critérios de aceitação:**

- O sistema deve fornecer um calendário Outlook com os horários disponíveis para a realização das ações de educação de trânsito

- O calendário deve mostrar os dias e horários em que os funcionários do DNIT estão disponíveis para realizar as ações nas escolas

**US15:** Eu como usuário funcionário do DNIT gostaria de atualizar eventos na agenda, para manter a agenda atualizada.

**Critérios de aceitação:**

- O sistema deve permitir que o usuário selecione o horário desejado e o agende para a realização da ação na escola selecionada.

- O sistema deve permitir que o usuário desmarque um evento na agenda.

- O sistema deve permitir que o usuário edite um evento na agenda.


**US16:** Eu como usuário funcionário da escola gostaria de solicitar o cancelamento de uma visita e receber uma resposta, para me organizar em casos de imprevistos que impeçam a visita na escola.

**Critérios de aceitação:**

- O funcionário da escola deve entrar no sistema para cancelar o evento

- O sistema vai enviar um link de acesso temporário para a escola por email

- Pelo link temporário vai ser realizado cancelamento no sistema

- O sistema deve solicitar a justificativa do cancelamento

- Na lista de escolas priorizadas deve-se indicar as escolas que cancelaram. ***

- Ao ser cancelado o evento, o sistema envia um email indicando que o cancelamento foi registrado


**US17:** Eu como usuário funcionário da escola gostaria de solicitar o reagendamento de uma visita.

**Critérios de aceitação:**

- O funcionário da escola deve entrar no sistema para reagendar a visita

- O sistema vai enviar um link de acesso temporário para a escola por email

- Pelo link temporário vai ser solicitado o reagendamento da visita no sistema

- O sistema deve solicitar a justificativa do reagendamento

- Na lista de escolas priorizadas deve-se indicar as escolas que solicitaram reagendamento

- Ao ser solicitado o reagendamento, o sistema envia um email indicando que a solicitação foi recebida

## Requisitos não funcionais:

### **Funcionalidade:** Cálculo de UPS