# Modelagem de Dados

A modelagem de dados é um processo fundamental na área de gerenciamento de informações. Envolve a criação de representações estruturadas que descrevem entidades, relacionamentos e atributos dos dados, permitindo uma compreensão clara e organizada dos mesmos. Através da modelagem de dados, é possível criar diagramas que retratam de forma visual como os dados estão relacionados entre si, facilitando a análise, a tomada de decisões e o desenvolvimento de sistemas de informação eficientes.

# Diagrama DER

Um dos diagramas amplamente utilizados na modelagem de dados é o Diagrama de Entidade-Relacionamento (DER). Ele permite representar as entidades (objetos do mundo real) e seus relacionamentos em um sistema de informação. 

O diagrama DER é uma ferramenta valiosa para visualizar a estrutura do banco de dados, identificar chaves primárias e estrangeiras, e compreender as relações entre as entidades, auxiliando no desenvolvimento e na implementação de sistemas de banco de dados eficazes.

O DER é composto por retângulos que representam as entidades, linhas que mostram as conexões entre elas, elipses que denotam os atributos das entidades e losangos que indicam o relacionamento entre duas entidades. 

Veja abaixo algumas versões dos diagramas DER feito pelo time:

## DER 1

A primeira versão do DER indica apenas uma entidade para representar o funcionário. E para diferenciar um funcionário DNIT de um funcionário de uma empresa terceirizada, temos o atributo "Tipo" nessa entidade, podendo ser Tipo DNIT ou Tipo Terceirizada.

<iframe style="border: 1px solid rgba(0, 0, 0, 0.1);" width="800" height="450" src="https://www.figma.com/embed?embed_host=share&url=https%3A%2F%2Fwww.figma.com%2Ffile%2F0DqIpGsir4qyuqMo7VqaWT%2FDER-1%3Ftype%3Ddesign%26node-id%3D0%253A1%26t%3DUVrFJ3WOfoowMx2q-1" allowfullscreen></iframe>

## DER 2

Na segunda versão separamos o funcionário DNIT e funcionário Terceirizada em duas entidades diferentes.

<iframe style="border: 1px solid rgba(0, 0, 0, 0.1);" width="800" height="450" src="https://www.figma.com/embed?embed_host=share&url=https%3A%2F%2Fwww.figma.com%2Ffile%2F5YYpopoJUVvyEG1mwS48Pk%2FDER-2%3Ftype%3Ddesign%26node-id%3D3%253A333%26t%3DMSvBIhVRs7KWjrBj-1" allowfullscreen></iframe>

## DER 3 (Atual)

Na terceira versão, fazemos um especialização para o funcinário DNIT e funcionário Terceirizada. Criamos a generalização "Funcionário" que vai conter os atributos em comum, e as especializações com os atributos específicos.
Em discussão com a equipe, concluimos que esta especialização é a melhor forma de lidar com as diferenças de dados fornecidos para os dois tipos de usuario, mantendo suas atibuições em comum.
Este DER representa a versão mais recente.

<iframe style="border: 1px solid rgba(0, 0, 0, 0.1);" width="800" height="450" src="https://www.figma.com/embed?embed_host=share&url=https%3A%2F%2Fwww.figma.com%2Ffile%2FJmNx2j4hrJsPu9zupsnamS%2FDER-3%3Ftype%3Ddesign%26node-id%3D0%253A1%26t%3DXE0Uet0nRxAAoySH-1" allowfullscreen></iframe>

