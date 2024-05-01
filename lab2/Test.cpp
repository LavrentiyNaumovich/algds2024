#include <gtest / gtest.h>
#include <gmock/gmock.h>
#include "Source.h"

// Тест для функции newNode
TEST(NewNodeTest, PositiveKey) {
    Node* node = newNode(10);
    EXPECT_EQ(node->key, 10);
    EXPECT_EQ(node->left, nullptr);
    EXPECT_EQ(node->right, nullptr);
    EXPECT_EQ(node->height, 1);
    free(node);
}

// Тесты для функции insert
TEST(InsertTest, SingleInsertion) {
    Node* root = nullptr;
    root = insert(root, 10);
    EXPECT_EQ(root->key, 10);
    EXPECT_EQ(root->left, nullptr);
    EXPECT_EQ(root->right, nullptr);
    EXPECT_EQ(root->height, 1);
    free(root);
}

TEST(InsertTest, MultipleInsertion) {
    Node* root = nullptr;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 25);

    
    printf("Tree after multiple insertions:\n");
    printTree(root, 0);
}

// Тесты для функции deleteNode
TEST(DeleteNodeTest, SingleDeletion) {
    Node* root = newNode(10);
    root = deleteNode(root, 10);
    EXPECT_EQ(root, nullptr);
}

TEST(DeleteNodeTest, MultipleDeletion) {
    Node* root = nullptr;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 25);

    root = deleteNode(root, 5);
    root = deleteNode(root, 20);

    printf("Tree after multiple deletions:\n");
    printTree(root, 0);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}