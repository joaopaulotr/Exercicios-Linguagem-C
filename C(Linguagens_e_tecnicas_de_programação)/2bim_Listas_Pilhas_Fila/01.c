#include <stdio.h>
#include <stdlib.h>

// Estrutura para os nós
typedef struct Node {
    int data;               // Dado armazenado no nó
    struct Node *next;      // Ponteiro para o próximo nó
} Node;

// Funções para Pilha
typedef struct {
    Node *top;              // Ponteiro para o topo da pilha
} Stack;

// Inicializa a pilha
void initStack(Stack *stack) {
    stack->top = NULL;      // Define o topo como NULL (pilha vazia)
}

// Insere um elemento no topo da pilha
void push(Stack *stack, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node)); // Aloca memória para o novo nó
    newNode->data = value;                        // Armazena o valor no nó
    newNode->next = stack->top;                   // Aponta para o nó anterior
    stack->top = newNode;                         // Atualiza o topo da pilha
}

// Remove e retorna o elemento do topo da pilha
int pop(Stack *stack) {
    if (stack->top == NULL) {                     // Verifica se a pilha está vazia
        printf("Pilha vazia!\n");
        return -1;
    }
    Node *temp = stack->top;                      // Armazena o nó do topo
    int value = temp->data;                       // Armazena o valor do nó
    stack->top = stack->top->next;                // Atualiza o topo para o próximo nó
    free(temp);                                   // Libera a memória do nó removido
    return value;                                 // Retorna o valor removido
}

// Imprime os elementos da pilha
void printStack(Stack *stack) {
    Node *current = stack->top;                   // Começa pelo topo da pilha
    printf("Pilha: ");
    while (current != NULL) {                     // Percorre a pilha até o final
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Funções para Fila
typedef struct {
    Node *front;          // Ponteiro para o início da fila
    Node *rear;           // Ponteiro para o final da fila
} Queue;

// Inicializa a fila
void initQueue(Queue *queue) {
    queue->front = queue->rear = NULL;            // Define início e fim como NULL (fila vazia)
}

// Insere um elemento no final da fila
void enqueue(Queue *queue, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node)); // Aloca memória para o novo nó
    newNode->data = value;                        // Armazena o valor no nó
    newNode->next = NULL;                         // Define o próximo nó como NULL
    if (queue->rear == NULL) {                    // Verifica se a fila está vazia
        queue->front = queue->rear = newNode;     // Atualiza início e fim da fila
        return;
    }
    queue->rear->next = newNode;                  // Atualiza o próximo do último nó
    queue->rear = newNode;                        // Atualiza o final da fila
}

// Remove e retorna o elemento do início da fila
int dequeue(Queue *queue) {
    if (queue->front == NULL) {                   // Verifica se a fila está vazia
        printf("Fila vazia!\n");
        return -1;
    }
    Node *temp = queue->front;                    // Armazena o nó do início
    int value = temp->data;                       // Armazena o valor do nó
    queue->front = queue->front->next;            // Atualiza o início para o próximo nó
    if (queue->front == NULL) {                   // Se a fila ficou vazia, atualiza o final
        queue->rear = NULL;
    }
    free(temp);                                   // Libera a memória do nó removido
    return value;                                 // Retorna o valor removido
}

// Imprime os elementos da fila
void printQueue(Queue *queue) {
    Node *current = queue->front;                 // Começa pelo início da fila
    printf("Fila: ");
    while (current != NULL) {                     // Percorre a fila até o final
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Funções para Lista
typedef struct {
    Node *head;           // Ponteiro para o início da lista
} List;

// Inicializa a lista
void initList(List *list) {
    list->head = NULL;    // Define o início como NULL (lista vazia)
}

// Insere um elemento no final da lista
void insertAtEnd(List *list, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node)); // Aloca memória para o novo nó
    newNode->data = value;                        // Armazena o valor no nó
    newNode->next = NULL;                         // Define o próximo nó como NULL
    if (list->head == NULL) {                     // Verifica se a lista está vazia
        list->head = newNode;                     // Atualiza o início da lista
        return;
    }
    Node *current = list->head;                   // Começa pelo início da lista
    while (current->next != NULL) {               // Percorre até o último nó
        current = current->next;
    }
    current->next = newNode;                      // Atualiza o próximo do último nó
}

// Imprime os elementos da lista
void printList(List *list) {
    Node *current = list->head;                   // Começa pelo início da lista
    printf("Lista: ");
    while (current != NULL) {                     // Percorre a lista até o final
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Função principal
int main() {
    Stack stack;
    Queue queue;
    List list;

    initStack(&stack);    // Inicializa a pilha
    initQueue(&queue);    // Inicializa a fila
    initList(&list);      // Inicializa a lista

    // Operações na Pilha
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    printStack(&stack);
    printf("Pop da pilha: %d\n", pop(&stack));
    printStack(&stack);

    // Operações na Fila
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    printQueue(&queue);
    printf("Dequeue da fila: %d\n", dequeue(&queue));
    printQueue(&queue);

    // Operações na Lista
    insertAtEnd(&list, 10);
    insertAtEnd(&list, 20);
    insertAtEnd(&list, 30);
    printList(&list);

    return 0;
}