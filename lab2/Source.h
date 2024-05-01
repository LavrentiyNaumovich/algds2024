#ifndef SOURCE_H
#define SOURCE_H

// Структура узла дерева
typedef struct Node {
    int key;
    struct Node* left;
    struct Node* right;
    int height;
} Node;

// Создание нового узла
Node* newNode(int key);

// Получение высоты узла
int height(Node* node);

// Обновление высоты узла
void updateHeight(Node* node);

// Вращение вправо вокруг узла y
Node* rotateRight(Node* y);

// Вращение влево вокруг узла x
Node* rotateLeft(Node* x);

// Получение баланса узла
int getBalance(Node* node);

// Вставка ключа в дерево
Node* insert(Node* root, int key);

// Получение узла с минимальным значением ключа в дереве
Node* minValueNode(Node* node);

// Удаление ключа из дерева
Node* deleteNode(Node* root, int key);

void printTree(Node* root, int level);

#endif // SOURCE_H 
