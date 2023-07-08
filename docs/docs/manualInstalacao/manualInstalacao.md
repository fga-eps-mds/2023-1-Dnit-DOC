## Frontend
É a inteface, reactjs,typescript

### Como instalar

#### Pré-requisitos

- Instalar a versão LTS do NodeJS
- instalar o yarn

E caso vá utilizar o docker-compose:

- Instalar o docker
- Instalar o docker-compose

#### Com o docker-compose
O  Docker é uma ferramenta criada facilitar o desenvolvimento, a implantação e a execução de aplicativos, permitindo que eles sejam isolados e executados de forma consistente em diferentes ambientes (como sistemas operacionais diferentes). 

##### Passo-a-passo

* Na primeira vez que for usar, ou após instalar uma nova dependencia.
  * No terminal, dentro da raiz do projeto:
    1. Rode o comando `yarn`, e aguarde a conclusão de sua execução
    2. Rodar o comando `sudo docker-compose build`, e aguarde a conclusão de sua execução
    3. E por fim, rode o comando `sudo docker-compose up`, para iniciar a aplicação
   
* Nas vezes subsequentes, caso não tenha adicionado novas dependencias:
  * Rodar o comando `sudo docker-compose up`
* Agora a interface pode ser utilizada no navegador com o endereço _http://localhost:3000_

#### Sem utilizar o docker-compose

#### Passo-a-passo

* Na primeira vez que for usar, ou após instalar uma nova dependencia.
  * No terminal, dentro da raiz do projeto:
    1. Rode o comando `yarn`, e aguarde a conclusão de sua execução
    2. Rode o comando `yarn start`
   
* Nas vezes subsequentes, caso não tenha adicionado novas dependencias:
  * Rodar o comando `yarn start`
* Agora a interface pode ser utilizada no navegador com o endereço _http://localhost:3000_


### Encerrando a aplicação

* Para encerrar execução da aplicação:
  1. Vá até o terminal em que a mesma esta sendo executada.
  2. Pressione simultaneamente as teclas **ctrl**+**c**

## Microsserviço

## Histórico de versionamento

| Versão | Data       | Modificação                                         | Autor                 |
| ------ | ---------- | --------------------------------------------------- | --------------------- |
| 1.0    | 08/07/2023 | Abertura do documento e instruções para o frontend. | João Gabriel de Matos |