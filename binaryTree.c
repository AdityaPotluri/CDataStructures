#include<stdio.h>
#include<stdbool.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* newNode(int data) {
    struct Node *node = malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    
}

void addAnotherNode(struct Node* newNode,struct Node* headNode ) {
    int rightNodeVal = headNode ->right ->data;
    int leftNodeVal = headNode ->left ->data;
    int headNodeVal = headNode ->data;
    int newNodeVal = newNode ->data;


    if(newNodeVal > headNodeVal && !rightNodeVal) {
        headNode ->right ->data = newNode;
        return;
    }
    else if(newNodeVal < headNodeVal && !leftNodeVal) {
        headNode ->left ->data = newNode;
        return;
    }
    
    if(newNodeVal < headNodeVal) {
        addAnotherNode(newNode, headNode->left);
    }
    else if(newNodeVal >= headNodeVal) {
        addAnotherNode(newNode,headNode->right );
    }
}

struct Node* searchNodeByData(int data, struct Node* headNode) {
    int headNodeVal = headNode ->data;
    if(data == headNodeVal) {
        return headNode;
    }

    else if(data >= headNodeVal && headNode->right) {
        return searchNodeByData(data,headNode->right);
    }

    else if(data < headNodeVal && headNode->left) {
        return searchNodeByData(data, headNode->left);
    }

    return NULL;
}




int main() {

}


