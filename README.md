# 2023.1-Dnit-DOC

Repositorio para a documentação do projeto Dnit da disciplina de EPS/MDS do primeiro semestre do ano de 2023
para contriburi nesse repositorio siga as seguintes instruções:
#### Utilizando maquina virtual
Primeiramente crie uma maquina virtual
```
python3 -m venv env
```
ative-a através do comando
```
$ source env/bin/activate
```
ou se estiver no windows utilize
```
 .\env\Scripts\activate
```
Para sair da maquina virtual simplesmente digite no terminal:
```
deactivate
```
#### Instale as dependencias
```
pip install -r requirements.txt
```
#### Use o mkdocs
acesse a pasta de documentação
```
$ cd docs
```
e utilize os seguintes comandos:
* `mkdocs serve` - Inicia o servidor local para construção da documentação.
* `mkdocs build` - Faz a build da documentação.
* `mkdocs gh-deploy` - faz o deploy da documentação buildada para o github.