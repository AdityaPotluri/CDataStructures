#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#define STACK_LENGTH 5
#define EMPTY -1

int my_stack[STACK_LENGTH];
int top = EMPTY;

bool push(int item) {
    if(top >= STACK_LENGTH -1) return false;

    top++;
    my_stack[top] = item;
    return true;
}

int pop() {
    // assuming that no one would ever push an int min to the stack wish C had exceptions
    if(top == EMPTY) return INT_MIN; 

    int result = my_stack[top];
    top--;
    return result;
}

int peek() {
    return my_stack[top];
}

bool isEmpty() {
    return top == -1;
}