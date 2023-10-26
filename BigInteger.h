#ifndef BIGINTEGER_H
#define BIGINTEGER_H

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct BigInteger{
    struct node* head;
    long int length;
    char sign;
};

struct BigInteger initialize(char* s);
struct BigInteger add(struct BigInteger num1, struct BigInteger num2);
struct BigInteger sub(struct BigInteger num1, struct BigInteger num2);
struct BigInteger mul(struct BigInteger num1, struct BigInteger num2);
struct node* insert(struct node* head, int val);
void insert_tail(struct BigInteger* num, int element);
long int length(struct node* head);
void displayLL(struct node* link);
void display(struct BigInteger b);
int compare(struct BigInteger num1, struct BigInteger num2);
void freeL(struct BigInteger* num);

#endif
