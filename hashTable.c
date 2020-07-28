#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

#define NAMESIZE 256
#define TABLE_SIZE 10

typedef struct
{
    char name[NAMESIZE];
    int balance;
} BankAccount;

unsigned int hash(char *name) {
    int length = strnlen(name, NAMESIZE);
    unsigned int hash_val = 0;
    for(int i = 0; i < length; i++) {
        hash_val += name[i];
        hash_val *= rand() % TABLE_SIZE;
    }
    return hash_val;
}

BankAccount * hashTable[TABLE_SIZE];

void initHashTable() {
    for(int i=0; i<TABLE_SIZE; i++) {
        hashTable[i] = NULL;
    }
}

void printTable() {
    for(int i = 0; i<TABLE_SIZE; i++) {
        if(hashTable[i] == NULL) {
            printf("NULL\n");
        } else {
            printf("%s %d\n", hashTable[i]->name, hashTable[i]->balance);
        }
    }
}

bool insertBankAccount(BankAccount* ba) {
    if(ba == NULL) return false; 
    unsigned int index = hash(ba->name);
    if(!hashTable[index]) {
        return false;
    }
    hashTable[index] = ba;
    return true;
}

int searchByBankAccount(BankAccount* ba) {
    if(ba == NULL) return NULL;
    unsigned int index = hash(ba->name);
    if(hashTable[index]) {
        return hashTable[index];
    }
    return NULL;
}

int main() {
    init_hash_table();
    printTable();
    return 0;
}




















