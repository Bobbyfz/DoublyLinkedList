#include "DoublyLinkedList.h"

int main(int argc,char* argv[])
{
    
    Node* list = NULL;
    for (int i = 1; i <= 10;i++)
    {
        int num = rand() % 100;
        pushNode(&list,num);
    }
 
    printList(list);
    printf("POP node: %d\n",nodePop(&list));
    printList(list);
    printf("add 25 to the last item in the list\n");
    appendNode(&list, 25);
    printList(list);
    return 0;
}

