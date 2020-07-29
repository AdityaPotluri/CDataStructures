#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#include<stdlib.h>
#define MAX_LENGTH 5
#define EMPTY -1

typedef struct node{
    int val;
    node* next;
} node;


node* head = NULL;

bool push(int val) {
    node *newnode = malloc(sizeof(node));
    if(newnode == NULL) return false;
    newnode->val = val;
    newnode->next = head;
    return true;
}

int pop() {
    if(head == NULL) return EMPTY;
    int result = head->val;
    node *tmp = head;
    head = head ->next;
    free(tmp);
    return result;
}


