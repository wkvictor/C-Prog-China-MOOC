#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;


typedef struct _list {   // Notice this struct greatly improves flexibility
    Node* head;   // Notice head is just a pointer that points to a Node struct
} List;


void add_node(List* pList, int number);
void reverse_print(const List* pList, const int cnt);
void free_list(List* pList);


int main()
{
    List list;
    list.head = NULL;  // Notice how to get element even though it is a pointer
    
    int number;
    int cnt=0;
    
//    printf("Enter a new number (enter -1 to end): ");
    do {
        scanf("%d", &number);
        if (number != -1) {
            add_node(&list, number);
            cnt += 1;
        }
    } while (number != -1);
    
    reverse_print(&list, cnt);
    
    free_list(&list);
    
    return 0;
}


void reverse_print(const List* pList, const int cnt)
{
    int* tmp_list = (int*)malloc(sizeof(int)*cnt);
    int i;
    Node* p;
    
    for (i=0, p=pList->head; p && i<cnt; i++, p=p->next) {   // Classic implementation
        tmp_list[i] = p->value;
    }
    
    for (i=cnt-1; i>=0; i--) {
        printf("%d ",tmp_list[i]);
    }
    
}



void add_node(List* pList, int number)
{
    // add to linked list
    Node *p = (Node*)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    
    // find the last
    Node *last = pList->head;
    if (last) {    // if last is not NULL
        while (last->next) {
            last = last->next;
        }
        last->next = p;   // attach
    } else {
        pList->head = p;
    }
}



void free_list(List* pList)
{
    Node* p;
    Node* q;
    for (p=pList->head; p; p=q) {
        q = p->next;
        free(p);
    }
}







