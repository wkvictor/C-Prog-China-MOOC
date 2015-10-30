#include "node.h"
#include <stdio.h>
#include <stdlib.h>

//typedef struct _node {
//    int value;
//    struct _node *next;
//} Node;


typedef struct _list {   // Notice this struct greatly improves flexibility
    Node* head;   // Notice head is just a pointer that points to a Node struct
} List;


void add_node(List* pList, int number);
void print_list(const List* pList);
void search_list(const List* pList);
void delete_list(List* pList);
void free_list(List* pList);



int main()
{
    List list;
    list.head = NULL;  // Notice how to get element even though it is a pointer
    
    int number;
    
    do {
        printf("Enter a new number (enter -1 to end): ");
        scanf("%d", &number);
        if (number != -1) {
            add_node(&list, number);
        }
    } while (number != -1);
    
    // Print the list
    print_list(&list);
    
    // Find an element
    search_list(&list);

    // delete an element (Notice the boundary case)
    delete_list(&list);
    
    // Print the list
    print_list(&list);
    

    // free the whole list
    free_list(&list);
    
    // Print the list
    print_list(&list);
    
    return 0;
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


void print_list(const List* pList)  // use the name pList to denote a pointer
{
    //    // my implementation
    //    Node* ptr = pList->head;     // Notice how to get element even though it is a pointer
    //    while (ptr) {
    //        printf("%d\t", ptr->value);
    //        ptr = ptr->next;
    //    }
    //    printf("\n");
    
    printf("The current list is\n ");
    Node* p;
    for (p=pList->head; p; p=p->next) {   // Classic implementation
        printf("%d\t", p->value);
    }
    printf("\n");
}


void search_list(const List* pList)
{
    int number;
    printf("Enter a number for search: ");
    scanf("%d", &number);
    Node *p;
    int isFound = 0;
    for (p=pList->head; p; p=p->next){
        if (p->value == number){
            printf("Found\n");
            isFound = 1;
            break;
        }
    }
    if (!isFound) {
        printf("Not Found\n");
    }
    
}


void delete_list(List* pList)
{
    int number;
    printf("Enter a number to delete: ");
    scanf("%d", &number);
    Node* p;
    Node* q;
    for (q=NULL, p=pList->head; p; q=p, p=p->next) {
        if (p->value == number) {
            if (q) {           // Notice that any pointer at the left of -> must be checked
                q->next = p->next;
            } else {
                pList->head = p->next;
            }
            free(p);
            break;
        }
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







