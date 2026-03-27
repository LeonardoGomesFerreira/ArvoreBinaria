# 🌳 Árvore Binária em C

Implementação simples e didática de uma **árvore binária em C**, com foco em manipulação de ponteiros, alocação dinâmica de memória e navegação entre nodos.

---

## 📖 Visão Geral

Este projeto demonstra a construção manual de uma árvore binária utilizando `struct` e ponteiros em C. É ideal para fins educacionais, ajudando a entender como estruturas de dados funcionam internamente.

---

## 🧠 Conceitos Abordados

* Estruturas (`struct`)
* Ponteiros
* Alocação dinâmica (`malloc`)
* Representação de árvores
* Navegação entre nodos
* Verificação de ponteiros nulos

---

## 🏗️ Estrutura de Dados

Cada nodo da árvore é definido da seguinte forma:

```c
typedef struct Nodo {
    int valor;
    struct Nodo *esq;
    struct Nodo *dir;
} Nodo;
```

---

## 🌲 Representação da Árvore

A estrutura criada no programa é:

```
        5
       / \
      2   8
       \
        4
         \
         10
```

---

## ⚙️ Funcionalidades

### ✔️ Criação manual de nodos

Os nodos são alocados dinamicamente com `malloc`.

---

### ✔️ Navegação com ponteiros

Exemplo de acesso ao nodo `4` a partir do nodo `5`:

```c
nodo5->esq->dir->valor
```

---

### ✔️ Função para imprimir nodo

```c
void imprimir(Nodo *n) {
    if (n != NULL) {
        printf("Valor do nodo: %d\n", n->valor);
    }
}
```

---

### ✔️ Verificação de nodo vazio

```c
if (nodo8->esq == NULL) {
    printf("Vazio\n");
}
```

---

## ▶️ Como Executar

### 🔧 Compilação

```bash
gcc main.c -o arvore
```

### ▶️ Execução

```bash
./arvore
```

---

## 💻 Saída Esperada

```
Valor do nodo 4: 4
Valor do nodo: 5
Vazio
```

---

## 🚀 Melhorias Futuras

* [ ] Inserção automática (Árvore Binária de Busca - BST)
* [ ] Remoção de nodos
* [ ] Percursos (pré-ordem, em-ordem, pós-ordem)
* [ ] Liberação de memória (`free`)
* [ ] Interface interativa via terminal

---

## 📚 Objetivo Educacional

Este projeto é ideal para quem deseja:

* Entender o funcionamento interno de árvores
* Praticar manipulação de ponteiros
* Construir uma base sólida em estruturas de dados em C

---

## 👨‍💻 Autor

Leonardo Gomes Ferreira

---
