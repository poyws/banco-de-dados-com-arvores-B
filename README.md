# Banco de Dados com Árvores-B em C

## Descrição
Um banco de dados simples em C usando Árvores-B! Esse projeto é para quem quer entender melhor como funciona o armazenamento e a busca de dados com eficiência. Você pode fazer operações básicas como inserir, buscar e excluir chaves.

## Estrutura do Projeto
O código está dividido assim:

- **main.c**: Função principal que inicializa o banco de dados e faz os testes básicos.
- **b_tree.h**: Declara a estrutura e as funções da Árvore-B.
- **b_tree.c**: Implementa as funções de criação, inserção, busca e exclusão da Árvore-B.
- **database.h**: Declara o banco de dados e as funções de interface para manipular dados.
- **database.c**: Implementa as funções para inserir, buscar e excluir dados no banco.

## Funcionalidades
- **Inserção**: Adiciona uma nova chave.
- **Busca**: Verifica se uma chave existe no banco.
- **Exclusão**: Remove uma chave.

# Licença
**Livre** para uso educacional. Aprenda e divirta-se!

## Compilação
__Para compilar o programa, abra o terminal na pasta do projeto e execute:__

```bash
gcc main.c b_tree.c database.c -o btree_db
