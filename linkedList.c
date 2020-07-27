#include<stdio.h>



struct Node
{
    int val;
    struct Node* next;
};
typedef struct Node node_t;

node_t* makeNode(int val) {
    struct Node *node = malloc(sizeof(node_t));
    node->val = val;
}

void addNode(node_t* headNode, node_t* newNode) {
    if(headNode->next) {
        headNode->next = newNode;
    }

    addNode(headNode->next,newNode);
}

void addNodeByValue(node_t* headNode, int val) {
    addNode(headNode,makeNode(val));
}

void printNode(node_t* headNode) {
    printf("%d-> ",headNode->val);
    if(headNode->next) {
        printNode(headNode->next);
    }
}
