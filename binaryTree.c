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
    bool notFoundPlace = true;
    while(notFoundPlace) {
        int headNodeLeftData = headNode ->left ->data;
        int headNodeRightData = headNode ->right ->data;

        if((newNode->data) > headNodeRightData) {

        }        
    }
}

int main() {

}


