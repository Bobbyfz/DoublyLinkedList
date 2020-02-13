#include "DoublyLinkedList.h"

void pushNode (Node** pHead,int data)
{
    Node* pNode = (Node*)malloc(sizeof(Node));
    
    if (pNode != NULL)
    {
        pNode -> data = data;
        pNode -> next = *pHead;
        pNode -> previous = NULL;
        
        if ((*pHead) != NULL)
        {
            (*pHead) -> previous = pNode;
        }
        *pHead = pNode;
    }
}

void appendNode(Node** pHead,int data)
{
    Node* pNode = (Node*)malloc(sizeof(Node));
    
    if (pNode != NULL)
    {
        Node* last = (*pHead);
        
        pNode -> data = data;
        pNode -> next = NULL;
        //checks to see if list is empty
        if((*pHead) == NULL)
        {
            // if it is then set new node as the head of the list
            pNode -> previous = NULL;
            (*pHead) = pNode;
            return;
        }
        //traverses to the last node of the list
        while (last -> next != NULL)
        {
            last = last -> next;
        }
        //change the next of last node
        last -> next = pNode;
        //change last node as previous of new node
        pNode -> previous = last;
        return;
    }
}

void printList(Node* list)
{
    while (list != NULL)
    {
        printf("%-7d",list -> data);
        list = list -> next;
    }
    printf("\n");
}

void deleteList(Node* list)
{
    while (list != NULL)
    {
        Node* tempNode = list;
        list = list -> next;
        free(tempNode);
    }
    
}

int nodePop(Node** pHead)
{
    if (pHead == NULL)
    {
        return -1;
    }
    
    Node* retNode = *pHead;
    int num = retNode -> data;
    (*pHead) = (*pHead) -> next;
    (*pHead) -> previous = NULL;
    free(retNode);
    
    return num;
}



