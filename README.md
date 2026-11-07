# 📚 Sistema de Gerenciamento de Biblioteca

Este projeto consiste em um sistema de gerenciamento de biblioteca simples desenvolvido em **Linguagem C**. O objetivo é permitir o cadastro, a busca e a listagem de livros utilizando dados estruturados (`struct`) e módulos organizados em arquivos `.c` e `.h`.

## 📌 Funcionalidades

1. **Cadastro de Livros:** Permite cadastrar até 100 livros contendo Título, Autor, Ano de Publicação e ISBN.

2. **Busca por Título:** Realiza a busca no sistema a partir do título informado e exibe as informações correspondentes caso o livro seja encontrado.

3. **Listagem Geral:** Exibe no console a lista completa dos livros cadastrados no sistema.

## 📂 Estrutura do Projeto

O projeto é modularizado para manter a organização e divisão das responsabilidades entre os arquivos:

```
projeto-sistema-gerenciador-de-biblioteca/
├── main.c          # Fluxo principal e menu interativo do sistema
├── structs.h       # Definição da estrutura 'livro'
├── cadastro.h      # Protótipo da função de cadastro
├── cadastro.c      # Implementação da função de cadastro de livros
├── busca.h         # Protótipo da função de busca
├── busca.c         # Implementação da busca por título
├── listagem.h      # Protótipo da função de listagem
└── listagem.c      # Implementação da exibição dos livros
```

## 🛠️ Estrutura dos Dados

A estrutura principal utilizada no projeto é definida em `structs.h`:

```c
typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
    char isbn[20];
} livro;
```

## 🚀 Como Compilar e Executar

### Pré-requisitos

* Um compilador C (como `gcc` via MinGW no Windows, ou nativo no Linux/macOS).

### Passo a Passo

1. **Abra o terminal** na pasta raiz do projeto onde estão localizados os arquivos `.c` e `.h`.

2. **Compile o projeto** executando o seguinte comando no terminal:

   ```bash
   gcc main.c cadastro.c busca.c listagem.c -o sistema_biblioteca
   ```

3. **Execute a aplicação:**

   * **Linux / macOS:**

     ```bash
     ./sistema_biblioteca
     ```

   * **Windows (CMD / PowerShell):**

     ```cmd
     sistema_biblioteca.exe
     ```

## 💻 Instruções de Uso

Ao iniciar o programa, um menu interativo será exibido no console:

```text
digite as opcoes a seguir:
(1) cadastro de livros.
(2) busca livros por titulo.
(3) lista todos os livros.
```

* Digite `1` para cadastrar novos livros.
* Digite `2` para buscar um livro cadastrado pelo seu título.
* Digite `3` para visualizar a lista completa de livros cadastrados.
* Após executar uma opção, escolha entre retornar ao menu principal ou encerrar o programa.