#ifndef DOUBLYLINKED_H
#define DOUBLYLINKED_H

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* previous;
    struct node* next;
};
typedef struct node Node;

void pushNode(Node** pHead,int data);
void appendNode(Node** pHead, int data);
void printList (Node* list);
void deleteList(Node* list);
int nodePop(Node** pHead);

#endif
