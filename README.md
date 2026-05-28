# user-registry-cli 🚀

Sistema simples e eficiente de cadastro de usuários em linha de comando desenvolvido em linguagem C. O projeto foi criado para consolidar conceitos de estruturas de dados (`struct`), manipulação de strings (`fgets` / `strcspn`) e gerenciamento do buffer de entrada do teclado.

## 📋 Funcionalidades

- 🆔 **Cadastro de ID**: Registro numérico único para identificação do usuário.
- 👤 **Captura de Nome**: Leitura segura de nomes compostos (com espaços) utilizando `fgets`.
- 🔑 **Armazenamento de Senha**: Campo numérico para simulação de credenciais de acesso.
- 📑 **Exibição em Massa**: Listagem formatada de todos os usuários cadastrados ao final da execução.

## 🛠️ Tecnologias Utilizadas

- **Linguagem:** C (Padrão C11 ou superior)
- **Bibliotecas Padrão:** `stdio.h` e `string.h`

## 🧠 Conceitos Aplicados

Este projeto demonstra o domínio de boas práticas fundamentais em C:
1. **Uso de Vetores de Estruturas (`struct`):** Organização de múltiplos registros de dados sob um mesmo tipo customizado.
2. **Tratamento de Buffer (`getchar`):** Solução do problema de "pulo" de leitura de strings após a captura de dados numéricos.
3. **Limpeza de Strings:** Remoção automática do caractere de nova linha (`\n`) capturado pelo `fgets` através da função `strcspn`.

## 📬 Contato

Desenvolvido por Gabriel Arthur Santos Villlarejos
- **LinkedIn:** [Gabriel Vilarejos]([https://linkedin.com](https://www.linkedin.com/in/gabriel-villarejos-3688802b7/))
